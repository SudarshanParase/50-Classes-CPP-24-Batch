#ifndef COUPE_SAFETY_HPP
#define COUPE_SAFETY_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Safety
{
    private:

        // Data Member
        char Blind_Spot;
        std::string Lane_Departure_Prevention;
        char Rear_Cross;
        std::string NCAP_Rating;
        std::string Airbags;
        char ADAS_level;
        std::string FCW;
        std::string AEB;
        std::string Lane_Departure_Warning;
        char TPMS;
        char High_Beam_Assist;
        char Emergency_Brake_Light;
        std::string Overspeed_Warning;
        char Child_Seat;
        char Puncture_Repair_Kit;
        char Seat_Belt_Warning;
        char Rear_Middle_Head;
        char Rear_Middle_Three;

    public:

        // Constructor
        Coupe_Safety(char, std::string, char, std::string
                    ,std::string, char, std::string, std::string
                    ,std::string, char, char, char
                    ,std::string, char, char, char, char
                    ,char); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_SAFETY_HPP 