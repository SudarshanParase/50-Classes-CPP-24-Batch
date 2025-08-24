#include "CoupeManufacturer.hpp"

Coupe_Manufacturer::Coupe_Manufacturer
        (char _1, std::string _2)
{
    Vehicle_Warranty_1 = _1;
    Vehicle_Warranty_2 = _2;
}

void Coupe_Manufacturer::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------MANUFACTURER WARRANTY-------------------------------" << endl << endl;
    
    cout << "Vehicle Warranty (In Years)                : " << Vehicle_Warranty_1 << endl;
    cout << "Vehicle warranty (In Kilometres)           : " << Vehicle_Warranty_2 << endl << endl;
}