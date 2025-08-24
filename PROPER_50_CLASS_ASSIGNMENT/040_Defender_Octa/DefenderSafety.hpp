#ifndef DEFENDER_SAFETY_HPP
#define DEFENDER_SAFETY_HPP

#include <iostream>
#include <string>

class Defender_Safety
{
    private:

        char Forward_Collision;
        std::string NCAP;
        std::string Airbags;
        char Automatic;
        char Lane;
        char Blind;
        char High_Beam;
        char Tyre_Pressure;
        char Emergency;
        std::string Overspeed_Warning;
        std::string Second;
        char Child;
        char Puncture;
        char Dashcam;
        char Seat_Belt;

    public:

        Defender_Safety(char, std::string 
                    , std::string, char 
                    , char, char 
                    , char, char 
                    , char, std::string 
                    , std::string, char
                    , char, char 
                    , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_SAFETY_HPP