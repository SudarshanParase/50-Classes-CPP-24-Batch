#include "AtherBattery.hpp"

Ather_Battery::Ather_Battery
            (std::string _1, std::string _2
            , std::string _3, std::string _4
            , char _5, char _6
            , char _7, std::string _8
            , std::string _9, char _10
            , char _11 , char _12 
            , std::string _13 , std::string _14 
            , short int _15, std::string _16 )
        {
            Battery_Capacity = _1;
            Charging_Time_100 = _2;
            Charging_Time_80 = _3;
            Battery_Portability = _4;
            Fast_Charging_A = _5;
            Fast_Charging_T_100 = _6;
            Fast_Charging_T_80 = _7;
            Fast_Charger_Cost = _8;
            Battery_Type = _9;
            Portable_Battery = _10;
            No_of_Batteries = _11;
            Swappable_Battery = _12;
            Battery_IP = _13;
            Charger_Type = _14;
            Charger_OP = _15;
            Charger_Cost = _16;
        }

void Ather_Battery::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- B A T T E R Y   & C H A R G I N G --------------------" << endl << endl;
    
    cout << "Battery Capacity                           : " << Battery_Capacity << endl;
    cout << "Charging Time (0-100%)                     : " << Charging_Time_100 << endl;
    cout << "Charging Time (0-80%)                      : " << Charging_Time_80 << endl;
    cout << "Battery Portability                        : " << Battery_Portability << endl;
    cout << "Fast Charging Availability                 : " << Fast_Charging_A << endl;
    cout << "Fast Charging Time (0-100%)                : " << Fast_Charging_T_100 << endl;
    cout << "Fast Charging Time (0-80%)                 : " << Fast_Charging_T_80 << endl;
    cout << "Fast Charger Cost                          : " << Fast_Charger_Cost << endl;
    cout << "Battery Type                               : " << Battery_Type << endl;
    cout << "Portable Battery                           : " << Portable_Battery << endl;
    cout << "No. Of Batteries                           : " << No_of_Batteries << endl;
    cout << "Swappable Battery                          : " << Swappable_Battery << endl;
    cout << "Battery IP Rating                          : " << Battery_IP << endl;
    cout << "Charger Type                               : " << Charger_Type << endl;
    cout << "Charger Output                             : " << Charger_OP << "W" << endl;
    cout << "Charger Cost                               : " << Charger_Cost << endl << endl;
}