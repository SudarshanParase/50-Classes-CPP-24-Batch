#ifndef FEADSHIP_PROPULSION_HPP
#define FEADSHIP_PROPULSION_HPP

#include <iostream>
#include <string>

class Feadship_Propulsion
{
    private:

        std::string Primary;
        std::string Fuel;
        std::string Backup;
        std::string Max;
        std::string Cruising;
        std::string Sustainability;

    public:

        Feadship_Propulsion(std::string, std::string 
                            , std::string, std::string
                            , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // FEADSHIP_PROPULSION_HPP