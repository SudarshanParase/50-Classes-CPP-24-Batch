#ifndef ARRMA_POWER_SYSTEM_HPP
#define ARRMA_POWER_SYSTEM_HPP

#include <iostream>
#include <string>

class Arrma_Power
{
    private:

        std::string Motor;
        std::string ESC;
        std::string Max_Battery;
        std::string Battery_Connectors;
        std::string Motor_Mount;
        std::string Gearing;
        std::string Optional_High_Speed;

    public:

        Arrma_Power(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ARRMA_POWER_SYSTEM_HPP