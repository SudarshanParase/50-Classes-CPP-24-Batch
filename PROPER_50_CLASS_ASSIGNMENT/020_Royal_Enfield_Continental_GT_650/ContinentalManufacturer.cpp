#include "ContinentalManufacturer.hpp"

Continental_Manufacturer::Continental_Manufacturer
        (std::string _1, std::string _2 )
        {
            Standard_Warranty = _1;
            Standard_Warranty_2 = _2;
        }

void Continental_Manufacturer::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------- M A N U F A C T U R E R   W A R R A N T Y ----------------" << endl << endl;

    cout << "Standard Warranty                              : " << Standard_Warranty << endl;
    cout << "Standard Warranty                              : " << Standard_Warranty_2 << endl << endl;
}