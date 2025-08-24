// Header File Inclusion
#include "AppleExtra.hpp"

Apple_Extra::Apple_Extra
    (char _1, std::string _2
    ,char _3, std::string _4 
    , char _5, char _6 
    , char _7, char _8 
    , char _9)
    {
        GPS = _1;
        Fingerprint_Sensor = _2;
        Face_Unlock = _3;
        Sensors = _4;
        Headphone_Jack = _5;
        Water = _6;
        Rating = _7;
        Dust = _8;
        Extra = _9;
    }

void Apple_Extra::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------------- E X T R A -----------------------------------" << endl << endl;

    cout << "GPS                            : " << GPS << endl;
    cout << "Fingerprint Sensor             : " << Fingerprint_Sensor << endl;
    cout << "Face Unlock                    : " << Face_Unlock << endl;
    cout << "Sensors                        : " << Sensors << endl;
    cout << "3.5mm Headphone Jack           : " << Headphone_Jack << endl;
    cout << "Water Resistance               : " << Water << endl;
    cout << "IP Rating                      : " << Rating << endl;
    cout << "Dust Resistant                 : " << Dust << endl;
    cout << "Extra Features                 : " << Extra  << endl << endl;
}