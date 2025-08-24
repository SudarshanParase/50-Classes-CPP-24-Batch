#ifndef ATHER_SAFETY_HPP
#define ATHER_SAFETY_HPP

#include <iostream>
#include <string>

class Ather_Safety
{
    private:

        char USB_Charging_Port;
        char Keyless;
        char Cruise_Control;
        std::string Start_Type;
        char Side_Stand;
        char Anti_Theft;
        char Kill_Switch;
        char Hill_Assist;
        char Reverse_Mode;
        char Artificial_Sound;
        char Regenerative_Braking;
        char Parking_Assist;
        char Start_Stop;

    public:

        Ather_Safety(char, char
                    , char, std::string
                    , char, char
                    , char, char
                    , char, char
                    , char, char
                    , char); // Only Declaration  
        
        void show(); // Only Declaration
};

#endif // ATHER_SAFETY_HPP