#include "ContinentalInstrument.hpp"

Continental_Instrument::Continental_Instrument
        (std::string _1, char _2
        , char _3, char _4
        , char _5, char _6
        , char _7,char _8
        , char _9, std::string _10  
        , std::string _11, std::string _12 
        , char _13, char _14
        , std::string _15, char _16 
        , std::string _17 , char _18
        , char _19 , char _20
        , char _21, char _22
        , char _23, char _24
        , char _25, char _26
        , char _27, char _28
        , std::string _29 , char _30 
        , char _31)
        {
            Instrument_Console = _1;
            Touch_Screen_Display = _2;
            Display_Size = _3;
            Digital_Display_Type = _4;
            Brightness_Control = _5;
            Mobile_Phone_Connectivity = _6;
            GPS = _7;
            Average_Fuel = _8;
            Real_Time_Mileage = _9;
            Speedometer = _10;
            Odometer = _11;
            Fuel_Gauge = _12;
            Distance_to_Empty = _13;
            Voice_Assist = _14;
            Tripmeter_Type = _15;
            No_of_Tripmeters = _16;
            Tachometer = _17;
            Stand_Alarm = _18;
            Gear_Indicator = _19;
            Low_Battery_Indicator = _20;
            Low_Fuel_Indicator = _21;
            Low_Oil_Indicator = _22;
            Service_Reminder = _23;
            Hazard_Warning_Indicator = _24;
            High_Beam_Indicator = _25;
            Engine_Temperature_Indicator = _26;
            Malfunction_Indicator = _27;
            Average_Speed = _28;
            OTA = _29;
            Call = _30;
            Clock = _31;
        }

void Continental_Instrument::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------- I N S T R U M E N T   C L U S T E R -------------------" << endl << endl; 

    cout << "Instrument Console                             : " << Instrument_Console << endl;
    cout << "Touch Screen Display                           : " << Touch_Screen_Display << endl;
    cout << "Display Size                                   : " << Display_Size << endl;
    cout << "Digital Display Type                           : " << Digital_Display_Type << endl;
    cout << "Brightness Control                             : " << Brightness_Control << endl;
    cout << "Mobile Phone Connectivity                      : " << Mobile_Phone_Connectivity << endl;
    cout << "GPS & Navigation                               : " << GPS << endl;
    cout << "Average Fuel Consumption                       : " << Average_Fuel << endl;
    cout << "Real Time Mieage Indicator                     : " << Real_Time_Mileage << endl;
    cout << "Speedometer                                    : " << Speedometer << endl;
    cout << "Odometer                                       : " << Odometer << endl;
    cout << "Fuel Gauge                                     : " << Fuel_Gauge << endl;
    cout << "Distance to Empty                              : " << Display_Size << endl;
    cout << "Voice Assist                                   : " << Voice_Assist << endl;
    cout << "Tripmeter Type                                 : " << Tripmeter_Type << endl;
    cout << "Number of Tripmeters                           : " << No_of_Tripmeters << endl;
    cout << "Tachometer                                     : " << Tachometer << endl;
    cout << "Stand Alarm                                    : " << Stand_Alarm << endl;
    cout << "Gear Indicator                                 : " << Gear_Indicator << endl;
    cout << "Low Battery Indicator                          : " << Low_Battery_Indicator << endl;
    cout << "Low Fuel Indicator                             : " << Low_Fuel_Indicator << endl;
    cout << "Low Oil Indicator                              : " << Low_Oil_Indicator << endl;
    cout << "Service Reminder Indicator                     : " << Service_Reminder << endl;
    cout << "Hazard Warning Indicator                       : " << Hazard_Warning_Indicator << endl;
    cout << "High Beam Indicator                            : " << High_Beam_Indicator << endl;
    cout << "Engine Temperature Indicator                   : " << Engine_Temperature_Indicator << endl;
    cout << "Malfunction Indicator                          : " << Malfunction_Indicator << endl;
    cout << "Average Speed                                  : " << Average_Speed << endl;
    cout << "OTA Updates                                    : " << OTA << endl;
    cout << "Call/SMS Alerats                               : " << Call << endl;
    cout << "Clock                                          : " << Clock << endl << endl;
}