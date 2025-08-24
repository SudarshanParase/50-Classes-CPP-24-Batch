#ifndef KTM_SAFETY_HPP
#define KTM_SAFETY_HPP

#include <iostream>
#include <string>

class Ktm_Safety
{
    private:

        char USB;
        char Keyless;
        char Saree;
        char Quickshifter;
        char Traction_Control;
        char Cruise_Control;
        std::string Start_Type;
        char Automatic;
        char Silent_Start;
        char Side;
        char Silencer;
        char Kill;

    public:

        Ktm_Safety(char, char 
                , char, char
                , char, char 
                , std::string, char
                , char, char 
                , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // KTM_SAFETY_HPP