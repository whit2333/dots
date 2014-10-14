{

   SANERunManager      * rman = SANERunManager::GetRunManager();
   SANEAnalysisManager * aman = SANEAnalysisManager::GetAnalysisManager();
   //aman->SetupFolders();
   rman->SetVerbosity(0);

   using namespace CLHEP;

   /// use a pretty palette for color plots
   gStyle->SetPalette(1,0);
   set_plot_style();

   /// Add new colors starting at 1000
   add_new_colors();
   create_colors_3000();
   Int_t col =0;

   //set_color_scheme(26.0,120,60,5,col=4000);
   //set_color_scheme(26.0,120,60,5,col=4500,0.3);

   set_color_scheme(60,0,30,50,col=4000);
   set_color_scheme(60,0,30,50,col=4500,0.2);

   set_color_scheme(23,100,50,0,col=5000);
   set_color_scheme(45,55,0,100,col=6000);
   set_color_scheme(30,5,50,150,col=7000);
   set_color_scheme(60,0,30,50,col=8000);
   set_color_scheme(30,40,30,50,col=9000);
   set_color_scheme(23,100,50,0,col=10000);
}
