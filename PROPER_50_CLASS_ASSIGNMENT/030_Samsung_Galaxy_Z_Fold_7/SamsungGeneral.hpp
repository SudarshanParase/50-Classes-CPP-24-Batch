#ifndef SAMSUNG_GENERAL_HPP
#define SAMSUNG_GENERAL_HPP

#include <iostream>
#include <string>

class Samsung_General
{
    private:

        std::string Country_of_Origin;
        std::string Model;
        std::string Sim_Type;
        char Dual_Sim;
        std::string Sim_Size;
        char SAR;
        std::string Device_Type;
        std::string Release_Date;
        char Box;

    public:

        Samsung_General(std::string, std::string
                    , std::string, char 
                    , std::string, char
                    , std::string, std::string
                    , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_GENERAL_HPP