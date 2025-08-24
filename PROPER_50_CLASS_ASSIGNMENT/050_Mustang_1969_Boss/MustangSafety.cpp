// Header File Inclusion
#include "MustangSafety.hpp"

Mustang_Safety::Mustang_Safety
    (std::string _1, char _2 
    , char _3, char _4 
    , char _5, char _6 
    , char _7, char _8 
    , char _9, char _10 
    , char _11, char _12 
    , char _13, char _14 
    , char _15, char _16
    , char _17, char _18)
    {
        NCAP_Rating = _1;
        Air_Bags = _2;
        Brake_Assist = _3;
        Anti_Lock = _4;
        Traction = _5;
        Electronic_Stability = _6;
        Electronic_Brake = _7;
        Tyre_Pressure = _8;
        Hill_Start = _9;
        Hill_Descent = _10;
        Parking_Assist = _11;
        Parking_Sensors = _12;
        Parking_Camera = _13;
        Central_Locking = _14;
        Child_Safety = _15;
        Seat_Belt = _16;
        Engine = _17;
        Anti_Theft = _18;
    }

void Mustang_Safety::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- S A F E T Y   F E A T U R E S -----------------------" << endl << endl;

    cout << "NCAP Rating                                : " << NCAP_Rating << endl;
    cout << "No. of Air Bags                            : " << Air_Bags << endl;
    cout << "Brake Assist                               : " << Brake_Assist << endl;
    cout << "Anti-Lock Braking System                   : " << Anti_Lock << endl;
    cout << "Traction Control System                    : " << Traction << endl;
    cout << "Electronic Stability Control               : " << Electronic_Stability << endl;
    cout << "Electronic Brake Force Distribution        : " << Electronic_Brake << endl;
    cout << "Tyre Pressure Monitor System               : " << Tyre_Pressure << endl;
    cout << "Hill Start Assist                          : " << Hill_Start << endl;
    cout << "Hill Descent Control                       : " << Hill_Descent << endl;
    cout << "Parking Assist                             : " << Parking_Assist << endl;
    cout << "Parking Sensors                            : " << Parking_Sensors << endl;
    cout << "Parking Camera                             : " << Parking_Camera << endl;
    cout << "Central Locking                            : " << Central_Locking << endl;
    cout << "Child Safety Door Locks                    : " << Child_Safety << endl;
    cout << "Seat Belt Alarm                            : " << Seat_Belt << endl;
    cout << "Engine Immobilizer                         : " << Engine << endl;
    cout << "Anti-Theft Alarm                           : " << Anti_Theft << endl << endl;
}