#ifndef POWER_CONNECTIVITY_HPP
#define POWER_CONNECTIVITY_HPP

#include <iostream>
#include <string>

class Power_Connectivity
{
    private:

        std::string Audio;
        std::string Network;
        char USB;
        char Wireless;
        char Bluetooth;
        char Mobile;

    public:

        Power_Connectivity(std::string, std::string 
                        , char, char 
                        , char, char); // Only Declaration

        void show(); // Only Declaration
};


#endif // POWER_CONNECTIVITY_HPP