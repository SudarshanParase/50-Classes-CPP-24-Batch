#ifndef KTM_HIGHLIGHTS_HPP
#define KTM_HIGHLIGHTS_HPP

#include <iostream>
#include <string>

class Ktm_HighLights
{
    private:

        float Engine;
        std::string Transmission;
        short int Kerb;
        std::string Fuel_Tank;
        short int Seat;
        std::string Max;

    public:

        Ktm_HighLights(float , std::string
                    , short int, std::string 
                    , short int, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // KTM_HIGHLIGHTS_HPP