#include "FeadshipPropulsion.hpp"

Feadship_Propulsion::Feadship_Propulsion
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6)
        {
            Primary = _1;
            Fuel = _2;
            Backup = _3;
            Max = _4;
            Cruising = _5;
            Sustainability = _6;
        }

void Feadship_Propulsion::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- P R O P U L S I O N   &   R A N G E ---------------------" << endl << endl;

    cout << "Primary Propulsion             : " << Primary << endl; 
    cout << "Fuel-cell Output               : " << Fuel << endl;
    cout << "Backup Power                   : " << Backup << endl;
    cout << "Max Speed                      : " << Max << endl;
    cout << "Cruising Range                 : " << Cruising << endl;
    cout << "Sustainability                 : " << Sustainability << endl << endl;
}