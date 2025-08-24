#include "CanonConnectivity.hpp"

Canon_Connectivity::Canon_Connectivity
            (std::string _1, std::string _2
            , std::string _3, std::string _4
            , std::string _5)
            {
                Data_IO = _1;
                Wireless = _2;
                Direct_Printing = _3;
                Internal_Memory = _4;
                OS_Compatibility = _5;
            }

void Canon_Connectivity::show()
{
    using std::cout;
    using std::endl;
    
    cout << "------------------------------ C O N N E C T I V I T Y ---------------------------" << endl << endl;
    
    cout << "Data I/O                           : " << Data_IO << endl; 
    cout << "Wireless                           : " << Wireless << endl;
    cout << "Direct Printing                    : " << Direct_Printing << endl;
    cout << "Internal Memory                    : " << Internal_Memory << endl;
    cout << "OS Compatibility                   : " << OS_Compatibility << endl << endl; 
}