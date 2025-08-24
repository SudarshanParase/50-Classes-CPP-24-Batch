#ifndef AQUA_LIMITATIONS_HPP
#define AQUA_LIMITATIONS_HPP

#include <iostream>
#include <string>

class Aqua_Limitations
{
    private:

        std::string Water;
        std::string No;
        std::string Replacement;

    public:

        Aqua_Limitations(std::string, std::string 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // AQUA_LIMITATIONS_HPP