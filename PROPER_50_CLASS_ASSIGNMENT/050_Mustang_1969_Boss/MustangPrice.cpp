// Header File Inclusion
#include "MustangPrice.hpp"

Mustang_Price::Mustang_Price
    (std::string _1, std::string _2 )
    {
        Mach = _1;
        Boss = _2;
    }

void Mustang_Price::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------------- P R I C E ---------------------------------" << endl << endl;

    cout << "1969 Mustang Mach 1                        : " << Mach << endl;
    cout << "1969 Mustang Boss 429                      : " << Boss << endl << endl;
}