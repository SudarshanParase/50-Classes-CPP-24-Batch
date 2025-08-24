// Header File Inclusion
#include "SamsungBattery.hpp"

Samsung_Battery::Samsung_Battery
    (std::string _1, short int _2 
    , std::string _3, std::string _4 
    , char _5, std::string _6 )
    {
        Type = _1;
        Size = _2;
        Fast_Charging = _3;
        Wireless_Charging = _4;
        Reverse_Charging = _5;
        Reverse_Wireless_Charging = _6;
    }

void Samsung_Battery::show()
{
    using std::cout;
    using std::endl;
 
    cout << "-------------------------------- B A T T E R Y --------------------------------" << endl << endl;

    cout << "Type                           : " << Type << endl;
    cout << "Size                           : " << Size << endl;
    cout << "Fast Charging                  : " << Fast_Charging << endl;
    cout << "Wireless Charging              : " << Wireless_Charging << endl;
    cout << "Reverse Charging               : " << Reverse_Charging << endl;
    cout << "Reverse Wireless Charging      : " << Reverse_Wireless_Charging << endl << endl;
}