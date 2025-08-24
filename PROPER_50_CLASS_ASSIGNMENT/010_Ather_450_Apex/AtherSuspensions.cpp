#include "AtherSuspensions.hpp"

Ather_Suspensions::Ather_Suspensions
        (std::string _1, std::string _2
        , char _3, char _4
        , std::string _5)
        {
            Front_Suspension = _1;
            Rear_Suspension = _2;
            F_Preload = _3;
            R_Preload = _4;
            Chassis_Type = _5;
        }

void Ather_Suspensions::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------- S U S P E N S I O N S   &   C H A S S I S ----------------" << endl << endl;
    
    cout << "Front Suspension                           : " << Front_Suspension << endl;
    cout << "Rear Suspension                            : " << Rear_Suspension << endl;
    cout << "Front Suspension Preload Adjuster          : " << F_Preload << endl;
    cout << "Rear Suspension Preload Adjuster           : " << R_Preload << endl;
    cout << "Chassis Type                               : " << Chassis_Type << endl << endl;
}