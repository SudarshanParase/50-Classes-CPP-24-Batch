#ifndef SAMSUNG_GENERAL_HPP
#define SAMSUNG_GENERAL_HPP

#include <iostream>
#include <string>

class Samsung_General 
{
    private:

        std::string Height_Adjustment;
        char Rotation_Adjustment;
        std::string Swivel_Adjustment;
        std::string Tilt_Adjustment;
        std::string Mounting_Hole_Pattern;
        char Lock_Slot;
        std::string Dimensions;
        std::string Weight;

    public:
        Samsung_General(std::string _1, char _2, std::string _3, std::string _4 
                      , std::string _5, char _6, std::string _7, std::string _8);
                      

                      void show();

};

void show();

#endif