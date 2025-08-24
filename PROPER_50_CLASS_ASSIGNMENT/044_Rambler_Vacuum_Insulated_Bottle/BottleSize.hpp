#ifndef BOTTLE_SIZE_HPP
#define BOTTLE_SIZE_HPP

#include <iostream>
#include <string>

class Bottle_Size
{
    private:

        std::string Available;
        std::string Weight;
        std::string Design;

    public:

        Bottle_Size(std::string, std::string 
                    , std::string ); // Only Declaration

        void show(); //  Only Declaration
};

#endif // BOTTLE_SIZE_HPP