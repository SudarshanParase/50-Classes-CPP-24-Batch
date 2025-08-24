// Header File Inclusion
#include "MercedesBraking.hpp"

Mercedes_Braking::Mercedes_Braking
    (char _1, char _2 
    , char _3, char _4 
    , char _5, char _6 
    , char _7, char _8 
    , std::string _9, std::string _10 
    , char _11 )
        {
            Anti_Lock = _1;
            Brake_Assist = _2;
            Electronic_Brake = _3;
            Electronic_Stability = _4;
            Traction_Control = _5;
            Hill_Hold = _6;
            Hill_Descent = _7;
            Limited_Slip = _8;
            Differential_Lock = _9;
            Four_Wheel = _10;
            Ride = _11;
        }

void Mercedes_Braking::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- B R A K I N G   &   T R A C T I O N --------------------" << endl << endl;

    cout << "Anti-Lock Braking System (ABS)             : " << Anti_Lock << endl;
    cout << "Brake Assist (BA)                          : " << Brake_Assist << endl;
    cout << "Electronic Brake-force Distribution (EBD)  : " << Electronic_Brake << endl;
    cout << "Electronic Stability Program (ESP)         : " << Electronic_Stability << endl;
    cout << "Traction Control System (TC/TCS)           : " << Traction_Control << endl;
    cout << "Hill Hold Control                          : " << Hill_Hold << endl;
    cout << "Hill Descent Control                       : " << Hill_Descent << endl;
    cout << "Limited Slip Differential (LSD)            : " << Limited_Slip << endl;
    cout << "Differential Lock                          : " << Differential_Lock << endl;
    cout << "Four-Wheel-Drive                           : " << Four_Wheel << endl;
    cout << "Ride Height Adjustment                     : " << Ride << endl << endl;
}