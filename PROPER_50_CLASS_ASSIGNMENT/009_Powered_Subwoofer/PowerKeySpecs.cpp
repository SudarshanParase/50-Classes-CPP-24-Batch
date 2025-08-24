// Header File Inclusion
#include "PowerKeySpecs.hpp"

Power_Key::Power_Key
    (std::string _1, std::string _2
    , short int _3, char _4 
    , std::string _5, char _6 
    , std::string _7, std::string _8
    , std::string _9)
    {
        Configuration = _1;
        Enclosure_Type = _2;
        Total = _3;
        MF = _4;
        LF = _5;
        Wireless = _6;
        Color = _7;
        Amplifier = _8;
        Amplifier_Class = _9;
    }

void Power_Key::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------------- K E Y   S P E C S ------------------------------" << endl << endl;

    cout << "Configuration                      : " << Configuration << endl;
    cout << "Enclosure Type                     : " << Enclosure_Type << endl;
    cout << "Total Power Capacity               : " << Total << " W" << endl;
    cout << "MF Driver                          : " << MF << endl;
    cout << "LF Driver                          : " << LF << endl;
    cout << "Wireless Connectivity              : " << Wireless << endl;
    cout << "Color                              : " << Color << endl;
    cout << "Amplifier Power Rating             : " << Amplifier << endl;
    cout << "Amplifier Class                    : " << Amplifier_Class << endl << endl;
}