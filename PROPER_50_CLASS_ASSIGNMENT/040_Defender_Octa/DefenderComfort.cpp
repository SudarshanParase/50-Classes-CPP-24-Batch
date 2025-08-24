// Header File Inclusion
#include "DefenderComfort.hpp"

Defender_Comfort::Defender_Comfort
        (std::string _1, char _2 
        , char _3, std::string _4 
        , std::string _5, std::string _6 
        , std::string _7, char _8 
        , std::string _9, char _10 
        , char _11, char _12 
        , char _13, std::string _14 
        , char _15)
        {
            Air_Conditioner = _1;
            Air_Purifier = _2;
            Heater = _3;
            Cruise_Control = _4;
            Parking_Assist = _5;
            Parking_Sensors = _6;
            Steering_Adjustment = _7;
            Keyless = _8;
            Vanity_Mirrors = _9;
            Headlight = _10;
            Umbrella = _11;
            Heated = _12;
            Power = _13;
            Electronic = _14;
            Cabin_Boot = _15;
        }

void Defender_Comfort::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- C O M F O R T   &   C O N V E N I E N C E -----------------" << endl << endl;

    cout << "Air Conditioner                            : " << Air_Conditioner << endl;
    cout << "Air Purifier                               : " << Air_Purifier << endl;
    cout << "Heater                                     : " << Heater << endl;
    cout << "Cruise Control                             : " << Cruise_Control << endl;
    cout << "Parking Assist                             : " << Parking_Assist << endl;
    cout << "Parking Sensors                            : " << Parking_Sensors << endl;
    cout << "Steering Adjustment                        : " << Steering_Adjustment << endl;
    cout << "Keyless Start/Button Start                 : " << Keyless << endl;
    cout << "Vanity Mirrors on Sun Visors               : " << Vanity_Mirrors << endl;
    cout << "Headlight and Ignition on Reminder         : " << Headlight << endl;
    cout << "Umbrella Storage in Door                   : " << Umbrella << endl;
    cout << "Heated/Cooled Cup Holders                  : " << Heated << endl;
    cout << "12V Power Outlets                          : " << Power << endl;
    cout << "Electronic Parking Brake                   : " << Electronic << endl;
    cout << "Cabin Boot Access                          : " << Cabin_Boot << endl << endl;
}