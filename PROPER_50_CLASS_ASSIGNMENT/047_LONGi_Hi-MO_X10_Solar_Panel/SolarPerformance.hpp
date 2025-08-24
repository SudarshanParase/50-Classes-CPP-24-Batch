#ifndef SOLAR_PERFORMANCE_HPP
#define SOLAR_PERFORMANCE_HPP

#include <iostream>
#include <string>

class Solar_Performance
{
    private:

        std::string Efficiency;
        std::string Power;
        std::string Technology;
        std::string Degradation;
        std::string Temperature;

    public:

        Solar_Performance(std::string, std::string 
                        , std::string, std::string 
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // SOLAR_PERFORMANCE_HPP