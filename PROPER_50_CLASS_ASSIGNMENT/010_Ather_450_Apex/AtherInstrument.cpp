#include "AtherInstrument.hpp"

Ather_Instrument::Ather_Instrument
        (std::string _1, char _2
        , char _3, char _4
        , char _5, char _6
        , char _7, std::string _8
        , std::string _9, char _10
        , char _11, std::string _12
        , char _13, char _14
        , char _15, char _16
        , char _17, char _18
        , char _19, std::string _20
        , char _21, char _22)
        {
            Insturment_Console = _1;
            Touch_Screen_Display = _2;
            Display_Size = _3;
            Digital_Display = _4;
            Brightness_Control = _5;
            Mobile_Phone_Connectivity = _6;
            GPS = _7;
            Speedometer = _8;
            Odometer = _9;
            Distance_to_Empty = _10;
            Voice_Assist = _11;
            Tripmeter_Type = _12;
            No_of_Tripmeters = _13;
            Stand_Alarm = _14;
            Low_Battery = _15;
            Hazard_Warning = _16;
            High_Beam = _17;
            Malfunction = _18;
            Average_Speed = _19;
            OTA = _20;
            Call_SMS = _21;
            Clock = _22;
        }

void Ather_Instrument::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- I N S T R U M E N T   C L U S T E R ------------------" << endl << endl;
    
    cout << "Instrument Console                         : " << Insturment_Console << endl;
    cout << "Touch Screen Display                       : " << Touch_Screen_Display << endl;
    cout << "Display Size                               : " << Display_Size << endl;
    cout << "Digital Display Type                       : " << Digital_Display << endl;
    cout << "Brightness Control                         : " << Brightness_Control << endl;
    cout << "Mobile Phone Connectivity                  : " << Mobile_Phone_Connectivity << endl;
    cout << "GPS & Navigation                           : " << GPS << endl;
    cout << "Speedometer                                : " << Speedometer << endl;
    cout << "Odometer                                   : " << Odometer << endl;
    cout << "Distance to Empty                          : " << Distance_to_Empty << endl;
    cout << "Voice Assist                               : " << Voice_Assist << endl;
    cout << "Tripmeter Type                             : " << Tripmeter_Type << endl;
    cout << "No. of Tripmeters                          : " << No_of_Tripmeters << endl;
    cout << "Stand Alarm                                : " << Stand_Alarm << endl;
    cout << "Low Battery Indicator                      : " << Low_Battery << endl;
    cout << "Hazard Warning Indicator                   : " << Hazard_Warning << endl;
    cout << "High Beam Indicator                        : " << High_Beam << endl;
    cout << "Malfunction Indicator                      : " << Malfunction << endl;
    cout << "Average Speed                              : " << Average_Speed << endl;
    cout << "OTA Updates                                : " << OTA << endl;
    cout << "Call/SMS Alerts                            : " << Call_SMS << endl;
    cout << "Clock                                      : " << Clock << endl << endl;
}