#include "RouterSoftware.hpp"

Router_Software::Router_Software
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6 
        , std::string _7, std::string _8 
        , std::string _9)
        {
            Firmware = _1;
            Gaming = _2;
            QoS = _3;
            VPN = _4;
            Security = _5;
            Parental = _6;
            Mesh = _7;
            Mobile = _8;
            AiCloud = _9;
        }

void Router_Software::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------ S O F T W A R E   &   F E A T U R E S ------------------" << endl << endl;

    cout << "Firmware                       : " << Firmware << endl;
    cout << "Gaming Optimization            : " << Gaming << endl;
    cout << "QoS                            : " << QoS << endl;
    cout << "VPN                            : " << VPN << endl;
    cout << "Security                       : " << Security << endl;
    cout << "Parental Controls              : " << Parental << endl;
    cout << "Mesh Support                   : " << Mesh << endl;
    cout << "Mobile App                     : " << Mobile << endl;
    cout << "AiCloud                        : " << AiCloud << endl << endl;
 }