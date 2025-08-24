// Header File Inclusion
#include "MercedesComfort.hpp"

Mercedes_Comfort::Mercedes_Comfort
        (std::string _1, char _2 
        , char _3, char _4 
        , std::string _5, std::string _6 
        , std::string _7, char _8 
        , std::string _9, char _10
        , char _11, char _12 
        , std::string _13, char _14 
        , char _15 )
        {
                Air_Conditioner = _1;
                Air_Purifier = _2;
                Heater = _3;
                Cruise_Control = _4;
                Parking_Assist = _5;
                Parking_Sensors = _6;
                Steering = _7;
                Keyless_Start = _8;
                Vanity_Mirrors = _9;
                Headlight = _10;
                Umbrella = _11;
                Power = _12;
                Electronic = _13;
                Cigarette = _14;
                Cabin = _15;
        }

void Mercedes_Comfort::show()
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
    cout << "Steering Adjustment                        : " << Steering << endl;
    cout << "Keyless Start/Button Start                 : " << Keyless_Start << endl;
    cout << "Vanity Mirrors on Sun Visors               : " << Vanity_Mirrors << endl;
    cout << "Headlight and Ignition on Reminder         : " << Headlight << endl;
    cout << "Umbrella Storage in Door                   : " << Umbrella << endl;
    cout << "12V Power Outlets                          : " << Power << endl;
    cout << "Electronic Parking Brake                   : " << Electronic << endl;
    cout << "Cigarette Lighter                          : " << Cigarette << endl;
    cout << "Cabin Boot Access                          : " << Cabin << endl << endl;
}