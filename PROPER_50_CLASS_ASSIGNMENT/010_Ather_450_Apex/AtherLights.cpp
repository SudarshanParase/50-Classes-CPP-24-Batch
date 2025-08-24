#include "AtherLights.hpp"

Ather_Lights::Ather_Lights
    (std::string _1, char _2
    , char _3, char _4
    , char _5, std::string _6
    , char _7, char _8
    , std::string _9)
    {
        Headlight_Type = _1;
        Projector_Headlamp = _2;
        Dual_Lights = _3;
        Boot_Light = _4;
        DRLs = _5;
        Brake = _6;
        Hazard = _7;
        Pass_Light = _8;
        Turn_Signal = _9;
    }

void Ather_Lights::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------- L I G H T S -------------------------------" << endl << endl;
    
    cout << "Headlight Type                             : " << Headlight_Type << endl;
    cout << "Projector Headlamp                         : " << Projector_Headlamp << endl;
    cout << "Dual Lights                                : " << Dual_Lights << endl;
    cout << "Boot Light                                 : " << Boot_Light << endl;
    cout << "DRLs (Daytime Running Lights)              : " << DRLs << endl;
    cout << "Brake/Tail Light                           : " << Brake << endl;
    cout << "Hazard Warning Lights                      : " << Hazard << endl;
    cout << "Pass Light                                 : " << Pass_Light << endl;
    cout << "Turn Signal                                : " << Turn_Signal << endl << endl;
}