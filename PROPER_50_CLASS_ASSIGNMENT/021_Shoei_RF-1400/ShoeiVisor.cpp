// Header File Inclusion
#include "ShoeiVisor.hpp"

Shoei_Visor::Shoei_Visor
    (std::string _1, std::string _2
    , std::string _3)
    {
        Shield = _1;
        Anti = _2;
        Field = _3;
    }

void Shoei_Visor::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------- V I S O R   &   O P T I C S -------------------------" << endl << endl;

    cout << "Shield Type                    : " << Shield << endl;
    cout << "Anti-Fog                       : " << Anti << endl;
    cout << "Field of View                  : " << Field << endl << endl;
}