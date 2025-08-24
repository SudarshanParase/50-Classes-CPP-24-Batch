#ifndef MERCEDES_SUSPENSIONS_HPP
#define MERCEDES_SUSPENSIONS_HPP

#include <iostream>
#include <string>

class Mercedes_Suspensions
{
    private:

        std::string Front_Suspension;
        std::string Rear_Suspension;
        char Additional;
        std::string Steering;
        std::string Tyres;
        std::string Front_Brake_Type;
        std::string Rear_Brake_Type;
        std::string Spare_Wheel;
        std::string Minimum_Turning;
        std::string Front_Tyres;
        std::string Rear_Tyres;
        std::string Wheels;

    public:

        Mercedes_Suspensions(std::string, std::string 
                            , char, std::string 
                            , std::string, std::string 
                            , std::string, std::string 
                            , std::string, std::string
                            , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_SUSPENSIONS_HPP