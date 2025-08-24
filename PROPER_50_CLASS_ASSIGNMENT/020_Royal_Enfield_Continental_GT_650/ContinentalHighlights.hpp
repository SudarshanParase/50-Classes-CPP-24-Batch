#ifndef CONTINENTAL_HIGHLIGHTS_HPP
#define CONTINENTAL_HIGHLIGHTS_HPP


// Header File Inclusion
#include <iostream>
#include <string>

class Continental_Highlights
{
    private:

        short int Engine;
        std::string Mileage;
        std::string Transmission;
        short int Kerb;
        std::string Fuel;
        short int Seat;

    public:

        Continental_Highlights(short int, std::string 
                            , std::string, short int 
                            , std::string, short int); // Only Declaration

        void show(); // Only Declaration
};

#endif // CONTINENTAL_HIGHLIGHTS_HPP