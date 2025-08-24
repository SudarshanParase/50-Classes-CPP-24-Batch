#include "OMGCableSpecElite.hpp"

OMG_ELITE_Spec::OMG_ELITE_Spec
    (char _1, char _2
    , std::string _3, short int _4
    , char _5, char _6
    , char _7, char _8
    , char _9, char _10 
    , char _11, char _12)
    {
        Keystroke = _1;
        Mouse_Injection = _2;
        Payload_Slots = _3;
        Payload_Speed = _4;
        Self_Destruct = _5;
        Geo_Fencing = _6;
        Wifi_Triggers = _7;
        USB = _8;
        HIDX = _9;
        Encrypted = _10;
        Extended = _11;
        Stealth_Optimized = _12;
    }

void OMG_ELITE_Spec::show()
{
    using std::cout;
    using std::endl;

    
    cout << "-------------- O M G   C A B L E   B A S I C   S P E C I F I C A T I O N S --------------" << endl << endl;
    
    cout << "Keystroke Injection (DuckyScript(TM))  : " << Keystroke << endl;
    cout << "Mouse Injection                        : " << Mouse_Injection << endl;
    cout << "Payload Slots                          : " << Payload_Slots << endl;
    cout << "Payload Speed                          : " << Payload_Speed << " Keys/sec" << endl;
    cout << "Self-Destruct                          : " << Self_Destruct << endl;
    cout << "Geo-Fencing                            : " << Geo_Fencing << endl;
    cout << "WiFi Triggers                          : " << Wifi_Triggers << endl;
    cout << "FullSpeed USB Hardware Keylogger       : " << USB << endl;
    cout << "HIDX StealthLink                       : " << HIDX << endl;
    cout << "Encrypted Network C2                   : " << Encrypted << endl;
    cout << "Extended WiFi Range                    : " << Extended << endl;
    cout << "Stealth-Optimized Power Draw           : " << Stealth_Optimized << endl << endl;
}