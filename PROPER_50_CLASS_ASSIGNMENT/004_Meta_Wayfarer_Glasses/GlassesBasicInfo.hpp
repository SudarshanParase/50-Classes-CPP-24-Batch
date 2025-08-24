#ifndef GLASSES_BASIC_INFO_HPP
#define GLASSES_BASIC_INFO_HPP

#include <iostream>
#include <string>

class Glasses_Basic_Info
{
    private:

        std::string Brand;
        std::string SKU;
        std::string MPN;

    public:

        Glasses_Basic_Info(std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};


#endif // GLASSES_BASIC_INFO_HPP