#ifndef CONTINENTAL_INSTRUMENT_HPP
#define CONTINENTAL_INSTRUMENT_HPP

#include <iostream>
#include <string>

class Continental_Instrument
{
    private:

        std::string Instrument_Console;
        char Touch_Screen_Display;
        char Display_Size;
        char Digital_Display_Type;
        char Brightness_Control;                // 5
        char Mobile_Phone_Connectivity;
        char GPS;
        char Average_Fuel;
        char Real_Time_Mileage;
        std::string Speedometer;                // 10
        std::string Odometer;
        std::string Fuel_Gauge;
        char Distance_to_Empty;
        char Voice_Assist;
        std::string Tripmeter_Type;             // 15
        char No_of_Tripmeters;
        std::string Tachometer;
        char Stand_Alarm;
        char Gear_Indicator;
        char Low_Battery_Indicator;             // 20
        char Low_Fuel_Indicator;
        char Low_Oil_Indicator;
        char Service_Reminder;
        char Hazard_Warning_Indicator;
        char High_Beam_Indicator;               // 25
        char Engine_Temperature_Indicator;
        char Malfunction_Indicator;
        char Average_Speed;
        std::string OTA;
        char Call;                              // 30
        char Clock;

    public:

        Continental_Instrument(std::string, char
                            , char, char
                            , char, char
                            , char ,char 
                            , char , std::string 
                            , std::string, std::string 
                            , char, char 
                            , std::string, char 
                            , std::string, char 
                            , char, char
                            , char, char
                            , char, char
                            , char, char
                            , char, char 
                            , std::string, char 
                            , char); // Only Declaration

        void show(); // Only Declaration
};


#endif // CONTINENTAL_INSTRUMENT_HPP