// Header File Inclusion
#include "MercedesEntertainment.hpp"

Mercedes_Entertainment::Mercedes_Entertainment
        (std::string _1, std::string _2 
        , char _3, char _4 
        , char _5, char _6 
        , char _7, char _8
        , char _9, char _10 
        , char _11, char _12 
        , char _13, char _14 
        , std::string _15, char _16)
        {
            Infotainment_Screen = _1;
            Audio_System = _2;
            Android_Auto = _3;
            Apple_CarPlay = _4;
            AM = _5;
            Steering = _6;
            Integrated = _7;
            iPod = _8;
            USB = _9;
            SD_Card = _10;
            Internal_Hard = _11;
            Wifi = _12;
            Voice = _13;
            Gesture = _14;
            Input_Methods = _15;
            GPS = _16;
            
        }

void Mercedes_Entertainment::show()
{
    using std::cout;
    using std::endl;

    cout << "--- E N T E R T A I N M E N T ,   I N F O   &   C O M M U N I C A T I O N ---" << endl << endl;

    cout << "Infotainment Screen                        : " << Infotainment_Screen << endl;
    cout << "Audio System                               : " << Audio_System << endl;
    cout << "Android Auto                               : " << Android_Auto << endl;
    cout << "Apple CarPlay                              : " << Apple_CarPlay << endl;
    cout << "AM/FM Radio                                : " << AM << endl;
    cout << "Steering-mounted controls                  : " << Steering << endl;
    cout << "Integrated (in-dash) Music System          : " << Integrated << endl;
    cout << "iPod Compatibility                         : " << iPod << endl;
    cout << "USB Compatibility                          : " << USB << endl;
    cout << "SD Card Compatibility                      : " << SD_Card << endl;
    cout << "Internal Hard Drive                        : " << Internal_Hard << endl;
    cout << "Wifi Hotspot                               : " << Wifi << endl;
    cout << "Voice Command                              : " << Voice << endl;
    cout << "Gesture Control                            : " << Gesture << endl;
    cout << "Input Methods                              : " << Input_Methods << endl;
    cout << "GPS Navigation System                      : " << GPS << endl << endl;
}