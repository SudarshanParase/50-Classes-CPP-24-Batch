#ifndef COUPE_INSTRUMENTATION_HPP
#define COUPE_INSTRUMENTATION_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Instrumentation
{
    private:

        // Data Member
        char Average_Fuel;
        char Distance_to_Empty;
        char Low_Fuel;
        char Instantaneous_Fuel;
        std::string Instrument_Cluster;
        char Adjustable_Cluster;
        std::string Trip_Meter;
        char Average_Speed;
        char Door_Ajar;
        char HUD;
        std::string Tachometer;
        char Gear_Indicator;
        char Shift_Indicator;
        std::string Clock;

    public:

        // Constructor
        Coupe_Instrumentation(char, char, char
                            , char, std::string, char
                            , std::string, char, char
                            , char, std::string, char
                            , char, std::string); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_INSTRUMENTATION_HPP 