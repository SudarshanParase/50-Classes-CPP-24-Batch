#ifndef COUPE_ENGINE_TRANSMISSION_HPP
#define COUPE_ENGINE_TRANSMISSION_HPP

// Header File Inclusion
#include <iostream>
#include <string>


class Coupe_Engine
{
    

    private:

        // Data Member
        std::string Engine;
        std::string Engine_Type;
        std::string Turbo_Charger;
        std::string Super_Charger;
        std::string Fuel_Type;
        std::string Max_Power;
        std::string Max_Torque;
        std::string Emission_Standard;
        std::string Mileage_ARAI;
        std::string Mileage_Owner_Reported;
        char Idle_Start_Stop;
        short int Driving_Range;
        std::string Acceleration;
        std::string Drivetrain;
        std::string Transmission;
        

    public:

        // Constructor
        Coupe_Engine(std::string, std::string, std::string
                    ,std::string, std::string, std::string
                    ,std::string, std::string, std::string
                    ,std::string, char, short int
                    ,std::string, std::string, std::string); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_ENGINE_TRANSMISSION_HPP 