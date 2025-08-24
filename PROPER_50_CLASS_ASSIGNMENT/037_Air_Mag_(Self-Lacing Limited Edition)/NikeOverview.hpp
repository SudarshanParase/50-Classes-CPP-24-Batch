#ifndef NIKE_OVERVIEW_HPP
#define NIKE_OVERVIEW_HPP

#include <iostream>
#include <string>

class Nike_Overview
{
    private:

        std::string Brand;
        std::string Model;
        std::string Year;
        std::string Category;
        std::string Gender;
        std::string Status;

    public:

        Nike_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // NIKE_OVERVIEW_HPP