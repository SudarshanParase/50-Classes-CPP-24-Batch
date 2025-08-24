#include "HandbagHardware.hpp"

Handbag_Hardware::Handbag_Hardware
        (std::string _1, std::string _2 
        , std::string _3, std::string _4)
        {
            Hardware = _1;
            Lock = _2;
            Feet = _3;
            Buckle = _4;
        }

void Handbag_Hardware::show()
{
    using std::cout;
    using std::endl;

    cout << "------------ H A R D W A R E   &   M E T A L   O P T I O N S --------------" << endl << endl;

    cout << "Hardware Type                  : " << Hardware << endl;
    cout << "Lock & Key                     : " << Lock << endl;
    cout << "Feet                           : " << Feet << endl;
    cout << "Buckle Straps                  : " << Buckle << endl << endl;
}