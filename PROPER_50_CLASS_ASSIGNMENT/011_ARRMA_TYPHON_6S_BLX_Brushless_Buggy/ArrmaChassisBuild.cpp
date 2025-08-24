#include "ArrmaChassisBuild.hpp"

Arrma_Chassis::Arrma_Chassis
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7, std::string _8
        , std::string _9, std::string _10 
        , std::string _11, std::string _12 
        , std::string _13)
        {
            Chassis_Material = _1;
            Chassis_Thickness = _2;
            Drivetrain = _3;
            Center_Differential = _4;
            Shock_Absorbers = _5;
            Shock_Towers = _6;
            Suspension = _7;
            Drive_Shafts = _8;
            Differentials = _9;
            Turnbuckles = _10;
            Wheel_Hex_Size = _11;
            Tires = _12;
            Wheels = _13;
        }

void Arrma_Chassis::show()
{
    using std::cout;
    using std::endl;
  
    cout << "----------------------------- C H A S S I S   &   B U I L D -----------------------------" << endl << endl;
    
    cout << "Chassis Material                       : " << Chassis_Material << endl;
    cout << "Chassis Thickness                      : " << Chassis_Thickness << endl;
    cout << "Dirvetrain                             : " << Drivetrain << endl;
    cout << "Center Differential                    : " << Center_Differential << endl;
    cout << "Shock Absorbers                        : " << Shock_Absorbers << endl;
    cout << "Shock Towers                           : " << Shock_Towers << endl;
    cout << "Suspension                             : " << Suspension << endl;
    cout << "Drive Shafts                           : " << Drive_Shafts << endl;
    cout << "Differentials                          : " << Differentials << endl;
    cout << "Turnbuckles                            : " << Turnbuckles << endl;
    cout << "Wheel Hex Size                         : " << Wheel_Hex_Size << endl;
    cout << "Tires                                  : " << Tires << endl;
    cout << "Wheels                                 : " << Wheels << endl << endl;

}