#ifndef PATEK_OVERVIEW_HPP
#define PATEK_OVERVIEW_HPP

#include <iostream>
#include <string>

class Patek_Overview
{
    private:

        std::string Model;
        std::string Unveiled;
        std::string Category;
        std::string Case;
        std::string Price;
        
    public:

        Patek_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // PATEK_OVERVIEW_HPP
