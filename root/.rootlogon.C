{
/**  Whitney Armstrong (whit@temple.edu)
 * 
 *   Uses scripts found in $HOME/src/
 *
 *   set_plot_style.cxx - 
 *      This script sets up a nice look color palette
 *   
 *  
 *
 */
   gErrorIgnoreLevel=1; // Ignore Info
   //gErrorIgnoreLevel=1001; // Ignore Info
   //gErrorIgnoreLevel=2001; // Ignore Warnings
   //gSystem->Load("libMinuit2.so");
   gSystem->Load("libEve");
   gSystem->Load("libFoam");
   gSystem->Load("libTreeViewer");
   gSystem->Load("libEG");
   gSystem->Load("libPythia6"); // this has to be loaded before libInSANE ... don't know why
   //gSystem->Load("libEGPythia6");

   // InSANE Libraries
   gSystem->AddIncludePath(" -I$HOME/include/InSANE");
   //  The following line breaks ACLIC for some reason.... 
   //gSystem->AddIncludePath("$InSANEDIR/main"); // for generated ANNs
   gSystem->Load("libInSANE.so");
   gROOT->SetMacroPath(Form("%s:%s/main/scripts",gROOT->GetMacroPath(),gSystem->Getenv("InSANEDIR")));

   // NucDB Libraries
   gSystem->AddIncludePath(" -I$HOME/include/NucDB  ");
   gSystem->Load("libNucDB.so");

   // WhitFit Libraries
   gSystem->AddIncludePath(" -I$HOME/include/WhitFit  ");
   gSystem->Load("libWhitFit.so");

   // ----------------------------------------------------------------------
   // Style
   // ----------------------------------------------------------------------
   gStyle->Reset();
   gROOT->LoadMacro("$HOME/.root/load_style.cxx");

   load_style("SingleSquarePlot");
   gROOT->SetStyle("SingleSquarePlot");

   //load_style("OldDefault");
   //gROOT->SetStyle("OldDefault");

   // load some useful scripts Creates a nice color palette
   gROOT->LoadMacro(Form("%s/src/set_plot_style.cxx",gSystem->Getenv("HOME") ) );
   gROOT->LoadMacro(Form("%s/src/color_scheme.cxx",gSystem->Getenv("HOME") ) );


   ///// use a pretty palette for color plots
   //gStyle->SetPalette(1,0);
   //set_plot_style();

   ///// Add new colors starting at 1000
   //add_new_colors();
   //create_colors_3000();
   //Int_t col =0;

   ////set_color_scheme(26.0,120,60,5,col=4000);
   ////set_color_scheme(26.0,120,60,5,col=4500,0.3);

   //set_color_scheme(60,0,30,50,col=4000);
   //set_color_scheme(60,0,30,50,col=4500,0.2);

   //set_color_scheme(23,100,50,0,col=5000);
   //set_color_scheme(45,55,0,100,col=6000);
   //set_color_scheme(30,5,50,150,col=7000);
   //set_color_scheme(60,0,30,50,col=8000);
   //set_color_scheme(30,40,30,50,col=9000);
   //set_color_scheme(23,100,50,0,col=10000);


//   set_color_scheme();

   //gStyle->SetOptLogz(0);
   //  if ncolors <= 0 a default palette (see below) of 50 colors is defined. 
   //  The colors defined in this palette are OK for coloring pads, labels.
   //  if ncolors == 1 && colors == 0, then a Pretty Palette with a Spectrum Violet->Red is created. 
   //  It is recommended to use this Pretty palette when drawing legos, surfaces or contours.
   //  if ncolors > 50 and colors=0, the DeepSea palette is used. 
   // (see TColor::CreateGradientColorTable for more details)
   // if ncolors > 0 and colors = 0, the default palette is used with a maximum of ncolors. 
   // make sure to include headers from my home are
   // gStyle->SetPalette(/*int ncolors*/1,/*int * colors*/0);


   // this allows you to use multiple root versions on the same system
   // without libraries constantly being recompiled.
   TString dirname = gROOT->GetVersion();
   dirname.ReplaceAll(".","_");
   dirname.ReplaceAll("/","_");
   dirname.Append("_libs");
   TString appname(gApplication->Argv(0));
   if(appname.Contains("loon")){
      appname="loon";
   }
   else appname="root";
   appname+="_";
   dirname.Prepend(appname);
   dirname.Prepend("/root_build/"); // base dir for compliled macros
   dirname.Prepend(gSystem->Getenv("HOME"));
   //cout<<"Setting build directory to: "<<dirname<<endl;
   //gSystem->mkdir(dirname.Data(),true); // make dir if it doesn't exist
   //gSystem->SetBuildDir(dirname);



   //std::cout << "hi" << std::endl;
   gROOT->ProcessLine(Form(".x %s/.rootlibconfig.C",gSystem->Getenv("HOME")));
}
