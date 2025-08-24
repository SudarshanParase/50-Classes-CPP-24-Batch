// Header File Inclusion
#include "MustangBrakes.hpp"

Mustang_Brakes::Mustang_Brakes
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6 
        , std::string _7, char _8 
        , std::string _9, std::string _10)
        {
            Front_Brake_Type = _1;
            Rear_Brake_Type = _2;
            Front_Brake_Size = _3;
            Rear_Brake_Size = _4;
            Wheel_Type = _5;
            Front_Brake_Size = _6;
            Rear_Brake_Size = _7;
            Tubeless = _8;
            Front_Tyre = _9;
            Rear_Tyre = _10;
        }

void Mustang_Brakes::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------- B R A K E S ,   W H E E L S ,   &   T Y R E S ---------------" << endl << endl;

    cout << "Front Brake Type                           : " << Front_Brake_Type << endl;
    cout << "Rear Brake Type                            : " << Rear_Brake_Type << endl;
    cout << "Front Brake Size                           : " << Front_Brake_Size << endl;
    cout << "Rear Brake Size                            : " << Rear_Brake_Size << endl;
    cout << "Wheel Type                                 : " << Wheel_Type << endl;
    cout << "Front Wheel Size                           : " << Front_Wheel_Size << endl;
    cout << "Rear Wheel Size                            : " << Rear_Wheel_Size << endl;
    cout << "Tubeless Tyres                             : " << Tubeless << endl;
    cout << "Front Tyre Size                            : " << Front_Tyre << endl;
    cout << "Rear Tyre Size                             : " << Rear_Tyre << endl << endl;
}