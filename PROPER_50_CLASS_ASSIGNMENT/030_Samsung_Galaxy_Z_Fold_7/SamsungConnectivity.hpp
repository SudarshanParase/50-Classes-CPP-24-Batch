#ifndef SAMSUNG_CONNECTIVITY_HPP
#define SAMSUNG_CONNECTIVITY_HPP

#include <iostream>
#include <string>

class Samsung_Connectivity
{
    private:

        char GPRS;
        char EDGE;
        char G3;
        char G4;
        char G5;
        char Bands_5G;
        std::string Volte;
        char Vo5G;
        std::string Wifi;
        std::string Wifi_Version;
        std::string Bluetooth;
        std::string USB;
        std::string USB_Features;
        char IR_Blaster;

    public:

        Samsung_Connectivity(char, char 
                            , char, char
                            , char, char
                            , std::string, char 
                            , std::string, std::string
                            , std::string, std::string 
                            , std::string, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_CONNECTIVITY_HPP