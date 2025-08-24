// Header File Inclusion
#ifndef POWER_KEY_SPECS_HPP
#define POWER_KEY_SPECS_HPP

#include <iostream>
#include <string>

class Power_Key
{
    private:

        std::string Configuration;
        std::string Enclosure_Type;
        short int Total;
        char MF;
        std::string LF;
        char Wireless;
        std::string Color;
        std::string Amplifier;
        std::string Amplifier_Class;

    public:

        Power_Key(std::string, std::string 
                , short int, char 
                , std::string, char 
                , std::string, std::string 
                , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // POWER_KEY_SPECS_HPP