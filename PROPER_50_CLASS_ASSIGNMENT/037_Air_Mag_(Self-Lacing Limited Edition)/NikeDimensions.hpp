#ifndef NIKE_DIMENSIONS_HPP
#define NIKE_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Nike_Dimensions
{
    private:

        std::string Sizes;
        std::string Weight;
        std::string Fit;
        std::string Insole;

    public:

        Nike_Dimensions(std::string, std::string 
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // NIKE_DIMENSIONS_HPP