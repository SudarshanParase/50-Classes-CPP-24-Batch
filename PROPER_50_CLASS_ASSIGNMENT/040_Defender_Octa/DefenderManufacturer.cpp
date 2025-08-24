// Header File Inclusion
#include "DefenderManufacturer.hpp"

Defender_Manufacturer::Defender_Manufacturer
        (std::string _1)
        {
            Vehicle_Warranty = _1;
        }

void Defender_Manufacturer::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- M A N U F A C T U R E R   W A R R A N T Y -----------------" << endl << endl;

    cout << "Vehicle Warranty                           : " << Vehicle_Warranty << endl << endl;
}