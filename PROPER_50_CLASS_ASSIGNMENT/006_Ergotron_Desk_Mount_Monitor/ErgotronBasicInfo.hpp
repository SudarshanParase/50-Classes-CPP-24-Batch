#ifndef ERGOTRON_BASIC_INFO_HPP
#define ERGOTRON_BASIC_INFO_HPP

#include <iostream>
#include <string>

class Ergotron_Basic_Info
{
    private:

        std::string Brand;
        std::string SKU;
        std::string MPN;
        std::string UPC;

    public:

        Ergotron_Basic_Info(std::string, std::string
                          , std::string, std::string);

        void show(); // Declaration Only
};

#endif // ERGOTRON_BASIC_INFO_HPP