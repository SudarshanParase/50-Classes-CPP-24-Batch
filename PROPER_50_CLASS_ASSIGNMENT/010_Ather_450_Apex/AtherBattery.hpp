#ifndef ATHER_BATTERY_HPP
#define ATHER_BATTERY_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Ather_Battery
{
    private:

        std::string Battery_Capacity;
        std::string Charging_Time_100;
        std::string Charging_Time_80;
        std::string Battery_Portability;
        char Fast_Charging_A;
        char Fast_Charging_T_100;
        char Fast_Charging_T_80;
        std::string Fast_Charger_Cost;
        std::string Battery_Type;
        char Portable_Battery;
        char No_of_Batteries;
        char Swappable_Battery;
        std::string Battery_IP;
        std::string Charger_Type;
        short int Charger_OP;
        std::string Charger_Cost;

    public:

        Ather_Battery(std::string, std::string
                    , std::string, std::string
                    , char, char
                    , char, std::string
                    , std::string, char
                    , char , char
                    , std::string, std::string
                    , short int, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ATHER_BATTERY_HPP