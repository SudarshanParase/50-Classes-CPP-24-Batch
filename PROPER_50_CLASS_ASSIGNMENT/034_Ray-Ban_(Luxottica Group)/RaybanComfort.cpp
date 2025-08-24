#include "RaybanComfort.hpp"

Rayban_Comfort::Rayban_Comfort
        (std::string _1, std::string _2
        , std::string _3, std::string _4 
        , std::string _5 )
        {
            Fit = _1;
            Temple = _2;
            Bridge = _3;
            Flex = _4;
            Weight = _5;
        }

void Rayban_Comfort::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------ F I T   &   C O M F O R T ------------------------" << endl << endl;

    cout << "Fit Type                       : " << Fit << endl;
    cout << "Temple Length                  : " << Temple << endl;
    cout << "Bridge Width                   : " << Bridge << endl;
    cout << "Flex Hinges                    : " << Flex << endl;
    cout << "Weight Balance                 : " << Weight << endl << endl;
}