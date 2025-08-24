// Header File Inclusion
#include "AppleBattery.hpp"

Apple_Battery::Apple_Battery
    (std::string _1, std::string _2 
    , char _3, std::string _4 )
    {
        Type = _1;
        Size = _2;
        Fast = _3;
        Talk = _4;
    }

void Apple_Battery::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------- B A T T E R Y ---------------------------------" << endl << endl;

    cout << "Type                           : " << Type << endl;
    cout << "Size                           : " << Size << endl;
    cout << "Fast Charging                  : " << Fast << endl;
    cout << "Talk Time                      : " << Talk << endl << endl;
}