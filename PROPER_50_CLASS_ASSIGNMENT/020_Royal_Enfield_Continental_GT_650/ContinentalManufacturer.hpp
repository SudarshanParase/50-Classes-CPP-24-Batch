#ifndef CONTINENTAL_MANUFACTURER_HPP
#define CONTINENTAL_MANUFACTURER_HPP

#include <iostream>
#include <string>

class Continental_Manufacturer
{
    private:

    std::string Standard_Warranty;
    std::string Standard_Warranty_2;

    public:

        Continental_Manufacturer(std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};


#endif // CONTINENTAL_MANUFACTURER_HPP