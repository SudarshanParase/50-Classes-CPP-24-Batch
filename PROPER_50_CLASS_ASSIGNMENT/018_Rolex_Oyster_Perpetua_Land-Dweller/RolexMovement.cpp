#include "RolexMovement.hpp"

Rolex_Movement::Rolex_Movement
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5, std::string _6
    , std::string _7)
    {
        Caliber = _1;
        Escapement = _2;
        Beat = _3;
        Power = _4;
        Shock = _5;
        Hairspring = _6;
        Caseback = _7;
    }

void Rolex_Movement::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- M O V E M E N T    &   P O W E R T R A I N ------------------" << endl << endl;
   
    cout << "Caliber                        : " << Caliber << endl;
    cout << "Escapement                     : " << Escapement << endl;
    cout << "Beat Rate                      : " << Beat << endl;
    cout << "Power Reserve                  : " << Power << endl;
    cout << "Shock Resistance               : " << Shock << endl;
    cout << "Hairspring                     : " << Hairspring << endl;
    cout << "Caseback                       : " << Caseback << endl << endl;
}