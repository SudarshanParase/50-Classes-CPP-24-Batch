#include "RouterWireless.hpp"

Router_Wireless::Router_Wireless
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7, std::string _8
        , std::string _9)
        {
            Frequency = _1;
            Wifi = _2;
            Channel = _3;
            Modulation = _4;
            MIMO = _5;
            OFDMA = _6;
            Multi = _7;
            Beamforming = _8;
            Range = _9;
        }

void Router_Wireless::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- W I R E L E S S   F E A T U R E S --------------------" << endl << endl;

    cout << "Frequency Bands                : " << Frequency << endl;
    cout << "Wi-Fi 7 Speed                  : " << Wifi << endl;
    cout << "Channel Width                  : " << Channel << endl;
    cout << "Modulation                     : " << Modulation << endl;
    cout << "MIMO                           : " << MIMO << endl;
    cout << "OFDMA                          : " << OFDMA << endl;
    cout << "Multi-Link Operation           : " << Multi << endl;
    cout << "Beamforming                    : " << Beamforming << endl;
    cout << "Range                          : " << Range << endl << endl;
}