#include "ContinentalMobile.hpp"

Continental_Mobile::Continental_Mobile
        (char _1, char _2 )
        {
            Vehicle = _1;
            Geo = _2;
        }

void Continental_Mobile::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------- M O B I L E   A P P   M O N I T O R I N G ----------------" << endl << endl;

    cout << "Vehicle Location Tracking                      : " << Vehicle << endl;
    cout << "Geo Fencing                                    : " << Geo << endl << endl;
}