#ifndef ANKER_PHYSICAL_HPP
#define ANKER_PHYSICAL_HPP

#include <iostream>
#include <string>

class Anker_Physical
{
    private:

        std::string Weight;
        std::string Dimensions;
        std::string Build;

    public:

        Anker_Physical(std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // ANKER_PHYSICAL_HPP