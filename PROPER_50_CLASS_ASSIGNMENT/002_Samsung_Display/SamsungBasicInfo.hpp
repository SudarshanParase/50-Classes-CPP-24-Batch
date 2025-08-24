#ifndef SAMSUNG_BASIC_INFO_HPP
#define SAMSUNG_BASIC_INFO_HPP

#include <iostream>
#include <string>

class Samsung_Basic_Info
{
    private:
        int Price;
        std::string Brand;
        std::string SKU;
        std::string MPN;
    public:
        Samsung_Basic_Info(int _1, std::string _2
                 , std::string _3, std::string _4);
                

        void show(); // Declaration Only
};

#endif // SAMSUNG_BASIC_INFO_HPP