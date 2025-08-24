// Header File Inclusion
#include "SamsungDesign.hpp"

Samsung_Design::Samsung_Design
    (std::string _1, short int _2 
    , std::string _3)
    {
        Dimensions = _1;
        Weight = _2;
        Colors = _3;
    }

void Samsung_Design::show()
{
    using std::cout;
    using std::endl;
 
    cout << "--------------------------------- D E S I G N ---------------------------------" << endl << endl;

    cout << "Dimensions                     : " << Dimensions << endl;
    cout << "Weight                         : " << Weight << " g" << endl;
    cout << "Colors                         : " << Colors << endl << endl;
}
