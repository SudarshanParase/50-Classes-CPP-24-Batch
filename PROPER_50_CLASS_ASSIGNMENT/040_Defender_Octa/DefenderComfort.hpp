#ifndef DEFENDER_COMFORT_HPP
#define DEFENDER_COMFORT_HPP

#include <iostream>
#include <string>

class Defender_Comfort
{
    private:

        std::string Air_Conditioner;
        char Air_Purifier;
        char Heater;
        std::string Cruise_Control;
        std::string Parking_Assist;
        std::string Parking_Sensors;
        std::string Steering_Adjustment;
        char Keyless;
        std::string Vanity_Mirrors;
        char Headlight;
        char Umbrella;
        char Heated;
        char Power;
        std::string Electronic;
        char Cabin_Boot;

    public:

        Defender_Comfort(std::string, char 
                        , char, std::string 
                        , std::string, std::string 
                        , std::string, char 
                        , std::string, char
                        , char, char
                        , char, std::string 
                        , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_COMFORT_HPP