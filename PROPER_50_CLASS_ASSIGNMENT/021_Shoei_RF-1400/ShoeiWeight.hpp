#ifndef SHOEI_WEIGHT_HPP
#define SHOEI_WEIGHT_HPP

#include <iostream>
#include <string>

class Shoei_Weight
{
    private:

        std::string Weight;
        std::string Fit;
        std::string Liner;

    public:

        Shoei_Weight(std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // SHOEI_WEIGHT_HPP