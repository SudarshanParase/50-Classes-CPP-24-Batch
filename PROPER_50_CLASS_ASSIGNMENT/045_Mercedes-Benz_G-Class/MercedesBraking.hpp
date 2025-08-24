#ifndef MERCEDES_BRAKING_HPP
#define MERCEDES_BRAKING_HPP

#include <iostream>
#include <string>

class Mercedes_Braking
{
    private:

        char Anti_Lock;
        char Brake_Assist;
        char Electronic_Brake;
        char Electronic_Stability;
        char Traction_Control;
        char Hill_Hold;
        char Hill_Descent;
        char Limited_Slip;
        std::string Differential_Lock;
        std::string Four_Wheel;
        char Ride;

    public:

        Mercedes_Braking(char, char 
                        , char, char 
                        , char, char 
                        , char, char 
                        , std::string, std::string 
                        , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_BRAKING_HPP