#include "ContinentalBrakes.hpp"

Continental_Brakes::Continental_Brakes
    (std::string _1, std::string _2 
    , short int _3, std::string _4 
    , std::string _5 , short int _6 
    , std::string _7 , std::string _8 
    , std::string _9 , std::string _10  
    , std::string _11 , std::string _12  
    , std::string _13 , std::string _14  
    , std::string _15 , std::string _16  
    , std::string _17 )
    {
        Braking = _1;
        Front_Brake_Type = _2;
        Front_Brake_Size = _3;
        Caliper_F = _4;
        Rear_Brake_Type = _5;
        Rear_Brake_Size = _6;
        Caliper_R = _7;
        Wheel_Type = _8;
        Front_Wheel_Size = _9;
        Rear_Wheel_Size = _10;
        Front_Tyre_Size = _11;
        Rear_Tyre_Size = _12;
        Tyre_Type = _13;
        Front_Tyre_Pressure = _14;
        Rear_Tyre_Pressure = _15;
        Front_Tyre_Pressure_P = _16;
        Rear_Tyre_Pressure_P = _17;
    }

void Continental_Brakes::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------- B R A K E S   &   W H E E L S ----------------------" << endl << endl;

    cout << "Braking System                                 : " << Braking << endl;
    cout << "Front Brake Type                               : " << Front_Brake_Type << endl;
    cout << "Front Brake Size                               : " << Front_Brake_Size << " mm" << endl;
    cout << "Caliper-Front                                  : " << Caliper_F << endl;
    cout << "Rear Brake Type                                : " << Rear_Brake_Type << endl;
    cout << "Rear Brake Size                                : " << Rear_Brake_Size << " mm" << endl;
    cout << "Caliper-Rear                                   : " << Caliper_R << endl;
    cout << "Wheel Type                                     : " << Wheel_Type << endl;
    cout << "Front Wheel Size                               : " << Front_Wheel_Size << endl;
    cout << "Rear Wheel Size                                : " << Rear_Wheel_Size << endl;
    cout << "Front Tyre Size                                : " << Front_Tyre_Size << endl;
    cout << "Rear Tyre Size                                 : " << Rear_Tyre_Size << endl;
    cout << "Tyre Type                                      : " << Tyre_Type << endl;
    cout << "Front Tyre Pressure (Rider)                    : " << Front_Tyre_Pressure << endl;
    cout << "Rear Tyre Pressure (Rider)                     : " << Rear_Tyre_Pressure << endl;
    cout << "Front Tyre Pressure (Rider & Pillion)          : " << Front_Tyre_Pressure_P << endl;
    cout << "Rear Tyre Pressure (Rider & Pillion)           : " << Rear_Tyre_Pressure_P << endl;
}