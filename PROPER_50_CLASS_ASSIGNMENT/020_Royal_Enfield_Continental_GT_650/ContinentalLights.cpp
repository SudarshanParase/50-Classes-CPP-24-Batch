#include "ContinentalLights.hpp"

Continental_Lights::Continental_Lights
        (std::string _1, char _2
        , char _3, char _4 
        , std::string _5, char _6
        , char _7, char _8 
        , std::string _9)
        {
            Headlight_Type = _1;
            Projector = _2;
            Dual = _3;
            DRLs = _4;
            Brake = _5;
            Hazard = _6;
            Shift = _7;
            Pass = _8;
            Turn = _9;
        }

void Continental_Lights::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------- L I G H T S -------------------------------" << endl << endl;

    cout << "Headlight Type                                 : " << Headlight_Type << endl;
    cout << "Projector Headlamp                             : " << Projector << endl;
    cout << "Dual Lights                                    : " << Dual << endl;
    cout << "DRLs (Daytime Running Lights)                  : " << DRLs << endl;
    cout << "Brake/Tail Light                               : " << Brake << endl;
    cout << "Hazard Warning Lights                          : " << Hazard << endl;
    cout << "Shift Light                                    : " << Shift << endl;
    cout << "Pass Light                                     : " << Pass << endl;
    cout << "Turn Signal                                    : " << Turn << endl << endl;
}