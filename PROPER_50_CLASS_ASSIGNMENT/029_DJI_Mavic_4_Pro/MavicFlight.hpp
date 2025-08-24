#ifndef MAVIC_FLIGHT_HPP
#define MAVIC_FLIGHT_HPP

#include <iostream>
#include <string>

class Mavic_Flight
{
    private:

        std::string Battery;
        std::string Flight;
        std::string Max;
        std::string Altitude;
        std::string Wind;

    public:

        Mavic_Flight(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // MAVIC_FLIGHT_HPP