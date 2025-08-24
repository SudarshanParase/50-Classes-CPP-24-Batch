#ifndef CANON_PACKAGING_INFO_HPP
#define CANON_PACKAGING_INFO_HPP

#include <iostream>
#include <string>

class Canon_Packaging
{
    private:

        short int Weight;
        std::string Box_Dimensions;

    public:

        Canon_Packaging(short int, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CANON_PACKAGING_INFO_HPP