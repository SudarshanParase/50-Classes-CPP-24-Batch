#include "CoupeInstrumentation.hpp"

Coupe_Instrumentation::Coupe_Instrumentation
            (char _1, char _2, char _3
            , char _4, std::string _5, char _6
            , std::string _7, char _8, char _9
            , char _10, std::string _11, char _12
            , char _13, std::string _14)
            {
                Average_Fuel = _1;
                Distance_to_Empty = _2;
                Low_Fuel = _3;
                Instantaneous_Fuel = _4;
                Instrument_Cluster = _5;
                Adjustable_Cluster = _6;
                Trip_Meter = _7;
                Average_Speed = _8;
                Door_Ajar = _9;
                HUD = _10;
                Tachometer = _11;
                Gear_Indicator = _12;
                Shift_Indicator = _13;
                Clock = _14;
            }

void Coupe_Instrumentation::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------------INSTRUMENTATION----------------------------------" << endl << endl;

    cout << "Average Fuel Consumption                   : " << Average_Fuel << endl;
    cout << "Distance to Empty                          : " << Distance_to_Empty << endl;
    cout << "Low Fuel Level Warning                     : " << Low_Fuel << endl;
    cout << "Instantaneous Fuel Consumption             : " << Instantaneous_Fuel << endl;
    cout << "Instrument Cluster Screen Type             : " << Instrument_Cluster << endl;
    cout << "Adjustable Cluster Brightness              : " << Adjustable_Cluster << endl;
    cout << "Trip Meter                                 : " << Trip_Meter << endl;
    cout << "Average Speed                              : " << Average_Speed << endl;
    cout << "Door Ajar Warning                          : " << Door_Ajar << endl;
    cout << "Heads Up Display (HUD)                     : " << HUD << endl;
    cout << "Tachometer                                 : " << Tachometer << endl;
    cout << "Gear Indicator                             : " << Gear_Indicator << endl;
    cout << "Shift Indicator                            : " << Shift_Indicator << endl;
    cout << "Clock                                      : " << Clock << endl << endl;
}