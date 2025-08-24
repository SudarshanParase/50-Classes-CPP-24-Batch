#ifndef DEFENDER_DOORS_HPP
#define DEFENDER_DOORS_HPP

#include <iostream>
#include <string>

class Defender_Doors
{
    private:

        std::string Exterior;
        std::string Interior;
        std::string Power_Windows;
        char Rear_Windshield;
        char Side_Window;
        char Soft_Close;
        std::string Door_Pockets;
        std::string Scuff_Plates;
        std::string ORVM;
        std::string Adjustable;
        std::string Anti_Glare;
        std::string Wipers;
        std::string Bootlid_Opener;
        char Rear_Defogger;

    public:

        Defender_Doors(std::string, std::string 
                    , std::string, char 
                    , char, char 
                    , std::string, std::string
                    , std::string, std::string 
                    , std::string, std::string 
                    , std::string, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_DOORS_HPP