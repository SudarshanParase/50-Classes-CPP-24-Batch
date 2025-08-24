#ifndef SOLAR_DESIGN_HPP
#define SOLAR_DESIGN_HPP

#include <iostream>
#include <string>

class Solar_Design
{
    private:

        std::string Cell;
        std::string Module;
        std::string Bifacial;
        std::string Structural;
        std::string Warranty;

    public:

        Solar_Design(std::string, std::string 
                    , std::string, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // SOLAR_DESIGN_HPP