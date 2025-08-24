#ifndef COUPE_DOO_WIN_MIR_WIP_HPP
#define COUPE_DOO_WIN_MIR_WIP_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Doo_Win
{
    private:

        // Data Member
        std::string Exterior_Door;
        std::string Interior_Door;
        std::string Power_Windows;
        std::string One_Touch_Down;
        std::string One_Touch_Up;
        char Side_Window;
        char Soft_Close;
        std::string Door_Pockets;
        std::string Scuff_Plates;
        std::string ORVM;
        std::string Adjustable_ORVM;
        char Turn_Indicators_ORVM;
        std::string Anti_Glare_Mirrors;
        char Rain_Sensing_Wipers;
        std::string Bootlid_Opener;
        char Rear_Defogger;

    public:

        // Constructor
        Coupe_Doo_Win(std::string, std::string, std::string
                    , std::string, std::string, char
                    , char, std::string, std::string
                    , std::string, std::string, char
                    , std::string, char, std::string
                    , char ); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_DOO_WIN_MIR_WIP_HPP 