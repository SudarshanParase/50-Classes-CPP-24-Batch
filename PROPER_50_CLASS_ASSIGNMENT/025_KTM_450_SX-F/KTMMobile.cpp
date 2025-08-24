#include "KTMMobile.hpp"

Ktm_Mobile::Ktm_Mobile
    (char _1, char _2)
    {
        Vehicle = _1;
        Geo_Fencing = _2;
    }

void Ktm_Mobile::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------- M O B I L E   A P P   M O N I T O R I N G ----------------" << endl << endl;

    cout << "Vehicle Location Tracking                      : " << Vehicle << endl;
    cout << "Geo Fencing                                    : " << Geo_Fencing << endl << endl;
}