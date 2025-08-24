#include "CanonEnvironmental.hpp"

Canon_Environmental::Canon_Environmental(std::string _1, std::string _2)
{
    Operating_Temperature = _1;
    Operating_Humidity = _2;
}

void Canon_Environmental::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- E N V I R O N M E N T A L --------------------" << endl << endl;
            
    cout << "Operating Temperature                      : " << Operating_Temperature << endl;
    cout << "Operating Humidity                         : " << Operating_Humidity << endl << endl;
}