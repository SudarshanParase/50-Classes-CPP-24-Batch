#ifndef COUPE_ENTERTAINMENT_HPP
#define COUPE_ENTERTAINMENT_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Entertainment
{
    private:

        // Data Member
        std::string Infotainment_Screen_Size;
        short int Speakers;
        char Integrated_Music_System;
        char Steering_Mounted_Controls;
        std::string Android_Auto;
        std::string Apple_CarPlay;
        char Voice_Command;
        char Gesture_Control;
        char Wireless_Charger;
        std::string Bluetooth_Compatibility;
        char GPS;
        char Radio;
        char AUX;
        char USB;
        char iPod;
        char Internal_Hard_Drive;

    public:

        // Constructor
        Coupe_Entertainment(std::string, short int, char
                          , char, std::string, std::string
                          , char, char, char
                          , std::string, char, char
                          , char, char, char
                          , char); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_ENTERTAINMENT_HPP 