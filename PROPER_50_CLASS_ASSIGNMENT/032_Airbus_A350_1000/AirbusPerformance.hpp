#ifndef AIRBUS_PERFORMANCE_HPP
#define AIRBUS_PERFORMANCE_HPP

#include <iostream>
#include <string>

class Airbus_Performance
{
    private:

        std::string Engines;
        std::string Fuel_E;
        std::string MTOW;
        std::string Cruise;
        std::string Service;
        std::string Fuel_C;

    public:

        Airbus_Performance(std::string, std::string
                        , std::string, std::string
                        , std::string, std::string); // Only Declaraiton

        void show(); // Only Declaration
};

#endif // AIRBUS_PERFORMANCE_HPP