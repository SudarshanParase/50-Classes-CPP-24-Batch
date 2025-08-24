#ifndef MAVIC_LIMITATIONS_HPP
#define MAVIC_LIMTIATIONS_HPP

#include <iostream>
#include <string>

class Mavic_Limitations
{
    private:

        std::string Not;
        std::string High;
        std::string Weight;

    public:

        Mavic_Limitations(std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // MAVIC_LIMITATIONS_HPP