#ifndef CONTINENTAL_SEAT_HPP
#define CONTINENTAL_SEAT_HPP

#include <iostream>

class Continental_Seat
{
    private:

        char Under;
        char Seat;
        char Backrest;
        char Footrest;
        char Grab_Rail;

    public:

        Continental_Seat(char, char 
                        , char , char 
                        , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // CONTINENTAL_SEAT_HPP