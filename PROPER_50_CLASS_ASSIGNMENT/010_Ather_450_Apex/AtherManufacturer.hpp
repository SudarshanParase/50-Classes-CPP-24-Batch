#ifndef ATHER_MANUFACTURER_HPP
#define ATHER_MANUFACTURER_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Ather_Manufacturer
{
    private:

        std::string Battery_Warranty;
        std::string Motor_Warranty;

    public:

        Ather_Manufacturer(std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};


#endif // ATHER_MANUFACTURER_HPP