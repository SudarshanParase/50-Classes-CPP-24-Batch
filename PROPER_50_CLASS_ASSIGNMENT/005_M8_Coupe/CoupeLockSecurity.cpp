#include "CoupeLockSecurity.hpp"

Coupe_LockSecurity::Coupe_LockSecurity
            (char _1, std::string _2
            , char _3, char _4)
            {
                Engine_Immobiliser = _1;
                Central_Locking = _2;
                Child_Safety = _3;
                Speed_Sensing = _4;
            }

void Coupe_LockSecurity::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------------LOCK & SECURITY----------------------------------" << endl << endl;
    
    cout << "Engine Immobiliser                         : " << Engine_Immobiliser << endl;
    cout << "Central Locking                            : " << Central_Locking << endl;
    cout << "Child Safety Lock                          : " << Child_Safety << endl;
    cout << "Speed Sensing Door Lock                    : " << Speed_Sensing << endl << endl;
}