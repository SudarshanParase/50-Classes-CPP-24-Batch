#ifndef MUSTANG_EXTERIOR_HPP
#define MUSTANG_EXTERIOR_HPP

#include <iostream>
#include <string>

class Mustang_Exterior
{
    private:

        std::string Headlight;
        std::string Tail_Light;
        char Fog_Lights;
        char Daytime;
        std::string Outside_Rear;
        char Front_Wiper;
        char Rear_Wiper;
        char Sunroof;
        char Moonroof;
        char Roof_Rails;

    public:

        Mustang_Exterior(std::string, std::string 
                        , char, char 
                        , std::string, char 
                        , char, char 
                        , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MUSTANG_EXTERIOR_HPP