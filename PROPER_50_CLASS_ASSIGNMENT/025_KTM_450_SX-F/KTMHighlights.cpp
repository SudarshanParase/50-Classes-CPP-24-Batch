#include "KTMHighlights.hpp"

Ktm_HighLights::Ktm_HighLights
        (float _1, std::string _2 
        , short int _3, std::string _4 
        , short int _5, std::string _6 )
        {
            Engine = _1;
            Transmission = _2;
            Kerb = _3;
            Fuel_Tank = _4;
            Seat = _5;
            Max = _6;
        }

void Ktm_HighLights::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- K E Y   H I G H L I G H T S -----------------------" << endl << endl;

    cout << "Engine Capacity                                : " << Engine << " cc" << endl;
    cout << "Transmission                                   : " << Transmission << endl;
    cout << "Kerb Weight                                    : " << Kerb << " kg" << endl;
    cout << "Fuel Tank Capacity                             : " << Fuel_Tank << endl;
    cout << "Seat Height                                    : " << Seat << endl;
    cout << "Max Power                                      : " << Max << endl << endl;
}