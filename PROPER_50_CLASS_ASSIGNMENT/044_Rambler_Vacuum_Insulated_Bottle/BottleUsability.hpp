#ifndef BOTTLE_USABILITY_HPP
#define BOTTLE_USABILITY_HPP

#include <iostream>
#include <string>

class Bottle_Usability
{
    private:

        std::string Mouth;
        std::string Warranty;
        std::string Cleaning;
        std::string Leakproof;

    public:

        Bottle_Usability(std::string, std::string 
                        , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // BOTTLE_USABILITY_HPP