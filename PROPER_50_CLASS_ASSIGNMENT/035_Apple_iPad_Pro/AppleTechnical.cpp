// Header File Inclusion
#include "AppleTechnical.hpp"

Apple_Technical::Apple_Technical
        (std::string _1, std::string _2 
        , std::string _3, char _4 
        , char _5, char _6 
        , char _7 )
        {
            OS = _1; 
            Chipset = _2;
            CPU = _3;
            Core = _4;
            GPU = _5;
            Java = _6; 
            Browser = _7;
        }

void Apple_Technical::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------------- T E C H N I C A L -------------------------------" << endl << endl;

    cout << "OS                             : " << OS << endl;
    cout << "Chipset                        : " << Chipset << endl;
    cout << "CPU                            : " << CPU << endl;
    cout << "Core Details                   : " << Core << endl;
    cout << "GPU                            : " << GPU << endl;
    cout << "Java                           : " << Java << endl;
    cout << "Browser                        : " << Browser << endl << endl;
}