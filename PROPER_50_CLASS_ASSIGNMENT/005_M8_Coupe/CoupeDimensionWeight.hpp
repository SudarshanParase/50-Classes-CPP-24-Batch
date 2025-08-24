#ifndef COUPE_DIMENSION_WEIGHT_HPP
#define COUPE_DIMENSION_WEIGHT_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Dimension
{
    private:

        // Data Member
        short int Length;
        short int Width;
        short int Height;
        short int Ground_Clearance;
        short int Wheelbase;

    public:

        // Constructor
        Coupe_Dimension(short int, short int, short int
                      , short int, short int); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_DIMENSION_WEIGHT_HPP 