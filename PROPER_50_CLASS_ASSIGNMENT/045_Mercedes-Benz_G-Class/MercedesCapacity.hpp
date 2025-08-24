#ifndef MERCEDES_CAPACITY_HPP
#define MERCEDES_CAPACITY_HPP

#include <iostream>
#include <string>

class Mercedes_Capacity
{
    private:

        std::string Seating_Capacity;
        std::string Doors;
        short int Bootspace;
        short int Fuel;

    public:

        Mercedes_Capacity(std::string, std::string 
                        , short int, short int); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_CAPACITY_HPP