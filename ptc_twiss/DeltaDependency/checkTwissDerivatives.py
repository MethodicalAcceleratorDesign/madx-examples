#!/usr/bin/python

import re

global maxError
maxError = float(0.0)
global precision
precision = float(1e-2)

twissParameters = ['beta11','alfa11','gama11','disp1','disp1p','disp1p2']

class Parser:
    def __init__(self):
        pass
    def parse(self,filename,sampleList):
    #    global sampleList
        f = open(filename,'r')
        lines = f.readlines()
        for line in lines:
            pat = re.compile(r'^[\s\t]*"[\w_\d\$]+"[\s\t]+([\d\.]+)[\s\t]+([\-\d\.]+)[\s\t]+([\-\d\.]+)[\s\t]+([\-\d\.]+)[\s\t]+([\-\d\.]+)[\s\t]+([\-\d\.]+)[\s\t]+([\-\d\.]+)[\s\t]+([\-\d\.]+)[\s\t]+([\-\d\.]+)[\s\t]+([\-\d\.]+)[\s\t]+([\-\d\.]+).*')
            match = re.search(pat,line)
            if match:
                # print 'match found\n'+match.group(0)
                s = match.group(1)
                beta11 = match.group(2)
                beta11p = match.group(3)
                alfa11 = match.group(4)
                alfa11p = match.group(5)
                gama11 = match.group(6)
                gama11p = match.group(7)
                disp1 = match.group(8)
                disp1p = match.group(9)
                disp1p2 = match.group(10)
                disp1p3 = match.group(11)
                # add this point to the list of samples
                deltap =0.0
                params = [float(beta11), float(alfa11), float(gama11), float(disp1), float(disp1p), float(disp1p2)]
                # disp1p both param and deriv
                derivatives = [float(beta11p), float(alfa11p), float(gama11p), float(disp1p), float(disp1p2), float(disp1p3)]
                sample = Sample(params,derivatives,deltap)
                sampleList = sampleList + [sample]
                # print 'in parser, sampleList has length:',len(sampleList)
        f.close()
        return sampleList

class Sample:
    # delta_p at which the Twiss parameters & derivatives are evaluated
    # Twiss parameters
    # Twiss parameters derivatives w.r.t delta_p
    def __init__(self,twissParams,twissDerivatives,deltap):
        self.twissParams = twissParams # convert to numeric (decimals with Python ver.2.4)
        self.twissDerivatives = twissDerivatives # convert to numeric (decimals with Python ver.2.4)
        self.deltap = deltap
    def printout(self):
         print 'Sample: '+'beta11='+str(self.twissParams)+\
               ' ,beta11p='+str(self.twissDerivatives)+',deltap='+str(self.deltap)       

def estimateDerivatives(lRef,lBefore,lAfter):
    global maxError
    global precision
    deltap = (0.00000001) # HARD-CODED FOR TIME-BEING !!!
    for i in range(0,len(lRef)): # for all samples
        for paramIndex in range(0,len(lRef[i].twissParams)): # beta, alpha, gamma ...
            derivative = lRef[i].twissDerivatives[paramIndex]
            approximation = (lAfter[i].twissParams[paramIndex]-lBefore[i].twissParams[paramIndex])/(2.0*deltap)
            if not (abs(derivative-approximation)<precision):
                print 'deriv='+str(derivative)+', approx='+str(approximation)+\
                      ', error='+str(100.0*abs(derivative-approximation)/((derivative+approximation)/2.0))+'%, '+\
                      'for '+str(twissParameters[paramIndex])+'='+str(lRef[i].twissParams[paramIndex])+\
                      '(-dp='+str(lBefore[i].twissParams[paramIndex])+'+dp='+str(lAfter[i].twissParams[paramIndex])+')'
                error = float(abs(100.0*abs(derivative-approximation)/((derivative+approximation)/2.0)))

                if (error>maxError):
                    maxError=error
                
            else:
                print "null derivative or approximation for "+str(twissParameters[paramIndex])
    
sampleList = [] # empty list
sampleListPlusDeltap = []
sampleListMinusDeltap = []

parser = Parser()

# collect samples from the first file (at deltap_ref - deltap_variation)
sampleList = parser.parse("twiss_ptc_ring_ref",sampleList) # fills-in the list with samples
sampleListPlusDeltap = parser.parse("twiss_ptc_ring_plus_deltap",sampleListPlusDeltap)
sampleListMinusDeltap = parser.parse("twiss_ptc_ring_minus_deltap",sampleListMinusDeltap)


derivatives = estimateDerivatives(sampleList,sampleListMinusDeltap,sampleListPlusDeltap)

print 'maxError='+str(maxError)
print 'done.'

