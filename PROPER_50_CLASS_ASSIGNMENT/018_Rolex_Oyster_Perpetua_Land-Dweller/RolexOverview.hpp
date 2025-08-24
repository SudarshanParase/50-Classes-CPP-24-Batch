#ifndef ROLEX_OVERVIEW_HPP
#define ROLEX_OVERVIEW_HPP

#include <iostream>
#include <string>

class Rolex_Overview
{
    private:

        std::string Model;
        std::string Launch_Year;
        std::string Case;
        std::string Materials;
        std::string Price;
        std::string Intent;

    public:

        Rolex_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ROLEX_OVERVIEW_HPP