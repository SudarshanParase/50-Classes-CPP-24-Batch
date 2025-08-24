// Header File Inclusion
#include "MustangKeySpec.hpp"

Mustang_Key::Mustang_Key
    (short int _1, std::string _2 
    , std::string _3, short int _4 
    , std::string _5, std::string _6 
    , char _7 )
    {
        Engine_Capacity = _1;
        Power = _2;
        Torque = _3;
        Top_Speed = _4;
        Gearbox = _5;
        Fuel_Type = _6;
        Seating_Capacity = _7;
    }

void Mustang_Key::show()
{
    using std::cout;
    using std::endl;

    cout << "\n-------------------- K E Y   S P E C I F I C A T I O N S --------------------" << endl << endl;

    cout << "Engine Capacity                            : " << Engine_Capacity << endl;
    cout << "Power                                      : " << Power << endl;
    cout << "Torque                                     : " << Torque << endl;
    cout << "Top Speed                                  : " << Top_Speed << " km/h" << endl;
    cout << "Gearbox                                    : " << Gearbox << endl;
    cout << "Fuel Type                                  : " << Fuel_Type << endl;
    cout << "Seating Capacity                           : " << Seating_Capacity << endl << endl;
}