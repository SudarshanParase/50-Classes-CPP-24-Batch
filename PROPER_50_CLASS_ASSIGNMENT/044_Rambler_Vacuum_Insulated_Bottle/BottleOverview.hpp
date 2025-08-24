#ifndef BOTTLE_OVERVIEW_HPP
#define BOTTLE_OVERVIEW_HPP

#include <iostream>
#include <string>

class Bottle_Overview
{
    private:

        std::string Brand;
        std::string Model;
        std::string Category;
        std::string Main;
        std::string Notable;

    public:

        Bottle_Overview(std::string, std::string 
                    , std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};


#endif // BOTTLE_OVERVIEW_HPP