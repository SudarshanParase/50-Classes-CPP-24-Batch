#ifndef BELT_DIMENSIONS_HPP
#define BELT_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Belt_Dimensions
{
    private:

        std::string Width;
        std::string Lengths;
        std::string Buckle;
        std::string Reversible;
        std::string Weight;

    public:

        Belt_Dimensions(std::string, std::string 
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // BELT_DIMENSIONS_HPP