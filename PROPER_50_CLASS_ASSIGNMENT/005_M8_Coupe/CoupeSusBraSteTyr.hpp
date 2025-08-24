#ifndef COUPE_SUS_BRA_STE_TYR_HPP
#define COUPE_SUS_BRA_STE_TYR_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Sus
{
    private:

        // Data Member
        std::string Front_Sus;
        std::string Rear_Sus;
        std::string Front_Brake;
        std::string Rear_Brake;
        std::string Min_Turning_Radius;
        std::string Steering_Type_1;
        std::string Steering_Type_2;
        std::string Front_Tyres;
        std::string Rear_Tyres;
        std::string Tyre_Construction;
        std::string Wheels;
        std::string Spare_Wheel;

    public:

        // Constructor
        Coupe_Sus(std::string,std::string,std::string
                , std::string, std::string, std::string
                , std::string, std::string, std::string
                , std::string, std::string, std::string); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_SUS_BRA_STE_TYR_HPP 