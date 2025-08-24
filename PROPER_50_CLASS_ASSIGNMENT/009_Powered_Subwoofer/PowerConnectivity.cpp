// Header File Inclusion
#include "PowerConnectivity.hpp"

Power_Connectivity::Power_Connectivity
        (std::string _1, std::string _2 
        , char _3, char _4 
        , char _5, char _6 )
        {
            Audio = _1;
            Network = _2;
            USB = _3;
            Wireless = _4;
            Bluetooth = _5;
            Mobile = _6;
        }

void Power_Connectivity::show()
{
    using std::cout;
    using std::endl;
    
    cout << "------------------------------ C O N N E C T I V I T Y ---------------------------" << endl << endl;

    cout << "Audio I/O                          : " << Audio << endl;
    cout << "Network I/O                        : " << Network << endl;
    cout << "USB I/O                            : " << USB << endl;
    cout << "Wireless Connectivity              : " << Wireless << endl;
    cout << "Bluetooth                          : " << Bluetooth << endl;
    cout << "Mobile App Compatible              : " << Mobile << endl << endl;
}