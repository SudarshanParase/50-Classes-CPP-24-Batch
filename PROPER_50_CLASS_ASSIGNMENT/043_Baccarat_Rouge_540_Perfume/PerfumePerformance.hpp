#ifndef PERFUME_PERFORMANCE_HPP
#define PERFUME_PERFORMANCE_HPP

#include <iostream>
#include <string>

class Perfume_Performance
{
    private:

        std::string Longevity;
        std::string Sillage;
        std::string Strength;
        std::string Versatility;

    public:

        Perfume_Performance(std::string, std::string 
                        , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};
#endif // PERFUME_PERFORMANCE_HPP