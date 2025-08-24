#ifndef COUPE_BRAKING_TRACTION_HPP
#define COUPE_BRAKING_TRACTION_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Braking_Traction
{
    private:

        // Data Members
        char ABS;
        char BA;
        char EBD;
        char ESP;
        char TC_TCS;
        char Hill_Hold;
        char Hill_Descent;
        char LSD;
        char Differential_Lock;
        std::string Four_Wheel_Drive;
        char Ride_Height_Adjustment;
        


    public:

        // Constructor
        Coupe_Braking_Traction(char, char, char
                              , char, char, char
                              , char, char, char
                              , std::string , char); // Only Declaration

        // Show Function
        void show(); // Only Declaration


};

#endif // COUPE_BRAKING_TRACTION_HPP