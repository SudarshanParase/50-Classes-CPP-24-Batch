#ifndef APPLE_CONNECTIVITY_HPP
#define APPLE_CONNECTIVITY_HPP

#include <iostream>
#include <string>

class Apple_Connectivity
{
    private:

        char GPRS;
        char EDGE;
        char G3;
        char G4;
        char G5;
        std::string Wifi;
        char Wifi_Version;
        std::string Bluetooth;
        std::string USB;
        char USB_Features;

    public:

        Apple_Connectivity(char, char 
                        , char, char 
                        , char, std::string 
                        , char, std::string 
                        , std::string, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_CONNECTIVITY_HPP