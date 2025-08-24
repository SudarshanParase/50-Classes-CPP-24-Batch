#ifndef COUPE_SEAT_UPHOLSTERY_HPP
#define COUPE_SEAT_UPHOLSTERY_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Seat
{
    private:

        // Data Member
        std::string Seat_Upholstery;
        std::string Driver_Seat;
        std::string Front_Passenger_Seat;
        char Ventilated_Seats;
        char Ventilated_Seat_Type;
        std::string Interiors;
        std::string Interior_Colours;
        char Leather_Wrapped_Steering;
        char Leather_Wrapped_Gear;
        std::string Headrests;
        char Front_Seatback;
        char Driver_Armrest;
        char Rear_Armrest;
        std::string Split_Rear_Seat;
        std::string Folding_Rear_Seat;
        char Active_Headrest;
        std::string Rear_Passenger_Seat;

    public:

        // Constructor
        Coupe_Seat(std::string, std::string, std::string
                 , char, char, std::string
                 , std::string, char, char
                 , std::string, char, char
                 , char, std::string, std::string
                 , char, std::string); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_SEAT_UPHOLSTERY_HPP 