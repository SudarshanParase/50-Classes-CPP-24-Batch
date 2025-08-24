#include "CoupeSusBraSteTyr.hpp"

Coupe_Sus::Coupe_Sus(std::string _1,std::string _2,std::string _3
                , std::string _4, std::string _5, std::string _6
                , std::string _7, std::string _8, std::string _9
                , std::string _10, std::string _11, std::string _12)
        {
            Front_Sus = _1;
            Rear_Sus = _2;
            Front_Brake = _3;
            Rear_Brake = _4;
            Min_Turning_Radius = _5;
            Steering_Type_1 = _6;
            Steering_Type_2 = _7;
            Front_Tyres = _8;
            Rear_Tyres = _9;
            Tyre_Construction = _10;
            Wheels = _11;
            Spare_Wheel = _12;
        }

void Coupe_Sus::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------SUSPENSION, BRAKES, STEERING & TYRES------------------------" << endl << endl;
    
    cout << "Front Suspension                           : " << Front_Sus << endl;
    cout << "Rear Suspension                            : " << Rear_Sus << endl;
    cout << "Front Brake Type                           : " << Front_Brake << endl;
    cout << "Rear Brake Type                            : " << Rear_Brake << endl;
    cout << "Minimum Turning Radius                     : " << Min_Turning_Radius << endl;
    cout << "Steering Type                              : " << Steering_Type_1 << endl;
    cout << "Steering Type                              : " << Steering_Type_2 << endl;
    cout << "Front Tyres                                : " << Front_Tyres << endl;
    cout << "Rear Tyres                                 : " << Rear_Tyres << endl;
    cout << "Tyre Construction                          : " << Tyre_Construction << endl;
    cout << "Wheels                                     : " << Wheels << endl;
    cout << "Spare Wheel                                : " << Spare_Wheel << endl << endl;
 }