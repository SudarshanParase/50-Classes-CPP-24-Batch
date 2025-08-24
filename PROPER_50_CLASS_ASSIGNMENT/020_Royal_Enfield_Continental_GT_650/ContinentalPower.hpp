#ifndef CONTINENTAL_POWER_HPP
#define CONTINENTAL_POWER_HPP

#include <iostream>
#include <string>

class Continental_Power
{
    private:

        short int Displacement;
        std::string Max_Power;
        std::string Max_Torque;
        short int Top_Speed;
        std::string Mileage;            // 5
        std::string Transmission;
        std::string Transmission_T;
        std::string Gear;
        std::string Clutch;
        float Riding_Range;             // 10
        char Riding_Modes;              
        char Cylinders;
        char Valves;
        std::string Cooling;
        std::string Bore;               // 15
        std::string Stroke;             
        std::string Compression;
        std::string Spark;
        std::string Battery;
        std::string Emission;           // 20
        std::string Fuel;               

    public:


        Continental_Power(short int, std::string 
                        , std::string, short int 
                        , std::string, std::string 
                        , std::string, std::string 
                        , std::string, float 
                        , char, char 
                        , char, std::string 
                        , std::string, std::string 
                        , std::string, std::string 
                        , std::string, std::string 
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // CONTINENTAL_POWER_HPP