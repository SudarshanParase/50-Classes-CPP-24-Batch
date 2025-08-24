#include "NikeMaterials.hpp"

Nike_Materials::Nike_Materials
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6)
        {
            Upper = _1;
            Midsole = _2;
            Outsole = _3;
            Lining = _4;
            Heel = _5;
            Toe = _6;
        }

void Nike_Materials::show()
{
    using std::cout;
    using std::endl;

    cout << "------------ M A T E R I A L S   &   C O N S T R U C T I O N --------------" << endl << endl;

    cout << "Upper                          : " << Upper << endl;
    cout << "Midsole                        : " << Midsole << endl;
    cout << "Outsole                        : " << Outsole << endl;
    cout << "Lining                         : " << Lining << endl;
    cout << "Heel Support                   : " << Heel << endl;
    cout << "Toe Cap                        : " << Toe << endl << endl;
}