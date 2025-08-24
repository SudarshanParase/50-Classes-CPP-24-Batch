#ifndef KOENIGSEGG_SUSPENSION_HPP
#define KOENIGSEGG_SUSPENSION_HPP

#include <iostream>
#include <string>

class Koenigsegg_Suspension
{
    private:

        std::string Suspension;
        std::string Steering;
        std::string Brakes;
        std::string Wheels;

    public:

        Koenigsegg_Suspension(std::string, std::string
                            , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // KOENIGSEGG_SUSPENSION_HPP