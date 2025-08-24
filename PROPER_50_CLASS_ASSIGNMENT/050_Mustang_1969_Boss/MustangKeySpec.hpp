#ifndef MUSTANG_KEY_SPEC_HPP
#define MUSTANG_KEY_SPEC_HPP

#include <iostream>
#include <string>

class Mustang_Key
{
    private:

        short int Engine_Capacity;
        std::string Power;
        std::string Torque;
        short int Top_Speed;
        std::string Gearbox;
        std::string Fuel_Type;
        char Seating_Capacity;

    public:

        Mustang_Key(short int, std::string 
                , std::string, short int 
                , std::string, std::string 
                , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MUSTANG_KEY_SPEC_HPP