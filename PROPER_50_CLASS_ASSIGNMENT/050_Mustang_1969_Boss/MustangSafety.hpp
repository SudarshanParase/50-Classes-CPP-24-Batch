#ifndef MUSTANG_SAFETY_HPP
#define MUSTANG_SAFETY_HPP

#include <iostream>
#include <string>

class Mustang_Safety
{
    private:

        std::string NCAP_Rating;
        char Air_Bags;
        char Brake_Assist;
        char Anti_Lock;
        char Traction;
        char Electronic_Stability;
        char Electronic_Brake;
        char Tyre_Pressure;
        char Hill_Start;
        char Hill_Descent;
        char Parking_Assist;
        char Parking_Sensors;
        char Parking_Camera;
        char Central_Locking;
        char Child_Safety;
        char Seat_Belt;
        char Engine;
        char Anti_Theft;

    public:

        Mustang_Safety(std::string, char 
                    , char, char 
                    , char, char 
                    , char, char 
                    , char, char 
                    , char, char 
                    , char, char 
                    , char, char 
                    , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MUSTANG_SAFETY_HPP