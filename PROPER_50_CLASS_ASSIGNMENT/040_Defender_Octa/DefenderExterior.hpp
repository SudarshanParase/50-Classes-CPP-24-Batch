#ifndef DEFENDER_EXTERIOR_HPP
#define DEFENDER_EXTERIOR_HPP

#include <iostream>
#include <string>

class Defender_Exterior
{
    private:

        std::string Sunroof;
        std::string Roof_Rails;
        char Body;
        char Rub;
        std::string Body_Kit;
        char Chrome;
        std::string Antenna;

    public:

        Defender_Exterior(std::string, std::string 
                        , char, char 
                        , std::string, char 
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_EXTERIOR_HPP