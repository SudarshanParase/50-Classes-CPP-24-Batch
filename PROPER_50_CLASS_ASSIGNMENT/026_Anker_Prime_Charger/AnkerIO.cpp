#include "AnkerIO.hpp"

Anker_IO::Anker_IO
    (std::string _1, std::string _2
    , std::string _3, std::string _4 
    , std::string _5, std::string _6)
    {
        Power = _1;
        Total = _2;
        USB_1 = _3;
        USB_2 = _4;
        Charging = _5;
        Smart = _6;
    }

void Anker_IO::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------- I N P U T   &   O U T P U T -------------------------" << endl << endl;

    cout << "Power Input                    : " << Power << endl;
    cout << "Total Output                   : " << Total << endl;
    cout << "USB-C Ports                    : " << USB_1 << endl;
    cout << "USB-A Ports                    : " << USB_2 << endl;
    cout << "Charging Modes                 : " << Charging << endl;
    cout << "Smart Features                 : " << Smart << endl << endl;
}