#ifndef OMG_CABLE_FEATURES_HPP
#define OMG_CABLE_FEATURES_HPP

#include <iostream>
#include <string>

class OMG_Cable_Features
{
    private:

        std::string Easy_Wifi;
        std::string Keystroke;
        std::string Lots_of_Payload;
        std::string Global_Keymaps;
        std::string Built_in_IDE;
        std::string Mobile_Payloads;
        std::string Stealth;
        std::string Hardware_keylogger;
        std::string HIDX_StealthLink;
        std::string Encrypted_Network;
        std::string Self_Destruct;
        std::string Geo_Fencing;
        std::string WiFi_Triggers;

    public:

        OMG_Cable_Features(std::string, std::string
                        , std::string, std::string
                        , std::string, std::string
                        , std::string, std::string
                        , std::string, std::string
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // OMG_CABLE_FEATURES_HPP