#ifndef APPLE_DESIGN_HPP
#define APPLE_DESIGN_HPP

#include <iostream>
#include <string>

class Apple_Design
{
    private:

        std::string Dimensions;
        short int Weight;
        char Colors;

    public:

        Apple_Design(std::string _1, short int _2 
                    , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_DESIGN_HPP