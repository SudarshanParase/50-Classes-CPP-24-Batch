#include "ArrmaBatteryCompatibility.hpp"

Arrma_Battery::Arrma_Battery
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            S2 = _1;
            S3 = _2;
            S4 = _3;
            S6 = _4;
            Battery_Tray_Size = _5;
        }

void Arrma_Battery::show()
{
    using std::cout;
    using std::endl;
 
    cout << "----------------------- B A T T E R Y   C O M P A T I B I L I T Y -----------------------" << endl << endl;

    cout << "2S LiPo                                : " << S2 << endl;
    cout << "3S LiPo                                : " << S3 << endl;
    cout << "4S LiPo                                : " << S4 << endl;
    cout << "6S LiPo                                : " << S6 << endl;
    cout << "Battery Tray Size                      : " << Battery_Tray_Size << endl << endl;
}