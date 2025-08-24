#ifndef OMG_CABLE_SPEC_ELITE_HPP
#define OMG_CABLE_SPEC_ELITE_HPP

#include <iostream>
#include <string>

class OMG_ELITE_Spec
{
    private:

        char Keystroke;
        char Mouse_Injection;
        std::string Payload_Slots;
        short int Payload_Speed;
        char Self_Destruct;
        char Geo_Fencing;
        char Wifi_Triggers;
        char USB;
        char HIDX;
        char Encrypted;
        char Extended;
        char Stealth_Optimized;

    public:

        OMG_ELITE_Spec(char, char
                    , std::string, short int
                    , char, char
                    , char, char
                    , char, char
                    , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // OMG_CABLE_SPEC_ELITE_HPP