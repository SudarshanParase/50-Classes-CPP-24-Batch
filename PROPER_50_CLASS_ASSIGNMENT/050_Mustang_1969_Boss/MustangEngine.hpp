#ifndef MUSTANG_ENGINE_HPP
#define MUSTANG_ENGINE_HPP

#include <iostream>
#include <string>

class Mustang_Engine
{
    private:

        std::string Engine_Type;
        short int Engine_Displacement;
        char No_of_Cylinders;
        char Valve;
        std::string Compression;
        float Bore;
        std::string Stroke;
        std::string Fuel_Supply;
        std::string Ignition;
        std::string Cooling;
        std::string Emission;
        std::string Transmission;
        std::string Clutch;
        std::string Drive_Type;

    public:

        Mustang_Engine(std::string, short int 
                    , char, char 
                    , std::string, float
                    , std::string, std::string 
                    , std::string, std::string 
                    , std::string, std::string 
                    , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // MUSTANG_ENGINE_HPP