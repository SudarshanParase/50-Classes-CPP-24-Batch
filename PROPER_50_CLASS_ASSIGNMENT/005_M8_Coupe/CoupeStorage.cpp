#include "CoupeStorage.hpp"

Coupe_Storage::Coupe_Storage
        (std::string _1, char _2)
        {
            Cup = _1;
            Driver = _2;
        }

void Coupe_Storage::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------------STORAGE--------------------------------------" << endl << endl;
    
    cout << "Cup Holders Position                       : " << Cup << endl;
    cout << "Driver Armrest Storage                     : " << Driver << endl << endl;
}