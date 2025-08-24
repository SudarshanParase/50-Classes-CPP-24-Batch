#ifndef FIRE_STICK_HD_HPP
#define FIRE_STICK_HP_HPP

#include <iostream>
#include <string>

class Fire_Stick
{
    private:

        std::string Size;
        std::string Weight;
        std::string Processor;
        std::string GPU;
        std::string Storage;            // 5
        std::string Wifi;
        std::string Bluetooth;
        std::string Voice_Support;
        std::string IR_Device;
        std::string Ports;              // 10
        std::string Audio_Support;
        std::string TV;
        std::string System;
        std::string Video;
        std::string Output;             // 15
        std::string Warranty;
        std::string Regional;
        std::string Accessibility;
        std::string Included;
        std::string Country_of_Origin;  // 20
        std::string Generic_Name;
        char Item_Quantity;
        std::string Address;

    public:

        Fire_Stick(std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, std::string
                , std::string, char
                , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // FIRE_STICK_HD_HPP