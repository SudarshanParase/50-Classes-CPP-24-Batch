#ifndef MERCEDES_ENGINE_HPP
#define MERCEDES_ENGINE_HPP

#include <iostream>
#include <string>

class Mercedes_Engine
{
    private:

        std::string Engine;
        std::string Engine_Type;
        std::string Turbocharger;
        std::string Fuel_Type;
        std::string Max_Power;
        std::string Max_Torque;
        std::string Emission;
        std::string Acceleration;
        short int Top_Speed;
        std::string Mileage;
        char Idle;
        std::string Drivetrain;
        std::string Transmission;

    public:

        Mercedes_Engine(std::string, std::string 
                        , std::string, std::string 
                        , std::string, std::string 
                        , std::string, std::string 
                        , short int, std::string 
                        , char, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_ENGINE_HPP
