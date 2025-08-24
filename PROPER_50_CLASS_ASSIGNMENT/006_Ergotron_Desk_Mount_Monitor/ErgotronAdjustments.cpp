#include "ErgotronAdjustments.hpp"

E_Adjustments::E_Adjustments
            (std::string _1, std::string _2 
            , std::string _3, std::string _4
            , std::string _5)
            {
                Rotation_A = _1;
                Tilt_A = _2;
                Swivel_A = _3;
                Height_A = _4;
                Max_Arm = _5;
            }

void E_Adjustments::show()
{
    using std::cout;
    using std::endl;
    
    cout << "------------------------------- A D J U S T M E N T S ----------------------------" << endl << endl;
    
    cout << "Rotation Adjustment                : " << Rotation_A << endl;
    cout << "Tilt Adjustment                    : " << Tilt_A << endl;
    cout << "Swivel Adjustment                  : " << Swivel_A << endl;
    cout << "Height Adjustment                  : " << Height_A << endl;
    cout << "Max Arm Extension Length           : " << Max_Arm << endl << endl;
}