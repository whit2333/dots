#if !defined( __CINT__) || defined (__MAKECINT__)

#ifndef ROOT_TStyle
#include "TStyle.h"
#endif

#endif
/// Use this for PRL style plots 

void PRLAppearance(){

   gROOT->SetStyle("Plain");

   // use plain black on white colors
   gStyle->SetFrameBorderMode(0);
   gStyle->SetCanvasBorderMode(0);
   gStyle->SetPadBorderMode(0);
   gStyle->SetPadColor(0);
   gStyle->SetCanvasColor(0);
   gStyle->SetStatColor(0);
   //gStyle->SetFillColor(0);

   // set the paper & margin sizes
   gStyle->SetPaperSize(20,26);
   gStyle->SetPadTopMargin(0.05);
   gStyle->SetPadRightMargin(0.05);
   gStyle->SetPadBottomMargin(0.16);
   gStyle->SetPadLeftMargin(0.12);

   // use large Times-Roman fonts
   gStyle->SetTextFont(132);
   gStyle->SetTextSize(0.08);
   // axis labels (values) 
   gStyle->SetLabelFont(132,"x");
   gStyle->SetLabelFont(132,"y");
   gStyle->SetLabelFont(132,"z");
   // axis titles 
   gStyle->SetTitleFont(132,"x");
   gStyle->SetTitleFont(132,"y");
   gStyle->SetTitleFont(132,"z");
   // sizes 
   gStyle->SetLabelSize(0.05,"x");
   gStyle->SetTitleSize(0.06,"x");
   gStyle->SetLabelSize(0.05,"y");
   gStyle->SetTitleSize(0.06,"y");
   gStyle->SetLabelSize(0.05,"z");
   gStyle->SetTitleSize(0.06,"z");

   // use bold lines and markers
   gStyle->SetMarkerStyle(20);
   gStyle->SetHistLineWidth(1.85);
   gStyle->SetLineStyleString(2,"[12 12]"); // postscript dashes

   // get rid of X error bars and y error bar caps
   gStyle->SetErrorX(0.001);

   // do not display any of the standard histogram decorations
   gStyle->SetOptTitle(0);
   gStyle->SetOptStat(0);
   gStyle->SetOptFit(0);

   // put tick marks on top and RHS of plots
   // gStyle->SetPadTickX(1);
   // gStyle->SetPadTickY(1);

   // gROOT->SetStyle("Plain");
   // gStyle->SetPaperSize(TStyle::kUSLetter);
   // gStyle->SetPaperSize(18,22);
   // gStyle->SetOptFit(0);
   // gStyle->SetPalette(1);
   // gStyle->SetNdivisions(505);

   // gStyle->SetCanvasColor(10);
   // gStyle->SetPadTopMargin(.01);
   // //   gStyle->SetPadLeftMargin(.01);
   // gStyle->SetPadRightMargin(.05);
   // gStyle->SetPadBottomMargin(.10);
   // gStyle->SetTitleXOffset(0.8);
   // gStyle->SetTitleYOffset(0.8);
   // gStyle->SetLabelFont(42,"X");
   // gStyle->SetLabelFont(42,"Y");

   // gStyle->SetPadTickX(1);
   // gStyle->SetPadTickY(1);

   // // prepare gStyle to be useful
   // //   1 = solid
   // //   2 = long dash (30 10)
   // //   3 = dotted (4 8)
   // //   4 = dash-dot (15 12 4 12)
   // //   5 = short dash ( 15 15 )
   // //   6 = dash-dot-dot 
   // gStyle->SetLineStyleString(1,"[]");
   // gStyle->SetLineStyleString(2,"[30 10]");
   // gStyle->SetLineStyleString(3,"[4 8]");
   // gStyle->SetLineStyleString(4,"[15 12 4 12]");
   // gStyle->SetLineStyleString(5,"[15 15]");
   // gStyle->SetLineStyleString(6,"[15 12 4 12 4 12]");
   // gStyle->SetLabelSize(0.08,"X");
   // gStyle->SetLabelSize(0.08,"Y");
   // gStyle->SetNdivisions(505,"Y");
   // gStyle->SetOptDate(0);
   // gStyle->SetDateY(.98);
   // gStyle->SetStripDecimals(kFALSE);

   // gStyle->SetTitleSize(0.08,"T");
   // gStyle->SetStatW(0.45);

}
