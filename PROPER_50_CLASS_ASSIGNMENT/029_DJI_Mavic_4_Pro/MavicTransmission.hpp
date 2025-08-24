#ifndef MAVIC_TRANSMISSION_HPP
#define MAVIC_TRANSMISSION_HPP

#include <iostream> 
#include <string>

class Mavic_Transmission
{
    private:

        std::string Video;
        std::string Internal;
        std::string Charging;

    public:

        Mavic_Transmission(std::string, std::string
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // MAVIC_TRANSMISSION_HPP