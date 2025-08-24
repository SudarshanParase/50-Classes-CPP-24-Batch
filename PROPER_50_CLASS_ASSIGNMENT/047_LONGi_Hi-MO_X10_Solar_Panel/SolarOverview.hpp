#ifndef SOLAR_OVERVIEW_HPP
#define SOLAR_OVERVIEW_HPP

#include <iostream>
#include <string>

class Solar_Overview
{
    private:

        std::string Manufacturer;
        std::string Model;
        std::string Category;
        std::string Release;
        std::string Target;

    public:

        Solar_Overview(std::string, std::string 
                    , std::string, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declaration 

};

#endif // SOLAR_OVERVIEW_HPP