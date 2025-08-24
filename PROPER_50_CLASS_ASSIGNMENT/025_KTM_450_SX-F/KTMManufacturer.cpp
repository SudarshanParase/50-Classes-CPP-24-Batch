// Header File Inclusion
#include "KTMManufacturer.hpp"

Ktm_Manufacturer::Ktm_Manufacturer
        (std::string _1, std::string _2)
        {
            Standard_Warranty = _1;
            Standard_Warranty_1 = _2;
        }

void Ktm_Manufacturer::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------- M A N U F A C T U R E R   W A R R A N T Y ----------------" << endl << endl;

    cout << "Standard Warranty                              : " << Standard_Warranty << endl;
    cout << "Standard Warranty                              : " << Standard_Warranty_1 << endl << endl;
}