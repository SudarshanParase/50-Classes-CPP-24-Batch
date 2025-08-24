#ifndef MUSTANG_BRAKES_HPP
#define MUSTANG_BRAKES_HPP

#include <iostream>
#include <string>

class Mustang_Brakes
{
    private:

        std::string Front_Brake_Type;
        std::string Rear_Brake_Type;
        std::string Front_Brake_Size;
        std::string Rear_Brake_Size;
        std::string Wheel_Type;
        std::string Front_Wheel_Size;
        std::string Rear_Wheel_Size;
        char Tubeless;
        std::string Front_Tyre;
        std::string Rear_Tyre;

    public:

        Mustang_Brakes(std::string, std::string 
                    , std::string, std::string 
                    , std::string, std::string 
                    , std::string, char 
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // MUSTANG_BRAKES_HPP