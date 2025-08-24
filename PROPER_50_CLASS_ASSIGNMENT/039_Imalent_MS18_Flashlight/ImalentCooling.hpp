#ifndef IMALENT_COOLING_HPP
#define IMALENT_COOLING_HPP

#include <iostream>
#include <string>

class Imalent_Cooling
{
    private:

        std::string Cooling;
        std::string Fan;
        std::string Overheat;
        std::string Material;

    public:

        Imalent_Cooling(std::string, std::string 
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // IMALENT_COOLING_HPP