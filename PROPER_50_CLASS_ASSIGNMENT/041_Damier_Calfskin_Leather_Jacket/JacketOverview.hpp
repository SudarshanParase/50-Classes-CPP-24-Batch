#ifndef JACKET_OVERVIEW_HPP
#define JACKET_OVERVIEW_HPP

#include <iostream>
#include <string>

class Jacket_Overview
{
    private:

        std::string Brand;
        std::string Model;
        std::string Category;
        std::string Release;
        std::string Target;

    public:

        Jacket_Overview(std::string, std::string 
                    , std::string, std::string 
                    , std::string); // Only Declartion
        
        void show(); // Only Declaration
};

#endif // JACKET_OVERVIEW_HPP