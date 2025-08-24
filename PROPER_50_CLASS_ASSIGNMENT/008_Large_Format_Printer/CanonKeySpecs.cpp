#include "CanonKeySpecs.hpp"

Canon_Key_Specs::Canon_Key_Specs
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7, std::string _8
        , std::string _9, std::string _10)
        {
            Functions = _1;
            Printing_Tech = _2;
            Color_Type = _3;
            Configuration = _4;
            Ink_Type = _5;
            Ink_Color = _6;
            Print_Resolution = _7;
            Media_Sizes = _8;
            Wireless = _9;
            Power_Source = _10;

        }

void Canon_Key_Specs::show()
{
    using std::cout;
    using std::endl;
    
    cout << "--------------------------------- K E Y   S P E C S ------------------------------" << endl << endl;
    
    cout << "Functions                          : " << Functions << endl;
    cout << "Printing Technology                : " << Printing_Tech <<  endl;
    cout << "Color Type                         : " << Color_Type << endl;
    cout << "Configuration                      : " << Configuration << endl;
    cout << "Ink Type                           : " << Ink_Type << endl;
    cout << "Ink Color                          : " << Ink_Color << endl;
    cout << "Print Resolution                   : " << Print_Resolution << endl;
    cout << "Media Sizes                        : " << Media_Sizes << endl;
    cout << "Wireless                           : " << Wireless << endl;
    cout << "Power Source                       : " << Power_Source << endl << endl;
    
}   
