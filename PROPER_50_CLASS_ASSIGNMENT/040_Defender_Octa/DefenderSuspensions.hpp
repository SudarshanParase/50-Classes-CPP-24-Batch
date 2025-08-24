#ifndef DEFENDER_SUSPENSIONS_HPP
#define DEFENDER_SUSPENSIONS_HPP

#include <iostream>
#include <string>

class Defender_Suspensions
{
    private:

        std::string Front_Suspensions;
        std::string Rear_Suspensions;
        std::string Steering;
        std::string Tyres;
        std::string Front_Brake;
        std::string Rear_Brake;
        std::string Spare_Wheel;
        std::string Wheels;

    public:

        Defender_Suspensions(std::string, std::string 
                            , std::string, std::string 
                            , std::string, std::string 
                            , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_SUSPENSIONS_HPP