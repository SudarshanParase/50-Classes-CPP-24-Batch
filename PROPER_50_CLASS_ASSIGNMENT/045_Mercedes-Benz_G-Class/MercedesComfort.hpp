#ifndef MERCEDES_COMFORT_HPP
#define MERCEDES_COMFORT_HPP

#include <iostream>
#include <string>

class Mercedes_Comfort 
{
    private:

        std::string Air_Conditioner;
        char Air_Purifier;
        char Heater;
        char Cruise_Control;
        std::string Parking_Assist;
        std::string Parking_Sensors;
        std::string Steering;
        char Keyless_Start;
        std::string Vanity_Mirrors;
        char Headlight;
        char Umbrella;
        char Power;
        std::string Electronic;
        char Cigarette;
        char Cabin;

    public:

        Mercedes_Comfort(std::string, char 
                        , char, char 
                        , std::string, std::string 
                        , std::string, char 
                        , std::string, char 
                        , char, char 
                        , std::string, char 
                        , char ); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_COMFORT_HPP