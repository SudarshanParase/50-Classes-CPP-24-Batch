#include "BeltColors.hpp"

Belt_Colors::Belt_Colors
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 )
    {
        Leather_1 = _1;
        Leather_2 = _2;
        Buckle = _3;
        Custom = _4;
    }

void Belt_Colors::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------- C O L O R S   &   C U S T O M I Z A T I O N ---------------" << endl << endl; 

    cout << "Leather Color 1                : " << Leather_1 << endl;
    cout << "Leather Color 2                : " << Leather_2 << endl;
    cout << "Buckle Finish                  : " << Buckle << endl;
    cout << "Custom Orders                  : " << Custom << endl << endl;
}