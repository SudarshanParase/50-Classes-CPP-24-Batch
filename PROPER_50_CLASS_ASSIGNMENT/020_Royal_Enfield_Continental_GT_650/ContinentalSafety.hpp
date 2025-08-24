#ifndef CONTINENTAL_SAFETY_HPP
#define CONTINENTAL_SAFETY_HPP

#include <iostream>
#include <string>

class Continental_Safety
{
    private:

        char USB;
        char Keyless;
        char Saree;
        char Quickshifter;
        char Traction;
        char Cruise;
        std::string Start;
        char Automatic;
        char Silent;
        char Side;
        char Silencer;
        char Kill;

    public:

        Continental_Safety(char, char 
                        , char, char 
                        , char, char
                        , std::string, char
                        , char, char 
                        , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // CONTINENTAL_SAFETY_HPP