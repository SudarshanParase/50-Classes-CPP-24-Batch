#ifndef BOTTLE_INSULATION_HPP
#define BOTTLE_INSULATION_HPP

#include <iostream>
#include <string>

class Bottle_Insulation
{
    private:

        std::string Construction;
        std::string Hot;
        std::string No;

    public:

        Bottle_Insulation(std::string, std::string 
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // BOTTLE_INSULATION_HPP