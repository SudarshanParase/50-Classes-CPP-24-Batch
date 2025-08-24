#include "MavicFlight.hpp"

Mavic_Flight::Mavic_Flight
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5)
    {
        Battery = _1;
        Flight = _2;
        Max = _3;
        Altitude = _4;
        Wind = _5;
    }

void Mavic_Flight::show()
{
    using std::cout;
    using std::endl;

    cout << "-------- F L I G H T   P E R F O R M A N C E   &   P R O P U L S I O N --------" << endl << endl;

    cout << "Battery                        : " << Battery << endl;
    cout << "Flight Time                    : " << Flight << endl;
    cout << "Max Speed                      : " << Max << endl;
    cout << "Max Altitude                   : " << Altitude << endl;
    cout << "Wind Resistance                : " << Wind << endl << endl;
}