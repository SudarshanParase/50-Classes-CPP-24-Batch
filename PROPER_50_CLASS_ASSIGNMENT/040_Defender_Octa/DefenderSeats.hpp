#ifndef DEFENDER_SEATS_HPP
#define DEFENDER_SEATS_HPP

#include <iostream>
#include <string>

class Defender_Seats
{
    private:

        std::string Seat_Upholstery;
        std::string Driver_Seat;
        std::string Front_Passenger;
        std::string Second_Row;
        std::string Ventilated;
        std::string Ventilated_Type;
        char Massage_Seats;
        std::string Interior;
        char Leather_Steering;
        char Leather_Gear;
        std::string Headrests;
        char Front_Seatback;
        char Driver_Armrest;
        char Rear_Armrest;
        std::string Split_Rear;
        std::string Folding_Rear;
        char Split_Third_Row;
        std::string Rear_Passenger;
        char Third_Row_Seat;

    public:

        Defender_Seats(std::string, std::string 
                    , std::string, std::string 
                    , std::string, std::string 
                    , char, std::string 
                    , char, char 
                    , std::string, char 
                    , char, char 
                    , std::string, std::string 
                    , char, std::string 
                    , char); // Only Declaration

        void show(); // Only Declaration
}; 

#endif // DEFENDER_SEATS_HPP