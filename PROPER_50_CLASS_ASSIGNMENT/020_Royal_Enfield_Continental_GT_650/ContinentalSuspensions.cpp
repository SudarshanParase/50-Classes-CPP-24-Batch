#include "ContinentalSuspensions.hpp"

Continental_Suspensions::Continental_Suspensions
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5)
        {
            Front_Suspension = _1;
            Rear_Suspension = _2;
            Front_Adjuster = _3;
            Rear_Adjuster = _4;
            Chassis_Type = _5;
        }

void Continental_Suspensions::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------- S U S P E N S I O N S   &   C H A S S I S ----------------" << endl << endl;

    cout << "Front Suspension                               : " << Front_Suspension << endl;
    cout << "Rear Suspension                                : " << Rear_Suspension << endl;
    cout << "Front Suspension Preload Adjuster              : " << Front_Adjuster << endl;
    cout << "Rear Suspension Preload Adjuster               : " << Rear_Adjuster << endl;
    cout << "Chassis Type                                   : " << Chassis_Type << endl << endl;
}