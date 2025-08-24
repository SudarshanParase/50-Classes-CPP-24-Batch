#ifndef ATHER_LIGHTS_HPP
#define ATHER_LIGHTS_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Ather_Lights
{
    private:

        std::string Headlight_Type;
        char Projector_Headlamp;
        char Dual_Lights;
        char Boot_Light;
        char DRLs;
        std::string Brake;
        char Hazard;
        char Pass_Light;
        std::string Turn_Signal;

    public:

        Ather_Lights(std::string, char
                    , char, char
                    , char, std::string
                    , char, char
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ATHER_LIGHTS_HPP