// Header file Inclusion
#include "SamsungConnectivity.hpp"

Samsung_Connectivity::Samsung_Connectivity(std::string _1, std::string _2, std::string _3
                           , std::string _4, std::string _5)
        {
            Inputs = _1;
            Outputs = _2;
            HDCP_Supports = _3;
            USB_IO = _4;
            Multi_Input_Support = _5;
        }

        void Samsung_Connectivity::show()
        {
            using std::cout;
            using std::endl;    

                            
            cout << "----------------------- C O N N E C T I V I T Y -----------------------" << endl << endl;

            cout << "Inputs                                 : " << Inputs << endl;
            cout << "Outputs                                : " << Outputs << endl;
            cout << "HDCP Support                           : " << HDCP_Supports << endl;
            cout << "USB I/O                                : " << USB_IO << endl;
            cout << "Multi-Input Support (PIP/PBP)          : " << Multi_Input_Support << endl << endl;
        }