#ifndef MUSTANG_DIMENSIONS_HPP
#define MUSTANG_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Mustang_Dimensions
{
    private:

        short int Length;
        short int Width;
        short int Height;
        short int Wheelbase;
        short int Ground_Clearance;
        short int Kerb_Weight;
        std::string Fuel_Tank;
        short int Boot_Space;
        char Seating_Capacity;
        char Doors;
        short int Front_Track;
        short int Rear_Track;

    public:

        Mustang_Dimensions(short int, short int 
                        , short int, short int 
                        , short int, short int 
                        , std::string, short int 
                        , char, char 
                        , short int, short int); // Only Declaration

        void show(); // Only Declaration
};

#endif // MUSTANG_DIMENSIONS_HPP