#ifndef POWER_DRIVERS_HPP
#define POWER_DRIVERS_HPP

#include <iostream>
#include <string>

class Power_Drivers
{
    private:

        char MF_Driver;
        std::string LF_Driver;
        std::string LF_Voice;
        std::string Magnet;

    public:

        Power_Drivers(char, std::string 
                    , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // POWER_DRIVERS_HPP