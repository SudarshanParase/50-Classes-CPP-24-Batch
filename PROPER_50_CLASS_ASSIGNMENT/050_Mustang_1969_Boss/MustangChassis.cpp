// Header File Inclusion
#include "MustangChassis.hpp"

Mustang_Chassis::Mustang_Chassis
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6
        , std::string _7 )
        {
            Chassis = _1;
            Body_Type = _2;
            Steering_Type = _3;
            Steering_Column = _4;
            Turning_Radius = _5;
            Front_Suspension = _6;
            Rear_Suspension = _7;
            
        }

void Mustang_Chassis::show()
{
    using std::cout;
    using std::endl;

    cout << "------- C H A S S I S ,   S T E E R I N G ,   &   S U S P E N S I O N -------" << endl << endl;

    cout << "Chassis                                    : " << Chassis << endl;
    cout << "Body Type                                  : " << Body_Type << endl;
    cout << "Steering Type                              : " << Steering_Type << endl;
    cout << "Steering Column                            : " << Steering_Column << endl;
    cout << "Turning Radius                             : " << Turning_Radius << endl;
    cout << "Front Suspension                           : " << Front_Suspension << endl;
    cout << "Rear Suspension                            : " << Rear_Suspension << endl << endl;
}