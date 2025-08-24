#ifndef DEFENDER_ENGINE_HPP
#define DEFENDER_ENGINE_HPP

#include <iostream>
#include <string>

class Defender_Engine
{
    private:

        std::string Engine;
        std::string Engine_Type;
        std::string Turbocharger;
        std::string Fuel_Type;
        short int Max_Power;
        short int Max_Torque;
        std::string Emission;
        std::string Acceleration;
        short int Top_Speed;
        char Idle;
        std::string Drivetrain;
        std::string Transmission;

    public:

        Defender_Engine(std::string, std::string 
                        , std::string, std::string 
                        , short int, short int 
                        , std::string, std::string 
                        , short int, char 
                        , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_ENGINE_HPP