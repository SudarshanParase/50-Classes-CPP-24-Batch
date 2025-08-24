#ifndef SAMSUNG_PACKAGING_INFO_HPP
#define SAMSUNG_PACKAGING_INFO_HPP

#include <iostream>
#include <string>

class Samsung_Packaging
{
    private:

        float Package_Weight;
        std::string Box_Dimensions;
        
    public:

        Samsung_Packaging(float, std::string); // Only Declaratioin

        void show(); // Only Declaration
};

#endif // SAMSUNG_PACKAGING_INFO_HPP