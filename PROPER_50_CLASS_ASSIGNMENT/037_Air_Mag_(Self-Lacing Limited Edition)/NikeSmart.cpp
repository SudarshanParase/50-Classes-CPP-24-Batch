#include "NikeSmart.hpp"

Nike_Smart::Nike_Smart
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5, std::string _6
    , std::string _7)
    {
        Self = _1;
        Sensors = _2;
        Manual = _3;
        Battery = _4;
        Charging = _5;
        LED = _6;
        App = _7;
    }

void Nike_Smart::show()
{
    using std::cout;
    using std::endl;

    cout << "---- S M A R T   T E C H N O L O G Y   &   P O W E R   F E A T U R E S ----" << endl << endl;

    cout << "Self-Lacing System             : " << Self << endl;
    cout << "Sensors                        : " << Sensors << endl;
    cout << "Manual Override                : " << Manual << endl;
    cout << "Battery Life                   : " << Battery << endl;
    cout << "Charging Method                : " << Charging << endl;
    cout << "LED Lighting                   : " << LED << endl;
    cout << "App Control                    : " << App << endl << endl;
}