#ifndef POWER_BASIC_INFO_HPP
#define POWER_BASIC_INFO_HPP

#include <iostream>
#include <string>

class Power_Basic
{
    private:

        std::string Brand;
        std::string SKU;
        std::string MPN;
        std::string UPC;

    public:

        Power_Basic(std::string, std::string 
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // POWER_BASIC_INFO_HPP