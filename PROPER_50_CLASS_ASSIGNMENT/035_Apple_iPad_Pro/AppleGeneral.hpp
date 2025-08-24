#ifndef APPLE_GENERAL_HPP
#define APPLE_GENERAL_HPP

#include <iostream>
#include <string>

class Apple_General 
{
    private:

        std::string Model;
        std::string Sim_Type;
        char Dual_Sim;
        char Sim_Size;
        std::string Device_Type;
        std::string Release_Date;
        char Box;
        char Voice_Call;

    public:

        Apple_General(std::string, std::string 
                    , char, char 
                    , std::string, std::string 
                    , char, char); // Only Declaration

        void show(); // Only Declaration

};

#endif // APPLE_GENERAL_HPP