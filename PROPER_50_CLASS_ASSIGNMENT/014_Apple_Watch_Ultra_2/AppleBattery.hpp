#ifndef APPLE_BATTERY_HPP
#define APPLE_BATTERY_HPP

#include <iostream>
#include <string>

class Apple_Battery
{
    private:

        std::string Battery_Life;
        std::string Battery_Life_2;
        std::string Charging_Type;
        std::string Full_Charge_Time;

    public:

        Apple_Battery(std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_BATTERY_HPP