// Header File Inclusion
#include "SamsungTechnical.hpp"

Samsung_Technical::Samsung_Technical
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6 
        , char _7, char _8)
        {
            OS = _1;
            Custom = _2;
            Chipset = _3;
            CPU = _4;
            Core = _5;
            GPU = _6;
            Java = _7;
            Browser = _8;
        }

void Samsung_Technical::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------ T E C H N I C A L ------------------------------" << endl << endl;

    cout << "OS                             : " << OS << endl;
    cout << "Custom UI                      : " << Custom << endl;
    cout << "Chipset                        : " << Chipset << endl;
    cout << "CPU                            : " << CPU << endl;
    cout << "Core Details                   : " << Core << endl;
    cout << "GPU                            : " << GPU << endl;
    cout << "Java                           : " << Java << endl;
    cout << "Browser                        : " << Browser << endl << endl;
}