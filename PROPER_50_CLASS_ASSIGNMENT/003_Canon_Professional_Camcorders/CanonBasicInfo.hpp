#ifndef CANON_BASIC_INFO_HPP
#define CANON_BASIC_INFO_HPP

#include <iostream>
#include <string>

class Canon_Basic_Info
{
    private:

        std::string Brand;
        std::string SKU;
        std::string MPN;
        std::string UPC;

    public:

        Canon_Basic_Info(std::string, std::string
                       , std::string, std::string); // Only Declaration


        void show(); // Only Declaration
};

#endif // CANON_BASIC_INFO_HPP