#ifndef APPLE_TECHNICAL_HPP
#define APPLE_TECHNICAL_HPP

#include <iostream>
#include <string>

class Apple_Technical
{
    private:

        std::string OS;
        std::string Chipset;
        std::string CPU;
        char Core;
        char GPU;
        char Java;
        char Browser;

    public:

        Apple_Technical(std::string, std::string 
                    , std::string, char 
                    , char, char 
                    , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_TECHNICAL_HPP