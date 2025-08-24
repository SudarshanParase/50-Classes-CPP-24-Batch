// Header File Inclusion
#include "MercedesSafety.hpp"

Mercedes_Safety::Mercedes_Safety
    (char _1, std::string _2 
    , std::string _3, char _4 
    , std::string _5, char _6 
    , char _7, char _8 
    , char _9, char _10 
    , std::string _11, std::string _12 
    , char _13, char _14 
    , char _15, char _16 )
    {
        Forward_Collision = _1;
        NCAP = _2;
        Airbags = _3;
        Automatic = _4;
        Lane_Functions = _5;
        Lane_Departure = _6;
        Blind_Spot = _7;
        High_Beam = _8;
        Tyre_Pressure = _9;
        Emergency_Brake = _10;
        Overspeed_Warning = _11;
        Second_Row = _12;
        Child_Seat = _13;
        Puncture_Repair = _14;
        Dashcam = _15;
        Seat_Belt = _16;
    }

void Mercedes_Safety::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------- S A F E T Y --------------------------------" << endl << endl;

    cout << "Forward Collision Warning (FCW)            : " << Forward_Collision << endl;
    cout << "NCAP Rating                                : " << NCAP << endl;
    cout << "Airbags                                    : " << Airbags << endl;
    cout << "Automatic Emergency Braking (AEB)          : " << Automatic << endl;
    cout << "Lane Functions                             : " << Lane_Functions << endl;
    cout << "Lane Departure Warning                     : " << Lane_Departure << endl;
    cout << "Blind Sport Detection                      : " << Blind_Spot << endl;
    cout << "High-beam Assist                           : " << High_Beam << endl;
    cout << "Tyre Pressure Monitoring System (TPMS)     : " << Tyre_Pressure << endl;
    cout << "Emergency Brake Light Flashing             : " << Emergency_Brake << endl;
    cout << "Overspeed Warning                          : " << Overspeed_Warning << endl;
    cout << "Second Row Middle Seat Safety              : " << Second_Row << endl;
    cout << "Child Seat Anchor Points                   : " << Child_Seat << endl;
    cout << "Puncture Repair Kit                        : " << Puncture_Repair << endl;
    cout << "Dashcam                                    : " << Dashcam << endl;
    cout << "Seat Belt Warning                          : " << Seat_Belt << endl << endl;
}