#ifndef COUPE_CAPACITY_HPP
#define COUPE_CAPACITY_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Capacity
{
    private:

        // Data Members
        std::string Seating_Capacity;
        std::string No_of_Rows;
        std::string Doors;
        short int Bootspace;
        std::string Fuel_Tank;

    public:

        // Constructor
        Coupe_Capacity(std::string, std::string, std::string
                    , short int, std::string); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};


#endif // COUPE_CAPACITY_HPP