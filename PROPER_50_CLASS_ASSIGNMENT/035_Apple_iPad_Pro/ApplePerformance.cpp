// Header File Inclusion
#include "ApplePerformance.hpp"

Apple_Performance::Apple_Performance
    (char _1, char _2 )
    {
        Score = _1;
        Geekbench = _2;
    }

void Apple_Performance::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------- P E R F O R M A N C E -----------------------------" << endl << endl;

    cout << "AuTuTu Score                   : " << Score << endl;
    cout << "Geekbench Score                : " << Geekbench << endl << endl;
}