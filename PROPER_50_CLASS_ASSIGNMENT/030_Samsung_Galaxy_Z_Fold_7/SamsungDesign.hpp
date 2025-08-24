#ifndef SAMSUNG_DESIGN_HPP
#define SAMSUNG_DESIGN_HPP

#include <iostream>
#include <string>

class Samsung_Design
{
    private:

        std::string Dimensions;
        short int Weight;
        std::string Colors;

    public:

        Samsung_Design(std::string, short int 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_DESIGN_HPP