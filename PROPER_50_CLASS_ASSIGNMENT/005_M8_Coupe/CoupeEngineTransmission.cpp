#include "CoupeEngineTransmission.hpp"

Coupe_Engine::Coupe_Engine(std::string _1, std::string _2, std::string _3
                    ,std::string _4, std::string _5, std::string _6
                    ,std::string _7, std::string _8, std::string _9
                    ,std::string _10, char _11, short int _12
                    ,std::string _13, std::string _14, std::string _15)
                    {
                        this-> Engine = _1;
                        this-> Engine_Type = _2;
                        this-> Turbo_Charger = _3;
                        this-> Super_Charger = _4;
                        this-> Fuel_Type = _5;
                        this-> Max_Power = _6;
                        this-> Max_Torque = _7;
                        this-> Emission_Standard = _8;
                        this-> Mileage_ARAI = _9;
                        this-> Mileage_Owner_Reported = _10;
                        this-> Idle_Start_Stop = _11;
                        this-> Driving_Range = _12;
                        this-> Acceleration = _13;
                        this-> Drivetrain = _14;
                        this-> Transmission = _15;
                    }

void Coupe_Engine::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------ENGINE & TRANSMISSION-------------------------------" << endl << endl;
    
    cout << "Engine                                     : " << Engine << endl;
    cout << "Engine Type                                : " << Engine_Type << endl;
    cout << "Turbocharger / Supercharger                : " << Turbo_Charger << endl;
    cout << "Turbocharger / Supercharger                : " << Super_Charger << endl;
    cout << "Fuel Type                                  : " << Fuel_Type << endl;
    cout << "Max Power (bhp@rpm)                        : " << Max_Power << endl;
    cout << "Max Torque (Nm@rpm)                        : " << Max_Torque << endl;
    cout << "Emission Standard                          : " << Emission_Standard << endl;
    cout << "Mileage (ARAI)                             : " << Mileage_ARAI << endl;
    cout << "Mileage - Owner Reported                   : " << Mileage_Owner_Reported << " km" << endl;
    cout << "Idle Start/Stop                            : " << Idle_Start_Stop << endl;
    cout << "Driving Range                              : " << Driving_Range << endl;
    cout << "Acceleration (0-100 kmph) Claimed          : " << Acceleration << endl;
    cout << "Drivetrain                                 : " << Drivetrain << endl;
    cout << "Transmission                               : " << Transmission << endl << endl;
}