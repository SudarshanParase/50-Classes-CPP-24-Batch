#include "KTMLights.hpp"

Ktm_Lights::Ktm_Lights
    (char _1, char _2
    , char _3, char _4
    , char _5, char _6
    , char _7, char _8
    , char _9 )
    {
        Headlight = _1;
        Projector = _2;
        Dual_Lights = _3;
        DRLs = _4;
        Brake = _5;
        Hazard = _6;
        Shift_Light = _7;
        Pass_Light = _8;
        Turn_Signal = _9;
    }

void Ktm_Lights::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------- L I G H T S -------------------------------" << endl << endl;

    cout << "Headlight Type                                 : " << Headlight << endl;
    cout << "Projector Headlamp                             : " << Projector << endl;
    cout << "DRLs (Daytime Running Lights)                  : " << DRLs << endl;
    cout << "Brake/Tail Light                               : " << Brake << endl;
    cout << "Hazard Warning Lights                          : " << Hazard << endl;
    cout << "Shift Light                                    : " << Shift_Light << endl;
    cout << "Pass Light                                     : " << Pass_Light << endl;
    cout << "Turn Signal                                    : " << Turn_Signal << endl << endl;
}