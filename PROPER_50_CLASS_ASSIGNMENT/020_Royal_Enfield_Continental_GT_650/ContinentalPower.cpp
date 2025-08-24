#include "ContinentalPower.hpp"

Continental_Power::Continental_Power
        (short int _1, std::string _2  
        , std::string _3, short int _4 
        , std::string _5 , std::string _6 
        , std::string _7 , std::string _8 
        , std::string _9 , float _10
        , char _11, char _12
        , char _13, std::string _14  
        , std::string _15 , std::string _16
        , std::string _17 , std::string _18  
        , std::string _19 , std::string _20 
        , std::string _21 )
        {
            Displacement = _1; 
            Max_Power = _2;
            Max_Torque = _3;
            Top_Speed = _4;
            Mileage = _5;
            Transmission = _6;
            Transmission_T = _7;
            Gear = _8;
            Clutch = _9;
            Riding_Range = _10;
            Riding_Modes = _11;
            Cylinders = _12;
            Valves = _13;
            Cooling = _14;
            Bore = _15;
            Stroke = _16;
            Compression = _17;
            Spark = _18;
            Battery = _19;
            Emission = _20;
            Fuel = _21;
        }

void Continental_Power::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------ P O W E R   &   P E R F O R M A N C E ------------------" << endl << endl;

    cout << "Displacement                                   : " << Displacement << " cc" << endl;
    cout << "Max Power                                      : " << Max_Power << endl;
    cout << "Max Torque                                     : " << Max_Torque << endl;
    cout << "Top Speed                                      : " << Top_Speed << " kmph" << endl;
    cout << "Mileage-Owner Reported                         : " << Mileage << endl;
    cout << "Transmission                                   : " << Transmission << endl;
    cout << "Transmission Type                              : " << Transmission_T << endl;
    cout << "Gear Shifting Pattern                          : " << Gear << endl;
    cout << "Clutch                                         : " << Clutch << endl;
    cout << "Riding Range                                   : " << Riding_Range << " km" << endl;
    cout << "Riding Modes                                   : " << Riding_Modes << endl;
    cout << "Cylinders                                      : " << Cylinders  << endl;
    cout << "Valves Per Cylinder                            : " << Valves << endl;
    cout << "Cooling System                                 : " << Cooling << endl;
    cout << "Bore                                           : " << Bore << endl;
    cout << "Stroke                                         : " << Stroke << endl;
    cout << "Compression Ratio                              : " << Compression << endl;
    cout << "Spark Plugs                                    : " << Spark << endl;
    cout << "Battery                                        : " << Battery << endl;
    cout << "Emission Standard                              : " << Emission << endl;
    cout << "Fuel Type                                      : " << Fuel << endl << endl;
}