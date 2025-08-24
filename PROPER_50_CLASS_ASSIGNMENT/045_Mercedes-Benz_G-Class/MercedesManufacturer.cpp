// Header File Inclusion
#include "MercedesManufacturer.hpp"

Mercedes_Manufacturer::Mercedes_Manufacturer   
        (std::string _1)
        {
            Vehicle_Warranty = _1;
        }

void Mercedes_Manufacturer::show()
{
    using std::cout;
    using std::endl;
    
    cout << "----------------- M A N U F A C T U R E R   W A R R A N T Y -----------------" << endl << endl;

    cout << "Vehicle Warranty                           : " << Vehicle_Warranty << endl << endl;
}