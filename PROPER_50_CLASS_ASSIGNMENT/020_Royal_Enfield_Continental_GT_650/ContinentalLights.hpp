#ifndef CONTINENTAL_LIGHTS_HPP
#define CONTINENTAL_LIGHTS_HPP

#include <iostream>
#include <string>

class Continental_Lights
{
    private:

        std::string Headlight_Type;
        char Projector;
        char Dual;
        char DRLs;
        std::string Brake;
        char Hazard;
        char Shift;
        char Pass;
        std::string Turn;

    public:

        Continental_Lights(std::string, char 
                        , char, char
                        , std::string, char 
                        , char, char
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CONTINENTAL_LIGHTS_HPP