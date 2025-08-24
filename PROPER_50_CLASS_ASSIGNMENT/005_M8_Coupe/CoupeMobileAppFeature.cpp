#include "CoupeMobileAppFeature.hpp" 

Coupe_Mobile_App::Coupe_Mobile_App
        (char _1, char _2, char _3
        , char _4, char _5, char _6
        , char _7, char _8)
        {
            Emergency_Call = _1;
            Find_My_Car = _2;
            Check_V_Status = _3;
            Remote_Car_Lock = _4;
            Remote_AC = _5;
            Car_Light = _6;
            OTA = _7;
            Geo_fence = _8;
        }

void Coupe_Mobile_App::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------MOBILE APP FEATURES--------------------------------" << endl << endl;
    
    cout << "Emergency Call Button                      : " << Emergency_Call << endl;
    cout << "Find My Car                                : " << Find_My_Car << endl;
    cout << "Check Vehicle Status via App               : " << Check_V_Status << endl;
    cout << "Remote Car Lock / Unlock Via App           : " << Remote_Car_Lock << endl;
    cout << "Remote AC: On / Off via App                : " << Remote_AC << endl;
    cout << "Car Light Flashing & Honking via App       : " << Car_Light << endl;
    cout << "Over The Air (OTA) Updates                 : " << OTA << endl;
    cout << "Geo-fence                                  : " << Geo_fence << endl;
}