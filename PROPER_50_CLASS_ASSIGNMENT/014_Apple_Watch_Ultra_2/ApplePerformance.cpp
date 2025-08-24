#include "ApplePerformance.hpp"

Apple_Performance::Apple_Performance
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5)
    {
        Processor = _1;
        Neural_Engine = _2;
        Storage = _3;
        RAM = _4;
        OS = _5;
    }

void Apple_Performance::show()
{
    using std::cout;
    using std::endl;

    
    cout << "------------- P E R F O R M A N C E ( C H I P   &   M E M O R Y ) -------------" << endl << endl;
    
    cout << "Processor                      : " << Processor << endl;
    cout << "Neural Engine                  : " << Neural_Engine << endl;
    cout << "Storage                        : " << Storage << endl;
    cout << "RAM                            : " << RAM << endl;
    cout << "OS                             : " << OS << endl << endl;
}