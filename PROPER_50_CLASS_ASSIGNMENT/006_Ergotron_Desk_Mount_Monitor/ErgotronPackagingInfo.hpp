#ifndef ERGOTRON_PACKAGING_INFO_HPP
#define ERGOTRON_PACKAGING_INFO_HPP

#include <iostream>
#include <string>

class E_Packaging
{
    private:

        std::string Package_Weight;
        std::string Box_Dimensions;

    public:

        E_Packaging(std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ERGOTRON_PACKAGING_INFO_HPP