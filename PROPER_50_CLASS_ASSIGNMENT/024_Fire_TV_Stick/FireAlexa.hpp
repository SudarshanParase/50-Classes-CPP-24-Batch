#ifndef FIRE_ALEXA_HPP
#define FIRE_ALEXA_HPP

#include <iostream>
#include <string>

class Fire_Alexa
{
    private:

        std::string Size;
        std::string Weight;
        std::string Batteries;
        std::string Technology;
        std::string Compatibility;

    public:

        Fire_Alexa(std::string, std::string
                , std::string, std::string
                , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // FIRE_ALEXA_HPP