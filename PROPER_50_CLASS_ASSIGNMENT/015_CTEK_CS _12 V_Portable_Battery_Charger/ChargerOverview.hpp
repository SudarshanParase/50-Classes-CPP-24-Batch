#ifndef CHARGER_OVERVIEW_HPP
#define CHARGER_OVERVIEW_HPP

#include <iostream>
#include <string>

class Charger_Overview
{
    private:

        std::string Model;
        std::string Launch_Year;
        std::string Price;
        std::string Category;
        std::string Warranty;
        std::string Use_Cases;

    public:

        Charger_Overview(std::string, std::string
                        , std::string, std::string
                        , std::string, std::string); // Only Declaration

         void show(); // Only Declaration
};

#endif // CHARGER_OVERVIEW_HPP