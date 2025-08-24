#ifndef ATHER_SEAT_STORAGE_HPP
#define ATHER_SEAT_STORAGE_HPP

#include <iostream>
#include <string>

class Ather_Seat
{
    private:

        std::string Under_Seat;
        char Front_Storage;
        char Document_Storage;
        char Helment_Hooks;
        char Pilion_Seat;
        char Pilion_Backrest;
        char Pilion_Footrest;
        char Pilion_Garb;
    
    public:

        Ather_Seat(std::string, char
                , char, char
                , char, char
                , char, char); // Only Declaration

        void show(); // Only Declaration 
};

#endif // ATHER_SEAT_STORAGE_HPP