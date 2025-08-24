#ifndef IMALENT_LIGHT_HPP
#define IMALENT_LIGHT_HPP

#include <iostream>
#include <string>

class Imalent_Light
{
    private:

        std::string LED;
        std::string Max;
        std::string Beam;
        std::string Lighting;
        std::string Strobe;
        std::string Color;
        std::string Beam_Type;

    public:

        Imalent_Light(std::string, std::string 
                    , std::string, std::string
                    , std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // IMALENT_LIGHT_HPP