#include "KTMSafety.hpp"

Ktm_Safety::Ktm_Safety
    (char _1, char _2 
    , char _3, char _4 
    , char _5, char _6 
    , std::string _7, char _8
    , char _9, char _10 
    , char _11, char _12 )
    {
        USB = _1;
        Keyless = _2;
        Saree = _3;
        Quickshifter = _4;
        Traction_Control = _5;
        Cruise_Control = _6;
        Start_Type = _7;
        Automatic = _8;
        Silent_Start = _9;
        Side = _10;
        Silencer = _11;
        Kill = _12;
    }

void Ktm_Safety::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- S A F E T Y   &   C O N V E N I E N C E -----------------" << endl << endl;

    cout << "USB Charging Port                              : " << USB << endl;
    cout << "Keyless Lock/Unlock                            : " << Keyless << endl;
    cout << "Saree Guard                                    : " << Saree << endl;
    cout << "Quickshifter                                   : " << Quickshifter << endl;
    cout << "Traction Control                               : " << Traction_Control << endl;
    cout << "Cruise Control                                 : " << Cruise_Control << endl;
    cout << "Start Type                                     : " << Start_Type << endl;
    cout << "Automatic Start Stop                           : " << Automatic << endl;
    cout << "Silent Start                                   : " << Silent_Start << endl;
    cout << "Side Stand Engine/Motor Cut-off                : " << Side << endl;
    cout << "Silencer Cover                                 : " << Silencer << endl;
    cout << "Kill Switch                                    : " << Kill << endl;
}