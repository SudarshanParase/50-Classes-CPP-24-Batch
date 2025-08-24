#ifndef GLASSES_PACKAGING_INFO_HPP
#define GLASSES_PACKAGING_INFO_HPP

#include <iostream>
#include <string>

class Glasses_Packaging
{
    private:

        std::string Package_Weight;
        std::string Box_Dimensions;

    public:

        Glasses_Packaging(std::string, std::string); // Only Declaration

        void show(); // Only  Declaration
};

#endif // GLASSES_PACKAGING_INFO_HPP