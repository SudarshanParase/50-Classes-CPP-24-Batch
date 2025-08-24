// Header File Inclusion
#include "AppleConnectivity.hpp"

Apple_Connectivity::Apple_Connectivity
        (char _1, char _2 
        , char _3, char _4 
        , char _5, std::string _6   
        , char _7, std::string _8
        , std::string _9, char _10)
        {
            GPRS = _1;
            EDGE = _2;
            G3 = _3;
            G4 = _4;
            G5 = _5;
            Wifi = _6;
            Wifi_Version = _7;
            Bluetooth = _8;
            USB = _9;
            USB_Features = _10;
        }

void Apple_Connectivity::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------- C O N N E C T I V I T Y ----------------------------" << endl << endl;

    cout << "GPRS                           : " << GPRS << endl;
    cout << "EDGE                           : " << EDGE << endl;
    cout << "3G                             : " << G3 << endl;
    cout << "4G                             : " << G4 << endl;
    cout << "5G                             : " << G5 << endl;
    cout << "Wifi                           : " << Wifi << endl;
    cout << "Wifi Version                   : " << Wifi_Version << endl;
    cout << "Bluetooth                      : " << Bluetooth << endl;
    cout << "USB                            : " << USB << endl;
    cout << "USB Features                   : " << USB_Features << endl << endl;
}