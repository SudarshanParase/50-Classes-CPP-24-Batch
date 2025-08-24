#ifndef SAMSUNG_GENERAL_HPP
#define SAMSUNG_GENERAL_HPP

#include <iostream>
#include <string>

class Samsung_General
{
    private:

        std::string Light_Source;
        std::string Dimensions;
        std::string Weight;

    public:

        Samsung_General(std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration

};

#endif // SAMSUNG_GENERAL_HPP