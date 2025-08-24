#include "BottleUsability.hpp"

Bottle_Usability::Bottle_Usability
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 )
    {
        Mouth = _1;
        Warranty = _2;
        Cleaning = _3;
        Leakproof = _4;
    }

void Bottle_Usability::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- U S A B I L I T Y   &   F E A T U R E S -----------------" << endl << endl;

    cout << "Mouth                          : " << Mouth << endl;
    cout << "Warranty                       : " << Warranty << endl;
    cout << "Cleaning                       : " << Cleaning << endl;
    cout << "Leakproof performance          : " << Leakproof << endl << endl;
}