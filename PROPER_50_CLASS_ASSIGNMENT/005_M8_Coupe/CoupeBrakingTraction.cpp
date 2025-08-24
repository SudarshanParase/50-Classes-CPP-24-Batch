#include "CoupeBrakingTraction.hpp"

Coupe_Braking_Traction::Coupe_Braking_Traction
            (char _1, char _2, char _3
            ,char _4, char _5, char _6
            ,char _7, char _8, char _9
            ,std::string _10, char _11)
            {
                ABS = _1;
                BA = _2;
                EBD = _3;
                ESP = _4;
                TC_TCS = _5;
                Hill_Hold = _6;
                Hill_Descent = _7;
                LSD = _8;
                Differential_Lock = _9;
                Four_Wheel_Drive = _10;
                Ride_Height_Adjustment = _11;

            }

void Coupe_Braking_Traction::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------BRAKING & TRACTION---------------------------------" << endl << endl;
    
    cout << "Anti-Lock Braking System (ABS)             : " << ABS << endl;
    cout << "Brake Assist (BA)                          : " << BA << endl;
    cout << "Electronic Brake-Force Distribution (EBD)  : " << EBD << endl;
    cout << "Electronic Stability Porgram (ESP)         : " << ESP << endl;
    cout << "Traction Control System (TC/TCS)           : " << TC_TCS << endl;
    cout << "Hill Hold Control                          : " << Hill_Hold << endl;
    cout << "Hill Descent Control                       : " << Hill_Descent << endl;
    cout << "Limited Slip Differential (LSD)            : " << LSD << endl;
    cout << "Differential Lock                          : " << Differential_Lock << endl;
    cout << "Four-Wheel-Drive                           : " << Four_Wheel_Drive << endl;
    cout << "Ride Height Adjustment                     : " << Ride_Height_Adjustment << endl << endl;
}