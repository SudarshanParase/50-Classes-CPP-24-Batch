#ifndef GLASSES_BATTERY_HPP
#define GLASSES_BATTERY_HPP

#include <iostream>
#include <string>

class Glasses_Battery
{
    private:

        std::string Battery_Chemistry;
        std::string Recharge_Time;
        std::string Battery_Life;

    public:

        Glasses_Battery(std::string, std::string
                      , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // GLASSES_BATTERY_HPP