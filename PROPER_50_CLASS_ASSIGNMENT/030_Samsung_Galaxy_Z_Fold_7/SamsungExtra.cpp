// Header File Inclusion
#include "SamsungExtra.hpp"

Samsung_Extra::Samsung_Extra
        (std::string _1, std::string _2 
        , char _3, std::string _4 
        , char _5, char _6 
        , std::string _7, std::string _8 
        , char _9, std::string _10
        , char _11, std::string _12 )
        {
            GPS = _1;
            Fingerprint = _2;
            Face_Unlock = _3;
            Sensors = _4;
            Headphone_Jack = _5;
            NFC = _6;
            AI_Features = _7;
            Water_Resistance = _8;
            Splash_Resistant = _9;
            IP_Rating = _10;
            Dust_Resistant = _11;
            Extra_Features = _12;
        }

void Samsung_Extra::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------------- E X T R A ----------------------------------" << endl << endl;

    cout << "GPS                            : " << GPS << endl;
    cout << "Fingerprint Sensor             : " << Fingerprint << endl;
    cout << "Face Unlock                    : " << Face_Unlock << endl;
    cout << "Sensors                        : " << Sensors << endl;
    cout << "3.5m Headphone Jack            : " << Headphone_Jack << endl;
    cout << "NFC                            : " << NFC << endl;
    cout << "AI Features                    : " << AI_Features << endl;
    cout << "Water Resistance               : " << Water_Resistance << endl;
    cout << "Splash Resistant               : " << Splash_Resistant << endl;
    cout << "IP Rating                      : " << IP_Rating << endl;
    cout << "Dust Resistant                 : " << Dust_Resistant << endl;
    cout << "Extra Features                 : " << Extra_Features << endl << endl;
}