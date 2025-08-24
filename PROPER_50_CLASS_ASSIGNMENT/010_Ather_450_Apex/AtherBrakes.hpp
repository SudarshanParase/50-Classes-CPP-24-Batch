#ifndef ATHER_BRAKES_HPP
#define ATHER_BRAKES_HPP

#include <iostream>
#include <string>

class Ather_Brakes
{
    private:

        std::string Braking_System;
        std::string Front_Brake_Type;
        short int Front_Brake_Size;
        std::string Caliper_Front;
        std::string Rear_Brake_Type;
        short int Rear_Brake_Size;
        std::string Caliper_Rear;
        std::string Wheel_Type;
        std::string Front_Wheel_Size;
        std::string Rear_Wheel_Size;
        std::string Front_Tyre_Size;
        std::string Rear_Tyre_Size;
        std::string Tyre_Type;

    public:

        Ather_Brakes(std::string, std::string
                    , short int, std::string
                    , std::string, short int
                    , std::string, std::string  
                    , std::string, std::string
                    , std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // ATHER_BRAKES_HPP