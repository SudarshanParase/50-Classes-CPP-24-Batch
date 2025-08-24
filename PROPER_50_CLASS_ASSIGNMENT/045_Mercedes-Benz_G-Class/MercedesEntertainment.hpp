#ifndef MERCEDES_ENTERTAINMENT_HPP
#define MERCEDES_ENTERTAINMENT_HPP

#include <iostream>
#include <string>

class Mercedes_Entertainment
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
       char SD_Card;
       char Internal_Hard;
       char Wifi;
       char Voice;
       char Gesture;
       std::string Input_Methods;
       char GPS;
      

    public:

        Mercedes_Entertainment(std::string, std::string 
                            , char, char 
                            , char, char 
                            , char, char
                            , char, char 
                            , char, char 
                            , char, char
                            , std::string, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_ENTERTAINMENT_HPP