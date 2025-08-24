#ifndef ARRMA_CHASSIS_BUILD_HPP
#define ARRMA_CHASSIS_BUILD_HPP

#include <iostream>
#include <string>

class Arrma_Chassis
{
    private:

        std::string Chassis_Material;
        std::string Chassis_Thickness;
        std::string Drivetrain;
        std::string Center_Differential;
        std::string Shock_Absorbers;
        std::string Shock_Towers;
        std::string Suspension;
        std::string Drive_Shafts;
        std::string Differentials;
        std::string Turnbuckles;
        std::string Wheel_Hex_Size;
        std::string Tires;
        std::string Wheels;

    public:
        Arrma_Chassis(std::string,std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ARRMA_CHASSIS_BUILD_HPP