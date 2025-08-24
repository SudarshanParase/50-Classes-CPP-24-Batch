// Header File Inclusion
#include "MercedesLocks.hpp"

Mercedes_Locks::Mercedes_Locks
        (char _1, std::string _2 
        , char _3, char _4 )
        {
            Engine = _1;
            Central = _2;
            Child_Safety = _3;
            Speed_Sensing = _4;
        }

void Mercedes_Locks::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- L O C K   &   S E C U R I T Y -----------------------" << endl << endl;

    cout << "Engine Immobiliser                         : " << Engine << endl;
    cout << "Central Locking                            : " << Central << endl;
    cout << "Child Safety Lock                          : " << Child_Safety << endl;
    cout << "Speed Sensing Door Lock                    : " << Speed_Sensing << endl << endl;
}