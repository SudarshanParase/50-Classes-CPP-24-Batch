#ifndef CHARGER_USABILITY_HPP
#define CHARGER_USABILITY_HPP

#include <iostream>
#include <string>

class Charger_Usability
{
    private:

        std::string Plug;
        std::string LED;
        std::string Maintainer;
        std::string Hold;

    public:

        Charger_Usability(std::string, std::string
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CHARGER_USABILITY_HPP