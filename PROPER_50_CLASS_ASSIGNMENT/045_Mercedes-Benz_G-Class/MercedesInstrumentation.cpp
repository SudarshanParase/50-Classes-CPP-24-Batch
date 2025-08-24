// Header File Inclusion
#include "MercedesInstrumentation.hpp"

Mercedes_Instrumentation::Mercedes_Instrumentation
        (std::string _1, std::string _2 
        , std::string _3, char _4 
        , char _5, char _6 
        , std::string _7, char _8 
        , std::string _9, std::string _10)
        {
            Fuel_Consumption = _1;
            Instrument = _2;
            Trip_Meter = _3;
            Door = _4;
            Average_Speed = _5;
            Heads_Up = _6;
            Tachometer = _7;
            Gear_Indicator = _8;
            Shift = _9;
            Clock = _10;
        }

void Mercedes_Instrumentation::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- I N S T R U M E N T A T I O N -----------------------" << endl << endl;

    cout << "Fuel Consumption                           : " << Fuel_Consumption << endl;
    cout << "Instrument Cluster Screen                  : " << Instrument << endl;
    cout << "Trip Meter                                 : " << Trip_Meter << endl;
    cout << "Door Ajar Warning                          : " << Door << endl;
    cout << "Average Speed                              : " << Average_Speed << endl;
    cout << "Heads Up Display (HUD)                     : " << Heads_Up << endl;
    cout << "Tachometer                                 : " << Tachometer << endl;
    cout << "Gear Indicator                             : " << Gear_Indicator << endl;
    cout << "Shift Indicator                            : " << Shift << endl;
    cout << "Clock                                      : " << Clock << endl << endl;
}