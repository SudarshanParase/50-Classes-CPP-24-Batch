#ifndef MERCEDES_SAFETY_HPP
#define MERCEDES_SAFETY_HPP

#include <iostream>
#include <string>

class Mercedes_Safety
{
    private:

       char Forward_Collision;
       std::string NCAP;
       std::string Airbags;
       char Automatic;
       std::string Lane_Functions;
       char Lane_Departure;
       char Blind_Spot;
       char High_Beam;
       char Tyre_Pressure;
       char Emergency_Brake;
       std::string Overspeed_Warning;
       std::string Second_Row;
       char Child_Seat;
       char Puncture_Repair;
       char Dashcam;
       char Seat_Belt;

    public:

        Mercedes_Safety(char, std::string 
                        , std::string, char 
                        , std::string, char 
                        , char, char 
                        , char, char 
                        , std::string, std::string 
                        , char, char 
                        , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_SAFETY_HPP