#ifndef SOLAR_THERMAL_HPP
#define SOLAR_THERMAL_HPP

#include <iostream>
#include <string>

class Solar_Thermal
{
    private:

        std::string Resilience;
        std::string Annual;
        std::string Low;

    public:

        Solar_Thermal(std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // SOLAR_THERMAL_HPP