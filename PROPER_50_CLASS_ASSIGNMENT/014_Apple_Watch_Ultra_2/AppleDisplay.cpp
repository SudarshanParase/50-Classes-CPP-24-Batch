#include "AppleDisplay.hpp"

Apple_Display::Apple_Display
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7, std::string _8)
        {
            Display_Type = _1;
            Size = _2;
            Resolution = _3;
            Brightness = _4;
            Glass_Protection = _5;
            Water = _6;
            Design = _7;
            Weight = _8;
        }

void Apple_Display::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- D I S P L A Y   &   D E S I G N -----------------------" << endl << endl;
    
    cout << "Display Type                   : " << Display_Type << endl;
    cout << "Size                           : " << Size << endl;
    cout << "Resolution                     : " << Resolution << endl;
    cout << "Brightness                     : " << Brightness << endl;
    cout << "Glass Protection               : " << Glass_Protection << endl;
    cout << "Water/Dust Resistance          : " << Water << endl;
    cout << "Design                         : " << Design << endl;
    cout << "Weight                         : " << Weight << endl << endl;
}