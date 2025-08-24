#ifndef KTM_BRAKES_HPP
#define KTM_BRAKES_HPP

#include <iostream>
#include <string>

class Ktm_Brakes
{
    private:

        std::string Braking_System;
        std::string Front_Brake_Type;
        short int Front_Brake_Size;
        char Caliper_F;
        std::string Rear_Brake_Type;
        short int Rear_Brake_Size;
        char Caliper_R;
        std::string Wheel_Type;
        std::string Front_Wheel_Size;
        std::string Rear_Wheel_Size;
        std::string Front_Tyre_Size;
        std::string Rear_Tyre_Size;
        std::string Tyre_Type;
        std::string Front_Tyre_Pressure;
        std::string Rear_Tyre_Pressure;
        std::string Front_Tyre_Pressure_P;
        std::string Rear_Tyre_Pressure_P;

    public:

        Ktm_Brakes(std::string , std::string 
                , short int, char
                , std::string, short int
                , char, std::string
                , std::string, std::string 
                , std::string, std::string 
                , std::string, std::string 
                , std::string, std::string 
                , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // KTM_BRAKES_HPP