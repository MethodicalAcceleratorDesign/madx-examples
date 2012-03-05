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
 
 
 void drawlayout2                                     ()
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
 
 
 c->Range( -1 , -1 , 1 , 10 );
 
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
 s = new TBRIK("RECTA00003","RECTA00003","void",0.5,0.5, 0.9914448613738104 );
 s->SetLineColor( 4 );
 rotmatrix[0] =  1. ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -1.6940658945086009E-18 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  1.6940658945086007E-18 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  1. ;
 m = new TRotMatrix("mtx00003","mtx00003",rotmatrix);
 n = new TNode("NODE00003","NODE00003",s, 5.719072415719701E-17 , 0. , 2.1914448613738102 ,m);
 s = new TTUBE("DRIFT00004","DRIFT00004","void", 0.05 , 0.75 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  0.9659258262890683 ;
 rotmatrix[1] =  0. ;
 rotmatrix[2] =  -0.25881904510252074 ;
 rotmatrix[3] =  0. ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  0. ;
 rotmatrix[6] =  0.25881904510252074 ;
 rotmatrix[7] =  0. ;
 rotmatrix[8] =  0.9659258262890683 ;
 m = new TRotMatrix("mtx00004","mtx00004",rotmatrix);
 n = new TNode("NODE00004","NODE00004",s, 0.45516666826699376 , 0. , 3.907334092464422 ,m);
 s = new TBRIK("RECTA00005","RECTA00005","void",0.5,0.5, 0.1 );
 s->SetLineColor( 2 );
 rotmatrix[0] =  1. ;
 rotmatrix[1] =  4.987329993433318E-17 ;
 rotmatrix[2] =  -8.721051224930275E-17 ;
 rotmatrix[3] =  -8.679680083834468E-17 ;
 rotmatrix[4] =  0.8660254037844387 ;
 rotmatrix[5] =  -0.5 ;
 rotmatrix[6] =  5.058986911778357E-17 ;
 rotmatrix[7] =  0.5 ;
 rotmatrix[8] =  0.8660254037844387 ;
 m = new TRotMatrix("mtx00005","mtx00005",rotmatrix);
 n = new TNode("NODE00005","NODE00005",s, 0.6492809520938843 , 0.05 , 4.718381002559668 ,m);
 s = new TTUBE("DRIFT00006","DRIFT00006","void", 0.05 , 0.3 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  0.9659258262890683 ;
 rotmatrix[1] =  4.516343741490128E-17 ;
 rotmatrix[2] =  -0.2588190451025208 ;
 rotmatrix[3] =  -6.308013146460915E-17 ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  -6.092013316187292E-17 ;
 rotmatrix[6] =  0.2588190451025208 ;
 rotmatrix[7] =  7.517066935263378E-17 ;
 rotmatrix[8] =  0.9659258262890683 ;
 m = new TRotMatrix("mtx00006","mtx00006",rotmatrix);
 n = new TNode("NODE00006","NODE00006",s, 0.7786904746451447 , -4.683773823328214E-17 , 5.114741375325759 ,m);
 s = new TBRIK("RECTA00007","RECTA00007","void",0.5,0.5, 0.1 );
 s->SetLineColor( 3 );
 rotmatrix[0] =  0.9659258262890683 ;
 rotmatrix[1] =  4.51634374149013E-17 ;
 rotmatrix[2] =  -0.2588190451025208 ;
 rotmatrix[3] =  -6.308013146460916E-17 ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  -6.092013316187292E-17 ;
 rotmatrix[6] =  0.2588190451025208 ;
 rotmatrix[7] =  7.51706693526338E-17 ;
 rotmatrix[8] =  0.9659258262890683 ;
 m = new TRotMatrix("mtx00007","mtx00007",rotmatrix);
 n = new TNode("NODE00007","NODE00007",s, 0.882218092686153 , -1.6769470492228623E-17 , 5.501111705841387 ,m);
 s = new TTUBE("DRIFT00008","DRIFT00008","void", 0.05 , 0.3 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  0.9659258262890683 ;
 rotmatrix[1] =  4.51634374149013E-17 ;
 rotmatrix[2] =  -0.2588190451025208 ;
 rotmatrix[3] =  -6.308013146460916E-17 ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  -6.092013316187292E-17 ;
 rotmatrix[6] =  0.2588190451025208 ;
 rotmatrix[7] =  7.51706693526338E-17 ;
 rotmatrix[8] =  0.9659258262890683 ;
 m = new TRotMatrix("mtx00008","mtx00008",rotmatrix);
 n = new TNode("NODE00008","NODE00008",s, 0.9857457107271613 , 1.3298797248824895E-17 , 5.887482036357015 ,m);
 s = new TBRIK("RECTA00009","RECTA00009","void",0.5,0.5, 0.1 );
 s->SetLineColor( 2 );
 rotmatrix[0] =  0.9659258262890683 ;
 rotmatrix[1] =  4.51634374149013E-17 ;
 rotmatrix[2] =  -0.2588190451025208 ;
 rotmatrix[3] =  -6.308013146460916E-17 ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  -6.092013316187292E-17 ;
 rotmatrix[6] =  0.2588190451025208 ;
 rotmatrix[7] =  7.51706693526338E-17 ;
 rotmatrix[8] =  0.9659258262890683 ;
 m = new TRotMatrix("mtx00009","mtx00009",rotmatrix);
 n = new TNode("NODE00009","NODE00009",s, 1.0892733287681697 , 4.336706498987841E-17 , 6.273852366872642 ,m);
 s = new TTUBE("DRIFT00010","DRIFT00010","void", 0.05 , 0.75 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  0.9659258262890683 ;
 rotmatrix[1] =  4.51634374149013E-17 ;
 rotmatrix[2] =  -0.2588190451025208 ;
 rotmatrix[3] =  -6.308013146460916E-17 ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  -6.092013316187292E-17 ;
 rotmatrix[6] =  0.2588190451025208 ;
 rotmatrix[7] =  7.51706693526338E-17 ;
 rotmatrix[8] =  0.9659258262890683 ;
 m = new TRotMatrix("mtx00010","mtx00010",rotmatrix);
 n = new TNode("NODE00010","NODE00010",s, 1.3092695171053124 , 1.0726213393961714E-16 , 7.094889319218351 ,m);
 s = new TBRIK("RECTA00011","RECTA00011","void",0.5,0.5, 0.9914448613738104 );
 s->SetLineColor( 4 );
 rotmatrix[0] =  0.7071067811865474 ;
 rotmatrix[1] =  1.5273494472162087E-18 ;
 rotmatrix[2] =  -0.7071067811865476 ;
 rotmatrix[3] =  -6.308013146460914E-17 ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  -6.09201331618729E-17 ;
 rotmatrix[6] =  0.7071067811865476 ;
 rotmatrix[7] =  8.768142798631181E-17 ;
 rotmatrix[8] =  0.7071067811865474 ;
 m = new TRotMatrix("mtx00011","mtx00011",rotmatrix);
 n = new TNode("NODE00011","NODE00011",s, 2.2044411855821813 , 2.5057143716903916E-16 , 8.52039107358513 ,m);
 s = new TTUBE("DRIFT00012","DRIFT00012","void", 0.05 , 0.6 );
 s->SetLineColor( 18 );
 rotmatrix[0] =  0.7071067811865474 ;
 rotmatrix[1] =  1.5273494472162434E-18 ;
 rotmatrix[2] =  -0.7071067811865476 ;
 rotmatrix[3] =  -6.308013146460917E-17 ;
 rotmatrix[4] =  1. ;
 rotmatrix[5] =  -6.09201331618729E-17 ;
 rotmatrix[6] =  0.7071067811865476 ;
 rotmatrix[7] =  8.768142798631183E-17 ;
 rotmatrix[8] =  0.7071067811865474 ;
 m = new TRotMatrix("mtx00012","mtx00012",rotmatrix);
 n = new TNode("NODE00012","NODE00012",s, 3.5143545502266025 , 3.90510313390842E-16 , 9.46112061566452 ,m);
 
 mn->Draw("ogl");
 TGLViewer * v = (TGLViewer *)c->GetViewer3D();
 v->SetDrawStyle(TGLDrawFlags::kOutline);
 
 }
