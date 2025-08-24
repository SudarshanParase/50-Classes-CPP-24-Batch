#include "AppleBattery.hpp"

Apple_Battery::Apple_Battery
    (std::string _1, std::string _2
    , std::string _3, std::string _4)
    {
        Battery_Life = _1;
        Battery_Life_2 = _2;
        Charging_Type = _3;
        Full_Charge_Time = _4;
    }

void Apple_Battery::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- B A T T E R Y   &   C H A R G I N G ---------------------" << endl << endl;
    
    cout << "Battery Life (Normal)          : " << Battery_Life << endl;
    cout << "Battery Life (Low Power)       : " << Battery_Life_2 << endl;
    cout << "Charging Type                  : " << Charging_Type << endl;
    cout << "Full Charge Time               : " << Full_Charge_Time << endl << endl;
}