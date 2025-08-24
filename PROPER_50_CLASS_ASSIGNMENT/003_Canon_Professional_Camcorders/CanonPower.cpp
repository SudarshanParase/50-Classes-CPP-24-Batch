#include "CanonPower.hpp"

Canon_Power::Canon_Power(std::string _1)
{
    Battery_Type = _1;
}

void Canon_Power::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------- P O W E R ----------------------------" << endl << endl;
            
    cout << "Battery Type                               : " << Battery_Type << endl << endl;
}