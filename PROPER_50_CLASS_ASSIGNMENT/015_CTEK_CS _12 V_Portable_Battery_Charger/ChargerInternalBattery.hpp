#ifndef CHARGER_INTERNAL_BATTERY_HPP
#define CHARGER_INTERNAL_BATTERY_HPP

#include <iostream>
#include <string>

class Charger_Internal
{
    private:

        std::string Internal_Battery;
        std::string Lifecycle;
        std::string Adaptive_Boost;
        std::string Min_Start_Voltage;

    public:

        Charger_Internal(std::string,std::string
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CHARGER_INTERNAL_BATTERY_HPP