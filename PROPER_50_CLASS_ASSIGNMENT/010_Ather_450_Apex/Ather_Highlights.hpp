#ifndef ATHER_HIGHLIGHTS_HPP
#define ATHER_HIGHLIGHTS_HPP

#include <iostream>
#include <string>

class Ather_Highlights
{
    private:

        short int Riding_Range;
        short int Top_Speed;
        float Kerb_Weight;
        float Charging_Time;
        short int Seat_Height;
        char Charging_Port;

    public:

        Ather_Highlights(short int, short int
                        , float, float
                        , short int, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // ATHER_HIGHLIGHTS_HPP