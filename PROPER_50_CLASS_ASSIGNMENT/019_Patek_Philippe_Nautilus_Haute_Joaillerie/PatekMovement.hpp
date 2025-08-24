#ifndef PATEK_MOVEMENT_HPP
#define PATEK_MOVEMENT_HPP

#include <iostream>
#include <string>

class Patek_Movement
{
    private:

       std::string Movement;
       std::string Power;
       std::string Functions;

    public:

        Patek_Movement(std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
        
};

#endif // PATEK_MOVEMENT_HPP