#ifndef SAMSUNG_PACKAGING_INFO_HPP
#define SAMSUNG_PACKAGING_INFO_HPP

#include <iostream>
#include <string>

class Samsung_Packaging_Info
{
    private:

        float Package_Weight;
        std::string Box_Dimensions;

    public:
        Samsung_Packaging_Info(float _1, std::string _2);
       
        void show(); // Only Declaration
};



#endif