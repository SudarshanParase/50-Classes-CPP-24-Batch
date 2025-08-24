#ifndef JACKET_DIMENSIONS_HPP
#define JACKET_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Jacket_Dimensions
{
    private:

        std::string Cut;
        std::string Sizes;
        std::string Length;
        std::string Weight;
        std::string Fit;

    public:

        Jacket_Dimensions(std::string, std::string 
                        , std::string, std::string 
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // JACKET_DIMENSIONS_HPP