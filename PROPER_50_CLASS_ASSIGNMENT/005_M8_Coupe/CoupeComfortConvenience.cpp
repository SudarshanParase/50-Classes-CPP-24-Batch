#include "CoupeComfortConvenience.hpp"

Coupe_Comfort::Coupe_Comfort(std::string _1, std::string _2, char _3
                    , char _4, char _5, short int _6
                    , std::string _7, std::string _8, char _9
                    , std::string _10, char _11, std::string _12 
                    , char _13, char _14, char _15)
            {
                Air_Conditioner = _1;
                Front_Ac = _2;
                Air_Purifier = _3;
                Heater = _4;
                Cruise_Control = _5;
                Parking_Assist = _6;
                Parking_Sensors = _7;
                Steering_Adjustment = _8;
                Keyless_Start = _9;
                Vanity_Mirrors = _10;
                Headlight = _11;
                Electronic_Parking = _12;
                Cigarette_Lighter = _13;
                Cabin_Boot_Access = _14;
                Power_Outlets = _15;
            }

void Coupe_Comfort::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------------COMFORT--------------------------------------" << endl << endl;

    cout << "Air Conditioner-Automatic/Zones            : " << Air_Conditioner << endl;
    cout << "Front AC                                   : " << Front_Ac << endl;
    cout << "Air Purifier                               : " << Air_Purifier << endl;
    cout << "Heater                                     : " << Heater << endl;
    cout << "Cruise Control                             : " << Cruise_Control << endl;
    cout << "Parking Assist                             : " << Parking_Assist << " Degree Camera" << endl;
    cout << "Parking Sensors                            : " << Parking_Sensors << endl;
    cout << "Steering Adjustment                        : " << Steering_Adjustment << endl;
    cout << "Keyless Start/Button Start                 : " << Keyless_Start << endl;
    cout << "Vanity Mirrors Sun Visors                  : " << Vanity_Mirrors << endl;
    cout << "Headlight and lgnition on Reminder         : " << Headlight << endl;
    cout << "Electronic Parking Brake                   : " << Electronic_Parking << endl;
    cout << "Cigarette Ligheter                         : " << Cigarette_Lighter << endl;
    cout << "Cabin Boot Access                          : " << Cabin_Boot_Access << endl;
    cout << "12V Power Outlets                          : " << Power_Outlets << endl << endl; 
}