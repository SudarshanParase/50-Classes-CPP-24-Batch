// Header File Inclusion
#include "SamsungDisplay.hpp"

Samsung_Display::Samsung_Display
        (std::string _1, char _2
        , std::string _3, std::string _4 
        , std::string _5, std::string _6 
        , std::string _7, std::string _8 
        , std::string _9, char _10 
        , std::string _11)
        {
            Type = _1;
            Touch = _2;
            Size = _3;
            Aspect_Ratio = _4;
            PPI = _5;
            Screen = _6;
            Brightness = _7;
            Features = _8;
            Notch = _9;
            Foldable_Display = _10;
            Dual_Display = _11;
        }

void Samsung_Display::show()
{
    using std::cout;
    using std::endl;
 
    cout << "-------------------------------- D I S P L A Y --------------------------------" << endl << endl;

    cout << "Type                           : " << Type << endl;
    cout << "Touch                          : " << Touch << endl;
    cout << "Size                           : " << Size << endl;
    cout << "Aspect Ratio                   : " << Aspect_Ratio << endl;
    cout << "PPI                            : " << PPI << endl;
    cout << "Screen to Body Ratio           : " << Screen << endl;
    cout << "Brightness                     : " << Brightness << endl;
    cout << "Features                       : " << Features << endl;
    cout << "Notch                          : " << Notch << endl;
    cout << "Foldable Display               : " << Foldable_Display << endl;
    cout << "Dual Display                   : " << Dual_Display << endl << endl;
}   