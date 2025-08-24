#ifndef SHOEI_VENTILATION_HPP
#define SHOEI_VENTILATION_HPP

#include <iostream>
#include <string>

class Shoei_Ventilation
{
    private:

        std::string Ventilation;
        std::string Aerodynamics;

    public:

        Shoei_Ventilation(std::string _1, std::string _2); // Only Declaration

        void show(); // Only Declaration

};

#endif // SHOEI_VENTILATION_HPP