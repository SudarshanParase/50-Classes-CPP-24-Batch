// Header File Inclusion
#include "DefenderEngine.hpp"

Defender_Engine::Defender_Engine
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , short int _5, short int _6 
        , std::string _7, std::string _8 
        , short int _9, char _10 
        , std::string _11, std::string _12)
        {
            Engine = _1;
            Engine_Type = _2;
            Turbocharger = _3;
            Fuel_Type = _4;
            Max_Power = _5;
            Max_Torque = _6;
            Emission = _7;
            Acceleration = _8;
            Top_Speed = _9;
            Idle = _10;
            Drivetrain = _11;
            Transmission = _12;
        }

void Defender_Engine::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- E N G I N E   &   T R A N S M I S S I O N -----------------" << endl << endl;

    cout << "Engine                                     : " << Engine << endl;
    cout << "Engine Type                                : " << Engine_Type << endl;
    cout << "Turbocharger / Supercharger                : " << Turbocharger << endl;
    cout << "Fuel Type                                  : " << Fuel_Type << endl;
    cout << "Max Power (bhp@rpm)                        : " << Max_Power << " bhp" << endl;
    cout << "Max Torque (Nm@rpm)                        : " << Max_Torque << " Nm" << endl;
    cout << "Emission Standard                          : " << Emission << endl;
    cout << "Acceleration                               : " << Acceleration << endl;
    cout << "Top Speed                                  : " << Top_Speed << " kmph" << endl;
    cout << "Idle Start/Stop                            : " << Idle << endl;
    cout << "Drivetrain                                 : " << Drivetrain << endl;
    cout << "Transmission                               : " << Transmission << endl << endl;
}