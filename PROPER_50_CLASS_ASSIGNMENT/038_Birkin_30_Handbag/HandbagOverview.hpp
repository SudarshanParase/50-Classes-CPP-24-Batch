#ifndef HANDBAG_OVERVIEW_HPP
#define HANDBAG_OVERVIEW_HPP

#include <iostream>
#include <string>

class Handbag_Overview
{
    private:

        std::string Brand;
        std::string Model;
        std::string Bag;
        std::string Origin;
        std::string Release;
        std::string Target;

    public:
    
        Handbag_Overview(std::string, std::string 
                        , std::string, std::string
                        , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HANDBAG_OVERVIEW_HPP