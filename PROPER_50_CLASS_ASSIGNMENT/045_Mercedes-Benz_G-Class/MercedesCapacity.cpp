// Header File Inclusion
#include "MercedesCapacity.hpp"

Mercedes_Capacity::Mercedes_Capacity
        (std::string _1, std::string _2 
        , short int _3, short int _4 )
        {
            Seating_Capacity = _1;
            Doors = _2;
            Bootspace = _3;
            Fuel = _4;
        }

void Mercedes_Capacity::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------- D I M E N S I O N S   &   W E I G H T -------------------" << endl << endl;

    cout << "Seating Capacity                           : " << Seating_Capacity << endl;
    cout << "Doors                                      : " << Doors << endl;
    cout << "Bootspace                                  : " << Bootspace << "L" << endl;
    cout << "Fuel Tank Capacity                         : " << Fuel << " Litres" << endl << endl;
}