#include "PatekMovement.hpp"

Patek_Movement::Patek_Movement
    (std::string _1, std::string _2
    , std::string _3)
    {
        Movement = _1;
        Power = _2;
        Functions = _3;
    }

void Patek_Movement::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------ M O V E M E N T   &   P O W E R T R A I N ------------------" << endl << endl;
    
    cout << "Movement                       : " << Movement << endl;
    cout << "Power Reserve                  : " << Power << endl;
    cout << "Functions                      : " << Functions << endl << endl;
}