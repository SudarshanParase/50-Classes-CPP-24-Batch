#ifndef SOLAR_VERDICT_HPP
#define SOLAR_VERDICT_HPP

#include <iostream>
#include <string>

class Solar_Verdict
{
    private:

        std::string Efficiency;
        std::string High;
        std::string Strong;
        std::string Longevity;
        std::string Optimized;

    public:

        Solar_Verdict(std::string, std::string 
                    , std::string, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // SOLAR_VERDICT_HPP