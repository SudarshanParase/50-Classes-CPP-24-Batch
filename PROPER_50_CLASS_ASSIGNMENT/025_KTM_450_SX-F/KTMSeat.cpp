#include "KTMSeat.hpp"

Ktm_Seat::Ktm_Seat
    (char _1, char _2 
    , char _3, char _4 
    , char _5)
    {
        Under_Seat_Storage = _1;
        Pillion_Seat = _2;
        Pillion_Backrest = _3;
        Pillion_Footrest = _4;
        Pillion_Grab_Rail = _5;
    }

void Ktm_Seat::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- S E A T   &   S T O R A G E -----------------------" << endl << endl;

    cout << "Under Seat Storage                             : " << Under_Seat_Storage << endl;
    cout << "Pillion Seat                                   : " << Pillion_Seat << endl;
    cout << "Pillion Backrest                               : " << Pillion_Backrest << endl;
    cout << "Pillion Footrest                               : " << Pillion_Footrest << endl;
    cout << "Pillion Grab Rail                              : " << Pillion_Grab_Rail << endl << endl;
}