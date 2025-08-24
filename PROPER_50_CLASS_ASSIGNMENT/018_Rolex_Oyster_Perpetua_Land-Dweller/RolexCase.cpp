#include "RolexCase.hpp"

Rolex_Case::Rolex_Case
    (std::string _1, std::string _2
    , std::string _3, std::string _4)
    {
        Case = _1;
        Water = _2;
        Bracelet = _3;
        Clasp = _4;
    }

void Rolex_Case::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------ C A S E   &   B R A C E L E T ------------------------" << endl << endl;

    cout << "Case Materials                 : " << Case << endl;
    cout << "Water Resistance               : " << Water << endl;
    cout << "Bracelet                       : " << Bracelet << endl;
    cout << "Clasp                          : " << Clasp << endl;
}