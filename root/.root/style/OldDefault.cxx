Int_t OldDefault(){

   TStyle *sty  = new TStyle("OldDefault","Old Default");
   /// Turn off some borders
   sty->SetCanvasBorderMode(0);
   sty->SetFrameBorderMode(0);
   sty->SetPadBorderMode(0);
   sty->SetDrawBorder(0);
   sty->SetCanvasBorderSize(0);
   sty->SetFrameBorderSize(0);
   sty->SetPadBorderSize(0);
   sty->SetTitleBorderSize(0);

   sty->SetAxisColor(1,"xyz");
   sty->SetCanvasColor(0);
   sty->SetFrameFillColor(0);
   sty->SetFrameLineColor(1);
   sty->SetHistFillColor(0);
   sty->SetHistLineColor(1);
   //sty->SetPadColor(40);
   sty->SetPadColor(kWhite);
   sty->SetTitleColor(1);
   sty->SetTitleTextColor(1);
   sty->SetLabelColor(1,"xyz");


   /// Set the size of the default canvas
   sty->SetCanvasDefH(600);
   sty->SetCanvasDefW(600*1.6);
   //sty->SetCanvasDefX(10);
   //sty->SetCanvasDefY(10);

   /// Text font code = 10*fontnumber + precision
   // Fonts:  Helvetica (42), upright, normal
   // 132 times-medium-r-normal 
   int style_label_font=132;

   /// Axes Numbers are called "Labels"
   sty->SetLabelFont(style_label_font,"xyz");
   sty->SetLabelSize(0.04,"xyz");
   sty->SetLabelOffset(0.005,"y");
   sty->SetLabelOffset(0.009,"xz");
   sty->SetTitleSize(0.04,"xyz"); // axis titles
   sty->SetTitleOffset(1.005,"xyz");
   sty->SetStripDecimals(kFALSE); // if we have 1.5 do not set 1.0 -> 1
   TGaxis::SetMaxDigits(4); // restrict the number of digits in labels
   sty->SetLabelColor(1,"xyz");

   //sty->SetStatFont(style_label_font);
   sty->SetTitleFont(style_label_font,"xyz"); // axis titles

   // Histogram's Main Title
   //sty->SetTitleFont(style_label_font,"h"); // histogram title
   sty->SetTitleSize(0.04,"h"); // histogram title
   //sty->SetTitleH(0.1);
   //sty->SetTitleX(0.12); // spot where histogram title goes
   //sty->SetTitleY(0.99); // spot where histogram title goes
   //sty->SetTitleW(0.78); // width computed so that title is centered


   /// Marker Style
   sty->SetEndErrorSize(1);
   sty->SetErrorX(0.0);

   /// Set Line Widths
   sty->SetFrameLineWidth(1);
   sty->SetHistLineWidth(1);

   /// Show functions in blue(4)
   sty->SetFuncColor(1);
   sty->SetFuncStyle(10);
   sty->SetFuncWidth(1);

   /// Set all fill styles to be empty and line styles to be solid
   sty->SetFrameFillStyle(0);
   sty->SetHistFillStyle(1001);
   sty->SetFrameLineStyle(0);
   sty->SetHistLineStyle(0);
   sty->SetTitleStyle(0);
   sty->SetFuncStyle(1);

   /// Set margins 
   sty->SetPadTopMargin(0.09);
   //sty->SetPadBottomMargin(0.12);
   sty->SetPadBottomMargin(0.09);
   sty->SetPadLeftMargin(0.09);
   sty->SetPadRightMargin(0.09);

   /// Log axes
   sty->SetOptLogx(0);
   sty->SetOptLogy(0);
   sty->SetOptLogz(0);

   /// Set Data/Stat/... and other options
   sty->SetStatColor(0);
   sty->SetStatTextColor(1);
/*   sty->SetFitFormat("6.4e");*/
   sty->SetOptDate(0);
   sty->SetDateX(0.01);
   sty->SetDateY(0.01);
   sty->SetOptFile(0);

   sty->SetOptFit(0);
/*   sty->SetOptStat(1110);// no histogram title*/

   sty->SetOptStat(0);// no stats
   //sty->SetOptStat(10);// no histogram title
/*   sty->SetStatFormat("6.4e");*/
/*   sty->SetStatStyle(0); // hollow*/
/*   sty->SetStatStyle(1001); // filled*/
   sty->SetStatStyle(0); // hollow
   sty->SetStatBorderSize(0);
   sty->SetStatW(0.20);
   sty->SetStatH(0.125);
   //sty->SetStatX(0.90);
   //sty->SetStatY(0.90);
   sty->SetStatX(1.0-sty->GetPadRightMargin()-0.01);
   sty->SetStatY(1.0-sty->GetPadTopMargin()-0.01);

   sty->SetOptTitle(1);

   /// Set tick marks and turn off grids
   //sty->SetNdivisions(1005,"xyz");
   //sty->SetNdivisions(510,"xyz");
   sty->SetPadTickX(1);
   sty->SetPadTickY(1);
   sty->SetTickLength(0.02,"xyz");
   //sty->SetPadGridX(1);
   //sty->SetPadGridY(1);
   sty->SetPadGridX(0);
   sty->SetPadGridY(0);

   /// no supressed zeroes!
   sty->SetHistMinimumZero(kTRUE);

   /// Set paper size for life in the US
   sty->SetPaperSize(TStyle::kUSLetter);
   // or europe
   //sty->SetPaperSize(TStyle::kA4);

   /// Uncommenting this leads to weird font behavior (especially for small text)....
   //sty->SetCanvasPreferGL(kTRUE); 

   /// Force this style on all histograms
   //gROOT->ForceStyle();


   return 0;
}
