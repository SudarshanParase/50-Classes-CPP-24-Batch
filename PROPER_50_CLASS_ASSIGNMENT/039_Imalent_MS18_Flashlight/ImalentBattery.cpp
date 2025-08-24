#include "ImalentBattery.hpp"

Imalent_Battery::Imalent_Battery
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6 )
        {
            Pack = _1;
            Capacity = _2;
            Runtime = _3;
            Recharge = _4;
            Charger = _5;
            Power = _6;
        }

void Imalent_Battery::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------- B A T T E R Y   &   P O W E R ----------------------" << endl << endl;

    cout << "Battery Pack                   : " << Pack << endl;
    cout << "Battery Capacity               : " << Capacity << endl;
    cout << "Runtime (Various Modes)        : " << Runtime << endl;
    cout << "Recharge Time                  : " << Recharge << endl;
    cout << "Charger Type                   : " << Charger << endl;
    cout << "Power Indicator                : " << Power << endl << endl;
}