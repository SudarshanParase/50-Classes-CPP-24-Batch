#ifndef ATHER_INSTRUMENT_HPP
#define ATHER_INSTRUMENT_HPP

#include <iostream>
#include <string>

class Ather_Instrument
{
    private:

        std::string Insturment_Console;
        char Touch_Screen_Display;
        char Display_Size;
        char Digital_Display;
        char Brightness_Control;
        char Mobile_Phone_Connectivity;
        char GPS;
        std::string Speedometer;
        std::string Odometer;
        char Distance_to_Empty;
        char Voice_Assist;
        std::string Tripmeter_Type;
        char No_of_Tripmeters;
        char Stand_Alarm;
        char Low_Battery;
        char Hazard_Warning;
        char High_Beam;
        char Malfunction;
        char Average_Speed;
        std::string OTA;
        char Call_SMS;
        char Clock;

    public:

        Ather_Instrument(std::string, char
                    , char, char
                    , char , char
                    , char, std::string
                    , std::string, char
                    , char, std::string
                    , char, char
                    , char, char
                    , char, char
                    , char, std::string
                    , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // ATHER_INSTRUMENT_HPP