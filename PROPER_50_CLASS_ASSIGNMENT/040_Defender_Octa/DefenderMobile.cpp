// Header File Inclusion
#include "DefenderMobile.hpp" 

Defender_Mobile::Defender_Mobile
        (char _1, char _2 
        , char _3, char _4 
        , char _5, char _6 
        , char _7, char _8
        , char _9, char _10 
        , char _11)
        {
            Emergency = _1;
            Find_My_Car = _2;
            Check_Vehicle = _3;
            Remote_Car = _4;
            Remote_Parking = _5;
            Remote_AC = _6;
            Remote_Sunroof = _7;
            Car_Light = _8;
            Over_The_Air = _9;
            Geo_Fence = _10;
            Alexa_Compatibility = _11;
        }

void Defender_Mobile::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------- M O B I L E   A P P   F E A T U R E S -------------------" << endl << endl;

    cout << "Emergency Call Button                      : " << Emergency << endl;
    cout << "Find My Car                                : " << Find_My_Car << endl;
    cout << "Check Vehicle Status via App               : " << Check_Vehicle << endl;
    cout << "Remote Car Lock/Unlock via App             : " << Remote_Car << endl;
    cout << "Remote Parking with Key                    : " << Remote_Parking << endl;
    cout << "Remote AC:On/Off via App                   : " << Remote_AC << endl;
    cout << "Remote Sunroof:Open/Close via App          : " << Remote_Sunroof << endl;
    cout << "Car Light Flashing & Honking via App       : " << Car_Light << endl;
    cout << "Over The Air (OTA) Updates                 : " << Over_The_Air << endl;
    cout << "Geo-fence                                  : " << Geo_Fence << endl;
    cout << "Alexa Compatibility                        : " << Alexa_Compatibility << endl << endl;
}