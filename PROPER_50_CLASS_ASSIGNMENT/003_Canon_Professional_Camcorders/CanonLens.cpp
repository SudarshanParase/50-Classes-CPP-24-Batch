#include "CanonLens.hpp"

Canon_Lens::Canon_Lens(std::string _1, std::string _2, short int _3
                  ,std::string _4, std::string _5, short int _6
                  ,std::string _7, std::string _8, std::string _9)
                  {
                    Focal_Length = _1;
                    Equivalent_Focal_length = _2;
                    Optical_Zoom = _3;
                    Max_Digital_Zoom = _4;
                    Max_Aperture = _5;
                    Filter_Size = _6;
                    Control_Rings = _7;
                    Image_Stabilization = _8;
                    Focus_Control = _9;
                  }


        void Canon_Lens::show()
        {
            using std::cout;
            using std::endl;

            cout << "------------------------------ L E N S ----------------------------" << endl << endl;
            
            cout << "Focal Length                               : " << Focal_Length << endl;
            cout << "35mm Equivalent Focal Length               : " << Equivalent_Focal_length << endl;
            cout << "Optical Zoom Ratio                         : " << Optical_Zoom << "x" << endl;
            cout << "Max Digital Zoom                           : " << Max_Digital_Zoom << endl;
            cout << "Maximum Aperture                           : " << Max_Aperture << endl;
            cout << "Filter Size                                : " << Filter_Size << " mm" << endl;
            cout << "Control Rings                              : " << Control_Rings << endl;
            cout << "Image Stabilization                        : " << Image_Stabilization << endl;
            cout << "Focus Control                              : " << Focus_Control << endl << endl; 
        }