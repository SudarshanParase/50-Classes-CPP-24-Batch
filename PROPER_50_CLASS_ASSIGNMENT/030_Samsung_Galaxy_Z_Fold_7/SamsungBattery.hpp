#ifndef SAMSUNG_BATTERY_HPP
#define SAMSUNG_BATTERY_HPP

#include <iostream>
#include <string>

class Samsung_Battery
{
    private:

        std::string Type;
        short int Size;
        std::string Fast_Charging;
        std::string Wireless_Charging;
        char Reverse_Charging;
        std::string Reverse_Wireless_Charging;
    
    public:

        Samsung_Battery(std::string, short int 
                    , std::string, std::string 
                    , char, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_BATTERY_HPP