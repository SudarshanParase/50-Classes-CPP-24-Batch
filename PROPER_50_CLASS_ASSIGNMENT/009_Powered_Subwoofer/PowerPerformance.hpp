#ifndef POWER_PERFORMANCE_HPP
#define POWER_PERFORMANCE_HPP

#include <iostream>
#include <string>

class Power_Performance
{
    private:

        std::string Frequency;
        std::string Maximum;

    public:

        Power_Performance(std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};


#endif // POWER_PERFORMANCE_HPP