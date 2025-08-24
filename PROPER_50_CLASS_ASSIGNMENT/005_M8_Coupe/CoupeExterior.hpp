#ifndef COUPE_EXTERIOR_HPP
#define COUPE_EXTERIOR_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Exterior
{
    private:

        // Data Member
        char Sunroof;
        std::string Antenna;
        char Body_Coloured_Bumpers;
        char Body_Kit;
        char Chrome_Finish_Exhaust_Pipe;

    public:

        // Constructor
        Coupe_Exterior(char, std::string, char
                      , char, char); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_EXTERIOR_HPP 