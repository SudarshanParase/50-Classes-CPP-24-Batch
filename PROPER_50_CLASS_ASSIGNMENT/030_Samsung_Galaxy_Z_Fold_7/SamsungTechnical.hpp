#ifndef SAMSUNG_TECHNICAL_HPP
#define SAMSUNG_TECHNICAL_HPP

#include <iostream>
#include <string>

class Samsung_Technical
{
    private:

        std::string OS;
        std::string Custom;
        std::string Chipset;
        std::string CPU;
        std::string Core;
        std::string GPU;
        char Java;
        char Browser;

    public:

        Samsung_Technical(std::string, std::string 
                        , std::string, std::string 
                        , std::string, std::string 
                        , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_TECHNICAL_HPP