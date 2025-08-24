#include "AirbusDimensions.hpp"

Airbus_Dimensions::Airbus_Dimensions
        (std::string _1, std::string _2
        , std::string _3, std::string _4 
        , std::string _5, std::string _6)
        {
            Overall = _1;
            Wingspan = _2;
            Height = _3;
            Fuselage = _4;
            Cabin = _5;
            Cargo = _6;
        }

void Airbus_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------ D I M E N S I O N S   &   C A P A C I T Y ------------------" << endl << endl;
  
    cout << "Overall Length                 : " << Overall << endl;
    cout << "Wingspan                       : " << Wingspan << endl;
    cout << "Height                         : " << Height << endl;
    cout << "Fuselageg Width                : " << Fuselage << endl;
    cout << "Cabin Length                   : " << Cabin << endl;
    cout << "Cargo Volume/LD3 Capacity      : " << Cargo << endl << endl;
}