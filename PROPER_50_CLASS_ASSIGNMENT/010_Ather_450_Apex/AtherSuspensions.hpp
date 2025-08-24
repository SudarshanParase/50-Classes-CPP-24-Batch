#ifndef ATHER_SUSPENSIONS_HPP
#define ATHER_SUSPENSIONS_HPP

#include <iostream>
#include <string>

class Ather_Suspensions
{
    private:

        std::string Front_Suspension;
        std::string Rear_Suspension;
        char F_Preload;
        char R_Preload;
        std::string Chassis_Type;

    public:

        Ather_Suspensions
        (std::string, std::string
        , char , char
        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ATHER_SUSPENSIONS_HPP