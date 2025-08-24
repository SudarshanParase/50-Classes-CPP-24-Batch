// Header File Inclusion
#include "MercedesSuspensions.hpp"

Mercedes_Suspensions::Mercedes_Suspensions
            (std::string _1, std::string _2 
            , char _3, std::string _4 
            , std::string _5, std::string _6 
            , std::string _7, std::string _8 
            , std::string _9, std::string _10 
            , std::string _11, std::string _12)
            {
                Front_Suspension = _1;
                Rear_Suspension = _2;
                Additional = _3;
                Steering = _4;
                Tyres = _5;
                Front_Brake_Type = _6; 
                Rear_Brake_Type = _7;
                Spare_Wheel = _8;
                Minimum_Turning = _9;
                Front_Tyres = _10;
                Rear_Tyres = _11;
                Wheels = _12;
            }

void Mercedes_Suspensions::show()
{
    using std::cout;
    using std::endl;

    cout << "- S U S P E N S I O N S ,   B R A K E S ,   S T E E R I N G   &   T Y R E S -" << endl << endl;

    cout << "Front Suspension                           : " << Front_Suspension << endl;
    cout << "Rear Suspension                            : " << Rear_Suspension << endl;
    cout << "Additional Steering Features               : " << Additional << endl;
    cout << "Steering                                   : " << Steering << endl;
    cout << "Tyres                                      : " << Tyres << endl;
    cout << "Front Brake Type                           : " << Front_Brake_Type << endl;
    cout << "Rear Brake Type                            : " << Rear_Brake_Type << endl;
    cout << "Spare Wheel & Tyre                         : " << Spare_Wheel << endl;
    cout << "Minimum Turnig Radius                      : " << Minimum_Turning << endl;
    cout << "Front Tyres                                : " << Front_Tyres << endl;
    cout << "Rear Tyres                                 : " << Rear_Tyres << endl;
    cout << "Wheels                                     : " << Wheels << endl << endl;
}