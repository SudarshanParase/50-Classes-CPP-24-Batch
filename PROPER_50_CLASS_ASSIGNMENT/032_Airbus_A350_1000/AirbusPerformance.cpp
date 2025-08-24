#include "AirbusPerformance.hpp"

Airbus_Performance::Airbus_Performance
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6)
        {
            Engines = _1;
            Fuel_E = _2;
            MTOW = _3;
            Cruise = _4;
            Service = _5;
            Fuel_C = _6;
        }

void Airbus_Performance::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------ P E R F O R M A N C E   &   E N G I N E S ------------------" << endl << endl;

    cout << "Engines                        : " << Engines << endl;
    cout << "Fuel Efficiency                : " << Fuel_E << endl;
    cout << "MTOW                           : " << MTOW << endl;
    cout << "Cruise Speed                   : " << Cruise << endl;
    cout << "Service Ceiling                : " << Service << endl;
    cout << "Fuel Capacity                  : " << Fuel_C << endl << endl;
}