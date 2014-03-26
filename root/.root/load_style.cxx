Int_t load_style(const TString &name ){

   TString  s1  = gSystem->Getenv("HOME"); 
   s1          += "/.root/style/";
   s1          += name;
   s1          += ".cxx";

   bool is_good_file = false;
   ifstream f(s1.Data());
   if (f.good()) {
      f.close();
      is_good_file = true;
   } else {
      f.close();
      is_good_file = false;
   }   
   if(!is_good_file) return -1;

   gROOT->Macro(s1.Data());
   gROOT->SetStyle(name.Data());
  
   //std::cout << " style set to " << name.Data() << std::endl;; 

   return 0;
}

