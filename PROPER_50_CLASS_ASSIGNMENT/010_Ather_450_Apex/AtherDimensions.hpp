#ifndef ATHER_DIMENSIONS_HPP
#define ATHER_DIMENSIONS_HPP


#include <iostream>
#include <string>

class Ather_Dimensions
{
    private:

        float Kerb_Weight;
        short int Seat_Height;
        char Seat_Length;
        short int Ground_Clearance;
        short int Overall_Length;
        short int Overall_Width;
        short int Overall_Height;
        char Wheelbase;
        char Carrying_Capacity;

    public:

        Ather_Dimensions(float, short int
                        , char , short int
                        , short int, short int
                        , short int, char
                        , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // ATHER_DIMENSIONS_HPP