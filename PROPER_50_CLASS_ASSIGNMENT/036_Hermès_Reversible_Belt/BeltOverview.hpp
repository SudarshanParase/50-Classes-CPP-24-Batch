#ifndef BELT_OVERVIEW_HPP
#define BELT_OVERVIEW_HPP

#include <iostream>
#include <string>

class Belt_Overview
{
    private:

        std::string Brand;
        std::string Model;
        std::string Year;
        std::string Category;
        std::string Gender;
        std::string Status;

    public:

        Belt_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // BELT_OVERVIEW_HPP