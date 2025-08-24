#include "CoupeSafety.hpp"

Coupe_Safety::Coupe_Safety(char _1, std::string _2, char _3, std::string _4
                    ,std::string _5, char _6, std::string _7, std::string _8
                    ,std::string _9, char _10, char _11, char _12
                    ,std::string _13, char _14, char _15, char _16
                    , char _17,char _18)
            {
                Blind_Spot = _1;
                Lane_Departure_Prevention = _2;
                Rear_Cross = _3;
                NCAP_Rating = _4;
                Airbags = _5;
                ADAS_level = _6;
                FCW = _7;
                AEB = _8;
                Lane_Departure_Warning = _9;
                TPMS = _10;
                High_Beam_Assist = _11;
                Emergency_Brake_Light = _12;
                Overspeed_Warning = _13;
                Child_Seat = _14;
                Puncture_Repair_Kit = _15;
                Seat_Belt_Warning = _16;
                Rear_Middle_Head = _17;
                Rear_Middle_Three = _18;
            }

void Coupe_Safety::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------------SAFETY---------------------------------------" << endl << endl;
    
    cout << "Blind Spot Detection                       : " << Blind_Spot << endl;
    cout << "Lane Departure Prevention                  : " << Lane_Departure_Prevention << endl;
    cout << "Rear Cross-Traffic Assist                  : " << Rear_Cross << endl;
    cout << "NCAP Rating                                : " << NCAP_Rating << endl;
    cout << "Airbags                                    : " << Airbags << endl;
    cout << "ADAS Level                                 : " << ADAS_level << endl;
    cout << "Forward Collision Warning (FCW)            : " << FCW << endl;
    cout << "Automatic Emergency Braking (AEB)          : " << AEB << endl;
    cout << "Lane Departure Warning                     : " << Lane_Departure_Warning << endl;
    cout << "Tyre Pressure Monitoring System (TPMS)     : " << TPMS << endl;
    cout << "High-beam Assist                           : " << High_Beam_Assist << endl;
    cout << "Emergency Brake Light Flashing             : " << Emergency_Brake_Light << endl;
    cout << "Overspeed Warning                          : " << Overspeed_Warning << endl;
    cout << "Child Seat Anchor Points                   : " << Child_Seat << endl;
    cout << "Puncture Repair Kit                        : " << Puncture_Repair_Kit << endl;
    cout << "Seat Belt Warning                          : " << Seat_Belt_Warning << endl;
    cout << "Rear Middle Head Rest                      : " << Rear_Middle_Head << endl;
    cout << "Rear Middle Three Point Seatbelt           : " << Rear_Middle_Three << endl << endl;
}