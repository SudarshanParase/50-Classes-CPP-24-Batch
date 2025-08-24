#include "AtherMonitoring.hpp"

Ather_Mobile_App_M::Ather_Mobile_App_M
    (char _1, char _2
    , char _3, char _4
    , char _5, char _6)
    {
        Battery_Status = _1;
        Live_Charging = _2;
        Nearby_Charging = _3;
        Vehicle_Location = _4;
        Tow_Theft = _5;
        Geo_Fencing = _6;
    }

void Ather_Mobile_App_M::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------- M O B I L E   A P P   M O N I T O R I N G ----------------" << endl << endl;
    
    cout << "Battery Status                             : " << Battery_Status << endl;
    cout << "Live Charging Status                       : " << Live_Charging << endl;
    cout << "Nearby Charging Stations                   : " << Nearby_Charging << endl;
    cout << "Vehicle Location Tracking                  : " << Vehicle_Location << endl;
    cout << "Tow & Theft Notifications                  : " << Tow_Theft << endl;
    cout << "Geo Fencing                                : " << Geo_Fencing << endl << endl;
}