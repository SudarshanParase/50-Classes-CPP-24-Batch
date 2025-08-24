// Header File Inclusion
#include "PowerPower.hpp"

Power_Power::Power_Power
        (std::string _1, std::string _2 
        , std::string _3 )
        {
            AC_Input = _1;
            AC_Power = _2;
            Current = _3;
        }

void Power_Power::show()
{
    using std::cout;
    using std::endl;
    
    cout << "------------------------------------- P O W E R ----------------------------------" << endl << endl;

    cout << "AC Input Power                     : " << AC_Input << endl;
    cout << "AC Power I/O                       : " << AC_Power << endl;
    cout << "Current Consumption                : " << Current << endl << endl;
}