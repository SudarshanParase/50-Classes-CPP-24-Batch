// Header File Inclusion
#include "DefenderSafety.hpp"

Defender_Safety::Defender_Safety
        (char _1, std::string _2 
        , std::string _3, char _4 
        , char _5, char _6 
        , char _7, char _8 
        , char _9, std::string _10 
        , std::string _11, char _12 
        , char _13, char _14 
        , char _15 )
        {
            Forward_Collision = _1;
            NCAP = _2; 
            Airbags = _3;
            Automatic = _4;
            Lane = _5;
            Blind = _6;
            High_Beam = _7;
            Tyre_Pressure = _8;
            Emergency = _9;
            Overspeed_Warning = _10;
            Second = _11;
            Child = _12;
            Puncture = _13;
            Dashcam = _14;
            Seat_Belt = _15;
        }

void Defender_Safety::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------- S A F E T Y --------------------------------" << endl << endl;

    cout << "Forward Collision Warning (FCW)            : " << Forward_Collision << endl;
    cout << "NCAP Rating                                : " << NCAP << endl;
    cout << "Airbags                                    : " << Airbags << endl;
    cout << "Automatic Emergency Braking (AEB)          : " << Automatic << endl;
    cout << "Lane Departure Warning                     : " << Lane << endl;
    cout << "Blind Spot Detection                       : " << Blind << endl;
    cout << "High-Beam Assist                           : " << High_Beam << endl;
    cout << "Tyre Pressure Monitoring System (TPMS)     : " << Tyre_Pressure << endl;
    cout << "Emergency Brake Light Flashing             : " << Emergency << endl;
    cout << "Overspeed Warning                          : " << Overspeed_Warning << endl;
    cout << "Second Row Middle Seat Safety              : " << Second << endl;
    cout << "Child Seat Anchor Points                   : " << Child << endl;
    cout << "Puncture Repair Kit                        : " << Puncture << endl;
    cout << "Dashcam                                    : " << Dashcam << endl;
    cout << "Seat Belt Warning                          : " << Seat_Belt << endl << endl;
}