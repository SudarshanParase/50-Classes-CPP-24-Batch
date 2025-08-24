#ifndef AIRBUS_OVERVIEW_HPP
#define AIRBUS_OVERVIEW_HPP

#include <iostream>
#include <string>

class Airbus_Overview
{
    private:

        std::string Model;
        std::string Family;
        std::string Entry;
        std::string Typical;
        std::string Range;
        std::string Primary;

    public:

        Airbus_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show();  // Only Declaration
};

#endif // AIRBUS_OVERVIEW_HPP