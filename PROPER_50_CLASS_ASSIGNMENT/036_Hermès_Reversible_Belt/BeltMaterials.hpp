#ifndef BELT_MATERIALS_HPP
#define BELT_MATERIALS_HPP

#include <iostream>
#include <string>

class Belt_Materials
{
    private:

        std::string Strap;
        std::string Buckle;
        std::string Craftsmanship;
        std::string Stitching;
        std::string Edge;

    public:

        Belt_Materials(std::string, std::string 
                    , std::string, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // BELT_MATERIALS_HPP