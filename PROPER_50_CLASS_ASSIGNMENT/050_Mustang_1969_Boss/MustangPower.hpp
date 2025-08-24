#ifndef MUSTANG_POWER_HPP
#define MUSTANG_POWER_HPP

#include <iostream>
#include <string>

class Mustang_Power
{
    private:

        std::string Max_Power;
        std::string Max_Torque;
        float Weight;
        short int Top_Speed;
        std::string Specific_Output;

    public:

        Mustang_Power(std::string, std::string 
                    , float , short int
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // MUSTANG_POWER_HPP