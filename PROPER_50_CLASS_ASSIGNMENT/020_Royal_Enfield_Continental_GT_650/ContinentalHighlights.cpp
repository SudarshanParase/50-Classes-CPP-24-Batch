// Header File Inclusion
#include "ContinentalHighlights.hpp"

Continental_Highlights::Continental_Highlights
        (short int _1, std::string _2
        , std::string _3, short int _4 
        , std::string _5, short int _6)
        {
            Engine = _1;
            Mileage = _2;
            Transmission = _3;
            Kerb = _4;
            Fuel = _5;
            Seat = _6;
        }

void Continental_Highlights::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- K E Y   H I G H L I G H T S -----------------------" << endl << endl;

    cout << "Engine Capacity                                : " << Engine << " cc" << endl;
    cout << "Mileage                                        : " << Mileage << endl;
    cout << "Transmission                                   : " << Transmission << endl;
    cout << "Kerb Weight                                    : " << Kerb << " kg" << endl;
    cout << "Fuel Tank Capacity                             : " << Fuel << endl;
    cout << "Seat Height                                    : " << Seat << " mm" << endl << endl;
}