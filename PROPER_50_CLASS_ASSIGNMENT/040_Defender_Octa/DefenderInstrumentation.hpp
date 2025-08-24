#ifndef DEFENDER_INSTRUMENTATION_HPP
#define DEFENDER_INSTRUMENTATION_HPP

#include <iostream>
#include <string>

class Defender_Instrumentation
{
    private:

        std::string Fuel_Consumption;
        std::string Instrument;
        std::string Trip_Meter;
        char Door;
        char Average_Speed;
        char Heads_Up;
        std::string Tachometer;
        char Gear_Indicator;
        std::string Shift;
        std::string Clock;

    public:

        Defender_Instrumentation(std::string, std::string 
                            , std::string, char 
                            , char, char 
                            , std::string, char 
                            , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_INSTRUMENTATION_HPP