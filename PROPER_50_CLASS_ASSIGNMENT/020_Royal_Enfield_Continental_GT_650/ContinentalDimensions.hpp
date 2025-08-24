#ifndef CONTINENTAL_DIMENSIONS_HPP
#define CONTINENTAL_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Continental_Dimensions
{
    private:

        short int Kerb_Weight;
        short int Seat_Height;
        char Seat_Length;
        short int Ground_Clearance;
        std::string Fuel_Tank_Capacity;
        std::string Reserve_Fuel_Capacity;
        short int Overall_Length;
        short int Overall_Width;
        short int Overall_Height;
        short int Wheelbase;

    public:

        Continental_Dimensions(short int , short int
                            , char, short int 
                            , std::string, std::string 
                            , short int, short int
                            , short int, short int); // Only Declaration

        void show(); // Only Declaration
};


#endif // CONTINENTAL_DIMMENSIONS_HPP