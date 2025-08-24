#ifndef AO_TANK_HPP
#define AO_TANK_HPP

#include <iostream>
#include <string>

class AO_Tank
{
    private:

        std::string Tank;
        std::string Inner;
        std::string Heating;
        std::string Insulation;
        std::string Pressure;

    public:

        AO_Tank(std::string, std::string
            , std::string, std::string
            , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AO_TANK_HPP