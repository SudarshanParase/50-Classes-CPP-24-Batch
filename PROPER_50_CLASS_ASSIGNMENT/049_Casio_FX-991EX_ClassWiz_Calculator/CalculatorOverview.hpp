#ifndef CALCULATOR_OVERVIEW_HPP
#define CALCULATOR_OVERVIEW_HPP

#include <iostream>
#include <string>

class Calculator_Overview
{
    private:

        std::string Brand;
        std::string Model;
        std::string Category;
        std::string Released;
        std::string Ideal;
        
    public:

        Calculator_Overview(std::string, std::string   
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration

};

#endif // CALCULATOR_OVERVIEW_HPP