#ifndef KTM_DIMENSIONS_HPP
#define KTM_DIMENSIONS_HPP

#include <iostream>
#include <string>

class Ktm_Dimensions
{
    private:

        short int Kerb;
        short int Seat_Height;
        char Seat_Length;
        short int Ground_Clearance;
        std::string Fuel_Tank;
        std::string Reserve_Fuel;
        char Overall_Length;
        char Overall_Width;
        char Overall_Height;
        short int Wheelbase;

    public:

        Ktm_Dimensions(short int, short int
                    , char, short int 
                    , std::string, std::string  
                    , char , char 
                    , char , short int ); // Only Declaration

        void show(); // Only Declaration
};

#endif // KTM_DIMENSIONS_HPP