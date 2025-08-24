#include "AmazonDisplay.hpp"

Amazon_Display::Amazon_Display
        (std::string _1, std::string _2
        , char _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7, std::string _8)
        {
            Screen_Size = _1;
            Resolution = _2;
            Touchscreen = _3;
            Rotation = _4;
            Material = _5;
            Colors_Available = _6;
            Dimensions = _7;
            Weight = _8;
        }

void Amazon_Display::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- D I S P L A Y   &   D E S I G N -----------------------" << endl << endl;
    
    cout << "Screen Size                    : " << Screen_Size << endl;
    cout << "Resolution                     : " << Resolution << endl;
    cout << "Touchscreen                    : " << Touchscreen << endl;
    cout << "Rotation                       : " << Rotation << endl;
    cout << "Material                       : " << Material << endl;
    cout << "Colors Available               : " << Colors_Available << endl;
    cout << "Dimensions (mm)                : " << Dimensions << endl;
    cout << "Weight                         : " << Weight << endl << endl;
}