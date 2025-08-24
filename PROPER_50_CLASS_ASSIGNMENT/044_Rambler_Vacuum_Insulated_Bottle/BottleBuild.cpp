#include "BottleBuild.hpp"

Bottle_Build::Bottle_Build
        (std::string _1, std::string _2 
        , std::string _3)
        {
            Material = _1;
            Durability = _2;
            Cap = _3;
        }

void Bottle_Build::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- B U I L D   &   M A T E R I A L S --------------------" << endl << endl;

    cout << "Material                       : " << Material << endl;
    cout << "Durability                     : " << Durability << endl;
    cout << "Cap                            : " << Cap << endl << endl;
}