// Header File Inclusion
#include "DefenderSuspensions.hpp"

Defender_Suspensions::Defender_Suspensions
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6 
        , std::string _7, std::string _8)
        {
            Front_Suspensions = _1;
            Rear_Suspensions = _2;
            Steering = _3;
            Tyres = _4;
            Front_Brake = _5;
            Rear_Brake = _6;
            Spare_Wheel = _7;
            Wheels = _8;
        }

void Defender_Suspensions::show()
{
    using std::cout;
    using std::endl;

    cout << "- S U S P E N S I O N S ,   B R A K E S ,   S T E E R I N G   &   T Y R E S -" << endl << endl; 

    cout << "Front Suspensions                          : " << Front_Suspensions << endl;
    cout << "Rear Suspensions                           : " << Rear_Suspensions << endl;
    cout << "Steering                                   : " << Steering << endl;
    cout << "Tyres                                      : " << Tyres << endl;
    cout << "Front Brake Type                           : " << Front_Brake << endl;
    cout << "Rear Brake Type                            : " << Rear_Brake << endl;
    cout << "Spare Wheel & Tyre                         : " << Spare_Wheel << endl;
    cout << "Wheels                                     : " << Wheels << endl << endl;
}
