#ifndef HANDBAG_HARDWARE_HPP
#define HANDBAG_HARDWARE_HPP

#include <iostream>
#include <string>

class Handbag_Hardware
{
    private:

        std::string Hardware;
        std::string Lock;
        std::string Feet;
        std::string Buckle;

    public:

        Handbag_Hardware(std::string, std::string 
                        , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // HANDBAG_HARDWARE_HPP