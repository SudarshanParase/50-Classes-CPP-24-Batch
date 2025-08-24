#ifndef SAMSUNG_BASIC_INFO_HPP
#define SAMSUNG_BASIC_INFO_HPP

#include <iostream>
#include <string>

class Samsung_Basic_Info
{
    private:

        std::string Brand;
        std::string SKU;
        std::string MPN;
        std::string UPC;

    public:

        Samsung_Basic_Info(std::string, std::string 
                        , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_BASIC_INFO_HPP