#include "CoupeEntertainment.hpp"

Coupe_Entertainment::Coupe_Entertainment
            (std::string _1, short int _2, char _3
            , char _4, std::string _5, std::string _6
            , char _7, char _8, char _9
            , std::string _10, char _11, char _12
            , char _13, char _14, char _15
            , char _16)
            {
                Infotainment_Screen_Size = _1;
                Speakers = _2;
                Integrated_Music_System = _3;
                Steering_Mounted_Controls = _4;
                Android_Auto = _5;
                Apple_CarPlay = _6;
                Voice_Command = _7;
                Gesture_Control = _8;
                Wireless_Charger = _9;
                Bluetooth_Compatibility = _10;
                GPS = _11;
                Radio = _12;
                AUX = _13;
                USB = _14;
                iPod = _15;
                Internal_Hard_Drive = _16;

            }

void Coupe_Entertainment::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------ENTERTAINMENT, INFORMATION & COMMUNICATION-------------------" << endl << endl;
    
    cout << "Infotainment Screen Size                   : " << Infotainment_Screen_Size << endl;
    cout << "Speakers                                   : " << Speakers << endl;
    cout << "Integrated (in-dash) Music System          : " << Integrated_Music_System << endl;
    cout << "Steering-mounted controls                  : " << Steering_Mounted_Controls << endl;
    cout << "Android Auto                               : " << Android_Auto << endl;
    cout << "Apple CarPlay                              : " << Apple_CarPlay << endl;
    cout << "Voice Command                              : " << Voice_Command << endl;
    cout << "Gesture Control                            : " << Gesture_Control << endl;
    cout << "Wireless Charger                           : " << Wireless_Charger << endl;
    cout << "Bluetooth Compatibility                    : " << Bluetooth_Compatibility << endl;
    cout << "GPS Navigation System                      : " << GPS << endl;
    cout << "AM/FM Radio                                : " << Radio << endl;
    cout << "AUX Compatibility                          : " << AUX << endl;
    cout << "USB Compatibility                          : " << USB << endl;
    cout << "iPod Compatibility                         : " << iPod << endl;
    cout << "Internal Hard Drive                        : " << Internal_Hard_Drive << endl << endl;
}