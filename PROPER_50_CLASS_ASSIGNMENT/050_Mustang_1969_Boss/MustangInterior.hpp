#ifndef MUSTANG_INTERIOR_HPP
#define MUSTANG_INTERIOR_HPP

#include <iostream>
#include <string>

class Mustang_Interior
{
    private:

        std::string Seat_Type;
        std::string Adjustable_Driver;
        char Adjustable_Passenger;
        char Adjustable_Headrest;
        char Heated_Seats;
        char Power_Windows;
        char Air_Conditioner;
        char Automatic;
        char Infotainment;
        std::string Audio;
        std::string Connectivity;
        char Keyless_Entry;
        char Push_Button;
        char Cruise_Control;
        char Driving_Modes;
        char Power_Trunk;

    public:

        Mustang_Interior(std::string, std::string 
                        , char, char 
                        , char, char 
                        , char, char 
                        , char, std::string 
                        , std::string, char 
                        , char, char 
                        , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MUSTANG_INTERIOR_HPP