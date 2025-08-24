#include "GlassesBattery.hpp"

Glasses_Battery::Glasses_Battery(std::string _1, std::string _2
                                , std::string _3)
                {
                    Battery_Chemistry = _1;
                    Recharge_Time = _2;
                    Battery_Life = _3;
                }

void Glasses_Battery::show()
{
     using std::cout;
    using std::endl;

    cout << "-------------------------- B A T T E R Y --------------------------" << endl << endl;
            
    cout << "Battery Chemistry                          : " << Battery_Chemistry << endl;
    cout << "Recharge Time                              : " << Recharge_Time << endl;
    cout << "Maximum Battery Life                       : " << Battery_Life << endl << endl;
}