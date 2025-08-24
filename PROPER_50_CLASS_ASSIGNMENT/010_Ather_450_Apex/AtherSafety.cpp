#include "AtherSafety.hpp"

Ather_Safety::Ather_Safety
        (char _1, char _2
        , char _3, std::string _4
        , char _5, char _6
        , char _7, char _8
        , char _9, char _10
        , char _11, char _12
        , char _13)
        {
            USB_Charging_Port = _1;
            Keyless = _2;
            Cruise_Control = _3;
            Start_Type = _4;
            Side_Stand = _5;
            Anti_Theft = _6;
            Kill_Switch = _7;
            Hill_Assist = _8;
            Reverse_Mode = _9;
            Artificial_Sound = _10;
            Regenerative_Braking = _11;
            Parking_Assist = _12;
            Start_Stop = _13;
        }

void Ather_Safety::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- S A F E T Y   &   C O N V E N I E N C E -----------------" << endl << endl;
    
    cout << "USB Charging Port                          : " << USB_Charging_Port << endl;
    cout << "Keyless Lock/Unlock                        : " << Keyless << endl;
    cout << "Cruise Control                             : " << Cruise_Control << endl;
    cout << "Start Type                                 : " << Start_Type << endl;
    cout << "Side Stand Engine/Motor Cut-off            : " << Side_Stand << endl;
    cout << "Anti Theft System                          : " << Anti_Theft << endl;
    cout << "Kill Switch                                : " << Kill_Switch << endl;
    cout << "Hill Assist                                : " << Hill_Assist << endl;
    cout << "Reverse Mode                               : " << Reverse_Mode << endl;
    cout << "Artificial Sound                           : " << Artificial_Sound << endl;
    cout << "Regenerative Braking                       : " << Regenerative_Braking << endl;
    cout << "Parking Assist                             : " << Parking_Assist << endl;
    cout << "Start/Stop Button                          : " << Start_Stop << endl << endl;
}