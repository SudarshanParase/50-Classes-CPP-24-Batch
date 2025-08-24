#ifndef ROLEX_MOVEMENT_HPP
#define ROLEX_MOVEMENT_HPP

#include <iostream>
#include <string>

class Rolex_Movement
{
    private:

        std::string Caliber;
        std::string Escapement;
        std::string Beat;
        std::string Power;
        std::string Shock;
        std::string Hairspring;
        std::string Caseback;

    public:

        Rolex_Movement(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
        
};

#endif // ROLEX_MOVEMENT_HPP