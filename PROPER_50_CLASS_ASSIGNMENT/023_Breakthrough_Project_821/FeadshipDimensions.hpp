#ifndef FEADSHIP_DIMENSIONS_HPP
#define FEADSHIP_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Feadship_Dimensions
{
    private:

        float Length;
        std::string Beam;
        std::string Draft;
        std::string Gross_Tonnage;
        std::string Hull;
    public:

        Feadship_Dimensions(float, std::string
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // FEADSHIP_DIMENSIONS_HPP