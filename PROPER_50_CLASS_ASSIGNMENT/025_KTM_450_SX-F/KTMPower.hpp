#ifndef KTM_POWER_HPP
#define KTM_POWER_HPP

#include <iostream>
#include <string>

class Ktm_Power
{
    private:

        float Displacement;
        std::string Max_Power;
        std::string Max_Torque;
        char Top_Speed;
        char Mileage;
        std::string Transmission;
        std::string Transmission_T;
        std::string Gear;
        std::string Clutch;
        char Riding_Range;
        char Riding_Modes;
        char Cylinders;
        char Valves;
        std::string Cooling;
        std::string Bore;
        std::string Stroke;
        std::string Compression;
        std::string Spark;
        std::string Battery;
        std::string Emission;
        std::string Fuel_Type;

    public:

        Ktm_Power(float, std::string 
                , std::string, char
                , char, std::string 
                , std::string, std::string 
                , std::string, char
                , char, char
                , char, std::string 
                , std::string, std::string 
                , std::string, std::string 
                , std::string, std::string 
                , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // KTM_POWER_HPP