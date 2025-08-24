#include "AtherManufacturer.hpp"

Ather_Manufacturer::Ather_Manufacturer
        (std::string _1, std::string _2)
        {
            Battery_Warranty = _1;
            Motor_Warranty = _2;
        }

void Ather_Manufacturer::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------- M A N U F A C T U R E R   W A R R A N T Y ----------------" << endl << endl;
    
    cout << "Battery Warranty                           : " << Battery_Warranty << endl;
    cout << "Motor Warranty                             : " << Motor_Warranty << endl << endl;
}