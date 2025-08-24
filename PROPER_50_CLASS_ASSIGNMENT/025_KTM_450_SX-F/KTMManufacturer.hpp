#ifndef KTM_MANUFACTURER_HPP
#define KTM_MANUFACTURER_HPP

#include <iostream>
#include <string>

class Ktm_Manufacturer
{
    private:

        std::string Standard_Warranty;
        std::string Standard_Warranty_1;

    public:

        Ktm_Manufacturer(std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // KTM_MANUFACTURER_HPP