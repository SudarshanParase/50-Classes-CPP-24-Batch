#include "BeltDimensions.hpp"

Belt_Dimensions::Belt_Dimensions
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5)
        {
            Width = _1;
            Lengths = _2;
            Buckle = _3;
            Reversible = _4;
            Weight = _5;
        }

void Belt_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "------------ D I M E N S I O N S   &   S I Z E   O P T I O N S ------------" << endl << endl;

    cout << "Strap Width                    : " << Width << endl;
    cout << "Strap Lengths                  : " << Lengths << endl;
    cout << "Buckle Width                   : " << Buckle << endl;
    cout << "Reversible?                    : " << Reversible << endl;
    cout << "Weight                         : " << Weight << endl << endl;
}