#ifndef KTM_INSTRUMENT_HPP
#define KTM_INSTRUMENT_HPP

#include <iostream>
#include <string>

class Ktm_Instrument
{
    private:

        char Instrument_Console;           
        char Touch_Screen_Display;
        char Display_Size;
        char Digital_Display_Type;
        char Brightness_Control;                // 5
        char Mobile_Phone_Connectivity;
        char GPS;
        char Average_Fuel_Consumption;
        char Real_Time_Mileage_Indicator;
        char Speedometer;                       // 10
        char Odometer;
        char Fuel_Gauge;
        char Distance_to_Empty;
        char Voice_Assist;
        char Tripmeter;                         // 15
        char No_of_Tripmeters;  
        char Tachometer;
        char Stand_Alarm;
        char Gear_Indicator;
        char Low_Battery_Indicator;             // 20
        char Low_Fuel_Indicator;
        char Low_Oil_Indicator;
        char Service;
        char Hazard_Warning;
        char High_Beam;                         // 25
        char Engine_Temperature;
        char Malfunction;
        char Average_Speed;
        std::string OTA;
        char Call;                              // 30
        char Clock;

    public:

        Ktm_Instrument(char, char
                    , char, char
                    , char, char
                    , char, char
                    , char, char
                    , char, char
                    , char, char
                    , char, char 
                    , char, char
                    , char, char
                    , char, char
                    , char, char
                    , char, char
                    , char, char
                    , std::string, char
                    , char); // Only Declaration

        void show(); // Only Declartion

};

#endif // KTM_INSTRUMENT_HPP