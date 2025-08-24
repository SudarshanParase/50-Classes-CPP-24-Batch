#include "ContinentalSeat.hpp"

Continental_Seat::Continental_Seat
        (char _1, char _2 
        , char _3, char _4
        , char _5)
        {
            Under = _1;
            Seat = _2;
            Backrest = _3;
            Footrest = _4;
            Grab_Rail = _5;
        }

void Continental_Seat::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- S E A T   &   S T O R A G E -----------------------" << endl << endl;

    cout << "Under Seat Storage                             : " << Under << endl;
    cout << "Pillion Seat                                   : " << Seat << endl;
    cout << "Pillion Backrest                               : " << Backrest << endl;
    cout << "Pillion Footrest                               : " << Footrest << endl;
    cout << "Pillion Grab Rail                              : " << Grab_Rail << endl << endl;
}