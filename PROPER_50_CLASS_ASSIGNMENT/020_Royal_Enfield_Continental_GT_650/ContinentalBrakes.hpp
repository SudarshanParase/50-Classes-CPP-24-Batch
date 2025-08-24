#ifndef CONTINENTAL_BRAKES_HPP
#define CONTINENTAL_BRAKES_HPP

#include <iostream>
#include <string>

class Continental_Brakes
{
    private:

        std::string Braking;
        std::string Front_Brake_Type;
        short int Front_Brake_Size;
        std::string Caliper_F;
        std::string Rear_Brake_Type;            // 5
        short int Rear_Brake_Size;
        std::string Caliper_R;
        std::string Wheel_Type;
        std::string Front_Wheel_Size;
        std::string Rear_Wheel_Size;            // 10
        std::string Front_Tyre_Size;
        std::string Rear_Tyre_Size;
        std::string Tyre_Type;
        std::string Front_Tyre_Pressure;
        std::string Rear_Tyre_Pressure;         // 15
        std::string Front_Tyre_Pressure_P;
        std::string Rear_Tyre_Pressure_P;

    public:

        Continental_Brakes(std::string, std::string 
                        , short int, std::string 
                        , std::string, short int 
                        , std::string, std::string 
                        , std::string, std::string 
                        , std::string, std::string
                        , std::string, std::string 
                        , std::string, std::string 
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};


#endif // CONTINENTAL_BRAKES_HPP