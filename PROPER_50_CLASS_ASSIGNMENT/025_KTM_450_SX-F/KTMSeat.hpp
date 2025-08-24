#ifndef KTM_SEAT_HPP
#define KTM_SEAT_HPP

#include <iostream>
#include <string>

class Ktm_Seat
{
    private:

        char Under_Seat_Storage;
        char Pillion_Seat;
        char Pillion_Backrest;
        char Pillion_Footrest;
        char Pillion_Grab_Rail;

    public:

        Ktm_Seat(char, char 
                , char, char 
                , char); // Only Declaration

        void show(); // Only Declaration
};


#endif // KTM_SEAT_HPP