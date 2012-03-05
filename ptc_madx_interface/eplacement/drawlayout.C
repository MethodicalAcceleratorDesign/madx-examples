 #ifndef __MAKECINT__
  #ifndef __CINT__
 
  #include "TROOT.h"
  #include "TCanvas.h"
  #include "Riostream.h"
 
  #include "TBRIK.h"
  #include "TShape.h"
  #include "TNode.h"
  #include "TCanvas.h"
  #include "TGLViewer.h"
  #include "TPoints3DABC.h"
  #include "TTUBE.h"
  #include "TRotMatrix.h"
 
  #endif
 #endif
 
 
 void drawlayout                                      ()
 {
 TShape* s;
 TNode* mn;
 TNode* n;
 Double_t rotmatrix[9];
 TRotMatrix* m;
 
 gSystem->Load("libGed");
 gSystem->Load("libRGL");
 
 TCanvas* c = new TCanvas("c","PTC Layout",10,10,800,600);
 
 s = new TBRIK("START","START","void",0.01,0.01,0.01);
 s->SetLineColor(2);
 mn = new TNode("NODE1","NODE1","START");
 mn->cd();
 
 
 c->Range( -1 , -1 , 1 , 11 );
 

 //cout<< 1 <<" CHICANE$START           "<<endl;

 //cout<< 2 <<" SEDFT                   "<<endl;
 s = new TTUBE("DRIFT00002","DRIFT00002","void", 0.05 , 0.6 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  1. ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  0. ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0. ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  1. ;
 m = new TRotMatrix("mtx00002","mtx00002",rotmatrix);
 n = new TNode("NODE00002","NODE00002",s, 0. , 0. , 0.6 ,m);

 //cout<< 3 <<" BEND1                   "<<endl;
 s = new TBRIK("RECTA00003","RECTA00003","void",0.5,0.5, 0.9659258262890683 );
 s->SetLineColor( 4 );
 rotmatrix[0] =  1. ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  0. ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0. ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  1. ;
 m = new TRotMatrix("mtx00003","mtx00003",rotmatrix);
 n = new TNode("NODE00003","NODE00003",s, 0. , 0. , 2.1659258262890684 ,m);

 //cout<< 4 <<" MIDDFT1                 "<<endl;
 s = new TTUBE("DRIFT00004","DRIFT00004","void", 0.05 , 0.75 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  0.8660254037844387 ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -0.49999999999999994 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0.49999999999999994 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  0.8660254037844387 ;
 m = new TRotMatrix("mtx00004","mtx00004",rotmatrix);
 n = new TNode("NODE00004","NODE00004",s, 0.8926380902050415 , 0. , 3.7813707054164656 ,m);

 //cout<< 5 <<" QF1                     "<<endl;
 s = new TBRIK("RECTA00005","RECTA00005","void",0.5,0.5, 0.1 );
 s->SetLineColor( 2 );
 rotmatrix[0] =  0.8660254037844387 ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -0.49999999999999994 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0.49999999999999994 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  0.8660254037844387 ;
 m = new TRotMatrix("mtx00005","mtx00005",rotmatrix);
 n = new TNode("NODE00005","NODE00005",s, 1.395580376545641 , 0. , 4.472492298633239 ,m);

 //cout<< 6 <<" MIDDFT2                 "<<endl;
 s = new TTUBE("DRIFT00006","DRIFT00006","void", 0.05 , 0.3 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  0.8660254037844387 ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -0.49999999999999994 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0.49999999999999994 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  0.8660254037844387 ;
 m = new TRotMatrix("mtx00006","mtx00006",rotmatrix);
 n = new TNode("NODE00006","NODE00006",s, 1.5176380902050415 , 0. , 4.863902460147015 ,m);

 //cout<< 7 <<" QD                      "<<endl;
 s = new TBRIK("RECTA00007","RECTA00007","void",0.5,0.5, 0.1 );
 s->SetLineColor( 3 );
 rotmatrix[0] =  0.8660254037844387 ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -0.49999999999999994 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0.49999999999999994 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  0.8660254037844387 ;
 m = new TRotMatrix("mtx00007","mtx00007",rotmatrix);
 n = new TNode("NODE00007","NODE00007",s, 1.7176380902050414 , 0. , 5.210312621660791 ,m);

 //cout<< 8 <<" MIDDFT2                 "<<endl;
 s = new TTUBE("DRIFT00008","DRIFT00008","void", 0.05 , 0.3 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  0.8660254037844387 ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -0.49999999999999994 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0.49999999999999994 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  0.8660254037844387 ;
 m = new TRotMatrix("mtx00008","mtx00008",rotmatrix);
 n = new TNode("NODE00008","NODE00008",s, 1.9176380902050414 , 0. , 5.556722783174568 ,m);

 //cout<< 9 <<" QF2                     "<<endl;
 s = new TBRIK("RECTA00009","RECTA00009","void",0.5,0.5, 0.1 );
 s->SetLineColor( 2 );
 rotmatrix[0] =  0.8660254037844387 ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -0.49999999999999994 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0.49999999999999994 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  0.8660254037844387 ;
 m = new TRotMatrix("mtx00009","mtx00009",rotmatrix);
 n = new TNode("NODE00009","NODE00009",s, 2.0396958038644417 , 0. , 5.948132944688344 ,m);

 //cout<< 10 <<" MIDDFT1                 "<<endl;
 s = new TTUBE("DRIFT00010","DRIFT00010","void", 0.05 , 0.75 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  0.8660254037844387 ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -0.49999999999999994 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0.49999999999999994 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  0.8660254037844387 ;
 m = new TRotMatrix("mtx00010","mtx00010",rotmatrix);
 n = new TNode("NODE00010","NODE00010",s, 2.542638090205041 , 0. , 6.639254537905117 ,m);

 //cout<< 11 <<" BEND2                   "<<endl;
 s = new TBRIK("RECTA00011","RECTA00011","void",0.5,0.5, 0.9659258262890683 );
 s->SetLineColor( 4 );
 rotmatrix[0] =  0.8660254037844387 ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -0.49999999999999994 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0.49999999999999994 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  0.8660254037844387 ;
 m = new TRotMatrix("mtx00011","mtx00011",rotmatrix);
 n = new TNode("NODE00011","NODE00011",s, 3.4006010033495753 , 0. , 8.125289894481254 ,m);

 //cout<< 12 <<" SEDFT                   "<<endl;
 s = new TTUBE("DRIFT00012","DRIFT00012","void", 0.05 , 0.6 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  1. ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -3.8055496254241206E-17 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  3.8055496254241206E-17 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  1. ;
 m = new TRotMatrix("mtx00012","mtx00012",rotmatrix);
 n = new TNode("NODE00012","NODE00012",s, 3.4352761804100824 , 0. , 9.820625243321581 ,m);

 //cout<< 13 <<" THEEND                  "<<endl;

 //cout<< 14 <<" CHICANE$END             "<<endl;
 
 mn->Draw("ogl");
 TGLViewer * v = (TGLViewer *)c->GetViewer3D();
 
 }
