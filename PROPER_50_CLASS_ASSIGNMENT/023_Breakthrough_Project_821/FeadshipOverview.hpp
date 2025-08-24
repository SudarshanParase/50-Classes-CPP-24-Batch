#ifndef FEADSHIP_OVERVIEW_HPP
#define FEADSHIP_OVERVIEW_HPP

#include <iostream>
#include <string>

class Feadship_Overview
{
    private:

        std::string Model;
        std::string Launch;
        std::string Category;
        std::string Builder;
        std::string Designers;

    public:

        Feadship_Overview(std::string, std::string 
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // FEADSHIP_OVERVIEW_HPP