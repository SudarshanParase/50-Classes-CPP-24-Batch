// Header File Inclusion
#include "MustangPower.hpp"

Mustang_Power::Mustang_Power
    (std::string _1, std::string _2
    , float _3 , short int _4
    , std::string _5 )
    {
        Max_Power = _1;
        Max_Torque = _2;
        Weight = _3;
        Top_Speed = _4;
        Specific_Output = _5;
    }

void Mustang_Power::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------------- P O W E R ---------------------------------" << endl << endl;

    cout << "Max Power                                  : " << Max_Power << endl;
    cout << "Max Torque                                 : " << Max_Torque << endl;
    cout << "HP/Weight                                  : " << Weight << " hp per Tonne" << endl;
    cout << "Top Speed                                  : " << Top_Speed << " km/h" << endl;
    cout << "Specific Output                            : " << Specific_Output << endl << endl;
}