#ifndef RAYBAN_OVERVIEW_HPP
#define RAYBAN_OVERVIEW_HPP

#include <iostream>
#include <string>

class Rayban_Overview
{
    private:

        std::string Brand;
        std::string Model;
        std::string Release;
        std::string Product;
        std::string Gender;
        std::string Heritage;

    public:

        Rayban_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only  Declaration
};

#endif // RAYBAN_OVERVIEW_HPP

