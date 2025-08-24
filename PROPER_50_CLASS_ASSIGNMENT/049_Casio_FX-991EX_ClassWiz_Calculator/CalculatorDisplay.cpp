#include "CalculatorDisplay.hpp"

Calculator_Display::Calculator_Display
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 )
        {
            Display = _1;
            Lines = _2;
            Visual = _3;
            Code = _4;
        }

void Calculator_Display::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Display Type                   : " << Display << endl;
    cout << "Lines                          : " << Lines << endl;
    cout << "Visual Features                : " << Visual << endl;
    cout << "QR Code Graphing               : " << Code << endl << endl;
}