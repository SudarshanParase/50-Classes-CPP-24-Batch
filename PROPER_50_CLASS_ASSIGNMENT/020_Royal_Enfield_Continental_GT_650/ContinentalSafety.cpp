#include "ContinentalSafety.hpp"

Continental_Safety::Continental_Safety
        (char _1, char _2
        , char _3, char _4 
        , char _5, char _6 
        , std::string _7, char _8
        , char _9, char _10
        , char _11, char _12)
        {
            USB = _1;
            Keyless = _2;
            Saree = _3;
            Quickshifter = _4;
            Traction = _5;
            Cruise = _6;
            Start = _7;
            Automatic = _8;
            Silent = _9;
            Side = _10;
            Silencer = _11;
            Kill = _12;
        }

void Continental_Safety::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- S A F E T Y   &   C O N V E N I E N C E -----------------" << endl << endl;

    cout << "USB Charging Port                              : " << USB << endl;
    cout << "Keyless Lock/Unlock                            : " << Keyless << endl;
    cout << "Saree Guard                                    : " << Saree << endl;
    cout << "Quickshifter                                   : " << Quickshifter << endl;
    cout << "Traction Control                               : " << Traction << endl;
    cout << "Cruise Control                                 : " << Cruise << endl;
    cout << "Start Type                                     : " << Start << endl;
    cout << "Automatic Start Stop                           : " << Automatic << endl;
    cout << "Silent Start                                   : " << Silent << endl;
    cout << "Side Stand Engine/Motor Cut-off                : " << Side << endl;
    cout << "Silencer Cover                                 : " << Silencer << endl;
    cout << "Kill Switch                                    : " << Kill << endl << endl;
}