// Header File Inclusion
#include "DefenderCapacity.hpp"

Defender_Capacity::Defender_Capacity
        (std::string _1, std::string _2 )
        {
            Seating = _1;
            Doors = _2;
        }

void Defender_Capacity::show()
{
    using std::cout;
    using std::endl;
 
    cout << "------------------------------ C A P A C I T Y ------------------------------" << endl << endl; 

    cout << "Seating Capacity                           : " << Seating << endl;
    cout << "Doors                                      : " << Doors << endl << endl;
}