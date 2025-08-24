#ifndef MUSTANG_CHASSIS_HPP
#define MUSTANG_CHASSIS_HPP

#include <iostream>
#include <string>

class Mustang_Chassis
{
    private:

        std::string Chassis;
        std::string Body_Type;
        std::string Steering_Type;
        std::string Steering_Column;
        std::string Turning_Radius;
        std::string Front_Suspension;
        std::string Rear_Suspension;

    public:

        Mustang_Chassis(std::string, std::string 
                        , std::string, std::string 
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // MUSTANG_CHASSIS_HPP