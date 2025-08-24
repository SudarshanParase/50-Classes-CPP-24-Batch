// Header File Inclusion
#include "AppleDisplay.hpp"

Apple_Display::Apple_Display
    (std::string _1, char _2 
    , std::string _3, std::string _4 
    , std::string _5, char _6 
    , std::string _7 )
    {
        Type = _1;
        Touch = _2;
        Size = _3;
        Aspect_Ratio = _4;
        PPI = _5;
        Ratio = _6;
        Features = _7;
    }

void Apple_Display::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------- D I S P L A Y ---------------------------------" << endl << endl;

    cout << "Type                           : " << Type << endl;
    cout << "Touch                          : " << Touch << endl;
    cout << "Size                           : " << Size << endl;
    cout << "Aspect Ratio                   : " << Aspect_Ratio << endl;
    cout << "PPI                            : " << PPI << endl;
    cout << "Screen to Body Ratio           : " << Ratio << endl;
    cout << "Features                       : " << Features << endl << endl;
}