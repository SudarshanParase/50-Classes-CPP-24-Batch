#ifndef BOTTLE_BUILD_HPP
#define BOTTLE_BUILD_HPP

#include <iostream>
#include <string>

class Bottle_Build 
{
    private:

        std::string Material;
        std::string Durability;
        std::string Cap;

    public:

        Bottle_Build(std::string, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // BOTTLE_BUILD_HPP