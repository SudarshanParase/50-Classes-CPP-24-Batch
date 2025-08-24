#ifndef ATHER_POWER_PERFORMANCE_HPP
#define ATHER_POWER_PERFORMANCE_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Ather_Power
{
    private:

        std::string Max_Power;
        char Rated_Power;
        std::string Max_Torque;
        short int Top_Speed;
        std::string Acceleartions_40;
        char Accelerations_60;
        std::string Transmission;
        short int Riding_Range;
        std::string Riding_Modes;
        std::string Fuel_Type;
        std::string Motor_Type;
        std::string Motor_IP;
        std::string Gradeability;
        short int Water_Wading;
        
    public:

        Ather_Power(std::string, char
                    , std::string, short int
                    , std::string, char
                    , std::string, short int
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, short int); // Only Declaration

        void show(); // Only Declaration
};



#endif // ATHER_POWER_PERFORMANCE_HPP