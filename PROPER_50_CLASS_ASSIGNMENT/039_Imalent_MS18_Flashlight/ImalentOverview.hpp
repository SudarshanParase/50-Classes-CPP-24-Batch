#ifndef IMALENT_OVERVIEW_HPP
#define IMALENT_OVERVIEW_HPP

#include <iostream>
#include <string>

class Imalent_Overview
{
    private:

        std::string Brand;
        std::string Model;
        std::string Category;
        std::string Launch_Year;
        std::string Target;

    public:

        Imalent_Overview(std::string, std::string 
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // IMALENT_OVERVIEW_HPP