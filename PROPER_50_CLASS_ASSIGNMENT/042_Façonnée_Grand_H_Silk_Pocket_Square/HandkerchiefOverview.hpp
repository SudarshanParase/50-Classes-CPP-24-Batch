#ifndef HANDKERCHIEF_OVERVIEW_HPP
#define HANDKERCHIEF_OVERVIEW_HPP

#include <iostream>
#include <string>

class Handerchief_Overview
{
    private:

        std::string Brand;
        std::string Model;
        std::string Category;
        std::string Made;
        std::string Release;

    public:

        Handerchief_Overview(std::string, std::string 
                            , std::string, std::string 
                            , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // HANDKERCHIEF_OVERVIEW_HPP