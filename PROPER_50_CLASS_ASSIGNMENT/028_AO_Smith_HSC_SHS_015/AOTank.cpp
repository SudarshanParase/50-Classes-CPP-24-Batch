#include "AOTank.hpp"

AO_Tank::AO_Tank
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5)
    {
        Tank = _1;
        Inner = _2;
        Heating = _3;
        Insulation = _4;
        Pressure = _5;
    }

void AO_Tank::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- T A N K   &   H E A T I N G   E L E M E N T -----------------" << endl << endl;
  
    cout << "Tank Capacity                  : " << Tank << endl;
    cout << "Inner Tank Material            : " << Inner << endl;
    cout << "Heating Element                : " << Heating << endl;
    cout << "Insulation                     : " << Insulation << endl;
    cout << "Pressure Rating                : " << Pressure << endl << endl;
}