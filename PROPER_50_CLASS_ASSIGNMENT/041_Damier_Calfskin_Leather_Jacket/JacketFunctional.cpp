#include "JacketFunctional.hpp"

Jacket_Functional::Jacket_Functional
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5 )
        {
            Insulation = _1;
            Weather = _2;
            Comfort = _3;
            Ventilation = _4;
            Temperature = _5;
        }

void Jacket_Functional::show()
{
    using std::cout;
    using std::endl;

    cout << "-- F U N C T I O N A L   &   T E C H N O L O G I C A L   E L E M E N T S --" << endl << endl;  

    cout << "Insulation                     : " << Insulation << endl;
    cout << "Weather Resistance             : " << Weather << endl;
    cout << "Comfort Liner                  : " << Comfort << endl;
    cout << "Ventilation                    : " << Ventilation << endl;
    cout << "Temperature Control            : " << Temperature << endl << endl;
}