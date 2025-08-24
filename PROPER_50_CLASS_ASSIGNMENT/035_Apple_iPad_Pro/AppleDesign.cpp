// Header File Inclusion
#include "AppleDesign.hpp"

Apple_Design::Apple_Design
        (std::string _1, short int _2
        , char _3 )
        {
            Dimensions = _1;
            Weight = _2;
            Colors = _3;
        }

void Apple_Design::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------- D E S I G N ----------------------------------" << endl << endl;

    cout << "Dimensions                     : " << Dimensions << endl;
    cout << "Weight                         : " << Weight << endl;
    cout << "Colors                         : " << Colors << endl << endl;
}