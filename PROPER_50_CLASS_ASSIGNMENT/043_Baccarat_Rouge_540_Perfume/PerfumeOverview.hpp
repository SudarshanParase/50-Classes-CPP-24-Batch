#ifndef PERFUME_OVERVIEW_HPP
#define PERFUME_OVERVIEW_HPP

#include <iostream>
#include <string>

class Perfume_Overview
{
    private:

        std::string Brand;
        std::string Fragrance;
        std::string Category;
        std::string Initial;
        std::string Designer;
        std::string Target;

    public:

        Perfume_Overview(std::string, std::string 
                        , std::string, std::string 
                        , std::string , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // PERFUME_OVERVIEW_HPP