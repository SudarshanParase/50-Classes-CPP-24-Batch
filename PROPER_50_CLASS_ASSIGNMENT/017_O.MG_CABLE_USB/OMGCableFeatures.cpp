#include "OMGCableFeatures.hpp"

OMG_Cable_Features::OMG_Cable_Features
                        (std::string _1, std::string _2
                        , std::string _3, std::string _4
                        , std::string _5, std::string _6
                        , std::string _7, std::string _8
                        , std::string _9, std::string _10
                        , std::string _11, std::string _12
                        , std::string _13)
                        {
                            Easy_Wifi = _1;
                            Keystroke = _2;
                            Lots_of_Payload = _3;
                            Global_Keymaps = _4;
                            Built_in_IDE = _5;
                            Mobile_Payloads = _6;
                            Stealth = _7;
                            Hardware_keylogger = _8;
                            HIDX_StealthLink = _9;
                            Encrypted_Network = _10;
                            Self_Destruct = _11;
                            Geo_Fencing = _12;
                            WiFi_Triggers = _13;
                        }

void OMG_Cable_Features::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------- O M G   C A B L E   F E A T U R E S --------------------------" << endl << endl;  
    
    cout << "Easy WiFi Control                      : " << Easy_Wifi << endl;
    cout << "Keystroke Injection                    : " << Keystroke << endl;
    cout << "Lots of Payload slots                  : " << Lots_of_Payload << endl;
    cout << "Global Keymaps                         : " << Global_Keymaps << endl;
    cout << "Built in IDE                           : " << Built_in_IDE << endl;
    cout << "Mobile Payloads                        : " << Mobile_Payloads << endl;
    cout << "Stealth                                : " << Stealth << endl;
    cout << "Hardware Keylogger                     : " << Hardware_keylogger << endl;
    cout << "HIDX StealthLink                       : " << HIDX_StealthLink << endl;
    cout << "Encrypted Network C2                   : " << Encrypted_Network << endl;
    cout << "Self-Destruct                          : " << Self_Destruct << endl;
    cout << "Geo-Fencing                            : " << Geo_Fencing << endl;
    cout << "WiFi Triggers                          : " << WiFi_Triggers << endl << endl;
}
    