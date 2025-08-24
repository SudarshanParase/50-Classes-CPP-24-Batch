#ifndef COUPE_COMFORT_CONVENIENCE_HPP
#define COUPE_COMFORT_CONVENIENCE_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Comfort
{
    private:

        // Data Member
        std::string Air_Conditioner;
        std::string Front_Ac;
        char Air_Purifier;
        char Heater;
        char Cruise_Control;
        short int Parking_Assist;
        std::string Parking_Sensors;
        std::string  Steering_Adjustment;
        char Keyless_Start;
        std::string Vanity_Mirrors;
        char Headlight;
        std::string Electronic_Parking;
        char Cigarette_Lighter;
        char Cabin_Boot_Access;
        char Power_Outlets;


    public:

        // Constructor
        Coupe_Comfort(std::string, std::string, char
                    , char, char, short int
                    , std::string, std::string, char
                    , std::string, char, std::string
                    , char, char, char); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_COMFORT_CONVENIENCE_HPP 