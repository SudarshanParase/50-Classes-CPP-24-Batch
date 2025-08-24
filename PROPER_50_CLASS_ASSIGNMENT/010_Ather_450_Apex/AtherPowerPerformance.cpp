#include "AtherPowerPerformance.hpp"

Ather_Power::Ather_Power(std::string _1, char _2
                    , std::string _3, short int _4
                    , std::string _5, char _6
                    , std::string _7, short int _8
                    , std::string _9, std::string _10 
                    , std::string _11 , std::string _12 
                    , std::string _13 , short int _14)
                    {
                        Max_Power = _1;
                        Rated_Power = _2;
                        Max_Torque = _3;
                        Top_Speed = _4;
                        Acceleartions_40 = _5;
                        Accelerations_60 = _6;
                        Transmission = _7;
                        Riding_Range = _8;
                        Riding_Modes = _9;
                        Fuel_Type = _10;
                        Motor_Type = _11;
                        Motor_IP = _12;
                        Gradeability = _13;
                        Water_Wading = _14;
                    }

void Ather_Power::show()
{
    using std::cout;
    using std::endl;

    
    cout << "------------------ P O W E R   &   P E R F O R M A N C E ------------------" << endl << endl;

    cout << "Max Power                                  : " << Max_Power << endl;
    cout << "Rated Power                                : " << Rated_Power << endl;
    cout << "Max Torque                                 : " << Max_Torque << endl;
    cout << "Top Speed                                  : " << Top_Speed << " kmph" << endl;
    cout << "Acceleration (0-40 km/h)                   : " << Acceleartions_40 << endl;
    cout << "Acceleration (0-60 km/h)                   : " << Accelerations_60 << endl;
    cout << "Transmission                               : " << Transmission << endl;
    cout << "Riding Range                               : " << Riding_Range << " km" << endl;
    cout << "Riding Modes                               : " << Riding_Modes << endl;
    cout << "Fuel Type                                  : " << Fuel_Type << endl;
    cout << "Motor Type                                 : " << Motor_Type << endl;
    cout << "Motor IP Rating (Water & Dust Resistance)  : " << Motor_IP << endl;
    cout << "Gradeability                               : " << Gradeability << endl;
    cout << "Water Wading Limit                         : " << Water_Wading << " mm" << endl << endl;
}