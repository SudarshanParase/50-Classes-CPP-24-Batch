#ifndef KETTLE_PERFORMANCE_HPP
#define KETTLE_PERFORMANCE_HPP

#include <iostream>
#include <string>

class Kettle_Performance
{
    private:

        std::string Longevity;
        std::string Safety;
        std::string Noise;
        std::string Low;

    public:

        Kettle_Performance(std::string, std::string 
                        , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};


#endif // KETTLE_PERFORMANCE_HPP