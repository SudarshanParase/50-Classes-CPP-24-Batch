#include "SamsungHardware.hpp"

Samsung_Hardware::Samsung_Hardware
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5)
    {
        Virtual_Assistant = _1;
        Operting_System = _2;
        Mobile_App = _3;
        Wireless = _4;
        Bluetooth = _5;
    }

void Samsung_Hardware::show()
{
    using std::cout;
    using std::endl;
    
    cout << "---------------------------------- H A R D W A R E -------------------------------" << endl << endl;
    
    cout << "Virtual Assistant                  : " << Virtual_Assistant << endl;
    cout << "Operating System                   : " << Operting_System << endl;
    cout << "Mobile App Compatible              : " << Mobile_App << endl;
    cout << "Wireless LAN / Wi-Fi               : " << Wireless << endl;
    cout << "Bluetooth                          : " << Bluetooth << endl;

}