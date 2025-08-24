#include "SamsungGeneral.hpp"

Samsung_General::Samsung_General(std::string _1, char _2, std::string _3, std::string _4 
                      , std::string _5, char _6, std::string _7, std::string _8)
                      {
                        Height_Adjustment = _1;
                        Rotation_Adjustment = _2;
                        Swivel_Adjustment = _3;
                        Tilt_Adjustment = _4;
                        Mounting_Hole_Pattern = _5;
                        Lock_Slot = _6;
                        Dimensions = _7;
                        Weight = _8;

                      }

void Samsung_General::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------- G E N E R A L ----------------------------" << endl << endl;

    cout << "Height Adjustment                      : " << Height_Adjustment << endl;
    cout << "Rotation Adjustment                    : " << Rotation_Adjustment << endl;
    cout << "Swivel Adjustment                      : " << Swivel_Adjustment << endl;
    cout << "Tilt Adjustment                        : " << Tilt_Adjustment << endl;
    cout << "Mounting-Hole Pattern                  : " << Mounting_Hole_Pattern << endl;
    cout << "Lock Slot                              : " << Lock_Slot << endl;
    cout << "Dimensions                             : " << Dimensions << endl;
    cout << "Weight                                 : " << Weight << endl << endl;

}