#ifndef DEFENDER_ENTERTAINMENT_HPP
#define DEFENDER_ENTERTAINMENT_HPP

#include <iostream>
#include <string>

class Defender_Entertainment
{
    private:
    
       std::string Infotainment_Screen;
       std::string Audio_System;
       char Android_Auto;
       char Apple_CarPlay;
       char AM;
       char Steering;
       char Integrated;
       char iPod;
       char USB;
       char Internal_Hard;
       char Wifi;
       char Voice;
       char Gesture;
       std::string Input_Methods;
       char GPS;
       std::string Wireless_Charger;

    public:

        Defender_Entertainment(std::string, std::string 
                            , char, char 
                            , char, char 
                            , char, char
                            , char, char 
                            , char, char 
                            , char, std::string
                            , char, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_ENTERTAINMENT_HPP