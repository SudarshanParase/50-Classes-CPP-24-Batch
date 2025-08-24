#ifndef SAMSUNG_HARDWARE_HPP
#define SAMSUNG_HARDWARE_HPP

#include <iostream>
#include <string>

class Samsung_Hardware
{
    private:

        std::string Virtual_Assistant;
        std::string Operting_System;
        std::string Mobile_App;
        std::string Wireless;
        std::string Bluetooth;

    public:

        Samsung_Hardware(std::string, std::string
                        , std::string, std::string  
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_HARDWARE_HPP