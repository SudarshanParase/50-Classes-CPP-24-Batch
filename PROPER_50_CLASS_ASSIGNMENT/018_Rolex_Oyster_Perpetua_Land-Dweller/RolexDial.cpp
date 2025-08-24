#include "RolexDial.hpp"

Rolex_Dial::Rolex_Dial
    (std::string _1, std::string _2
    , std::string _3, std::string _4)
    {
        Dial = _1;
        Hands = _2;
        Date = _3;
        Bezel = _4;
    }

void Rolex_Dial::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- D I A L   &   F U N C T I O N S -----------------------" << endl << endl;
    
    cout << "Dial Options                   : " << Dial << endl;
    cout << "Hands & Indexes                : " << Hands << endl;
    cout << "Date Function                  : " << Date << endl;
    cout << "Bezel                          : " << Bezel << endl << endl;
}