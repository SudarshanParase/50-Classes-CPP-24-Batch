#include "RouterPorts.hpp"

Router_Ports::Router_Ports
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7)
        {
            WAN = _1;
            SFP = _2;
            LAN = _3;
            G1_LAN = _4;
            USB = _5;
            WAN_Aggregation = _6;
            Link = _7;
        }

void Router_Ports::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- P O R T S   &   C O N N E C T I V I T Y -----------------" << endl << endl;

    cout << "10G WAN/LAN Port               : " << WAN << endl;
    cout << "10G SFP+ Port                  : " << SFP << endl;
    cout << "2.5G LAN Ports                 : " << LAN << endl;
    cout << "1G LAN Ports                   : " << G1_LAN << endl;
    cout << "USB Ports                      : " << USB << endl;
    cout << "WAN Aggregation                : " << WAN_Aggregation << endl;
    cout << "LAN Link Aggregation           : " << Link << endl << endl;
}