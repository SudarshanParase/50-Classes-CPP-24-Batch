// Header File Inclusion
#include "SamsungConnectivity.hpp"

Samsung_Connectivity::Samsung_Connectivity
        (char _1, char _2
        , char _3, char _4 
        , char _5, char _6 
        , std::string _7, char _8 
        , std::string _9, std::string _10 
        , std::string _11, std::string _12
        , std::string _13, char _14)
        {
            GPRS = _1;
            EDGE = _2;
            G3 = _3;
            G4 = _4;
            G5 = _5;
            Bands_5G = _6;
            Volte = _7;
            Vo5G = _8;
            Wifi = _9;
            Wifi_Version = _10;
            Bluetooth = _11;
            USB = _12;
            USB_Features = _13;
            IR_Blaster = _14;
        }

void Samsung_Connectivity::show()
{
    using std::cout;
    using std::endl;
 

    cout << "--------------------------- C O N N E C T I V I T Y ---------------------------" << endl << endl;

    cout << "GPRS                           : " << GPRS << endl;
    cout << "EDGE                           : " << EDGE << endl;
    cout << "3G                             : " << G3 << endl;
    cout << "4G                             : " << G4 << endl; 
    cout << "5G                             : " << G5 << endl;
    cout << "5G Bands                       : " << Bands_5G << endl;
    cout << "VoLTE                          : " << Volte << endl;
    cout << "Vo5G                           : " << Vo5G << endl;
    cout << "Wifi                           : " << Wifi << endl;
    cout << "Wifi Version                   : " << Wifi_Version << endl;
    cout << "Bluetooth                      : " << Bluetooth << endl;
    cout << "USB                            : " << USB << endl;
    cout << "USB Features                   : " << USB_Features << endl;
    cout << "IR Blaster                     : " << IR_Blaster << endl << endl;
}