#include "ChargerInternalBattery.hpp"

Charger_Internal::Charger_Internal
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Internal_Battery = _1;
            Lifecycle = _2;
            Adaptive_Boost = _3;
            Min_Start_Voltage = _4;
        }

void Charger_Internal::show()
{
    using std::cout;
    using std::endl;
 
    cout << "--------------- I N T E R N A L   B A T T E R Y   &   B O O S T ---------------" << endl << endl;
   
    cout << "Internal Battery               : " << Internal_Battery << endl;
    cout << "Lifecycle                      : " << Lifecycle << endl;
    cout << "Adaptive Boost Technology      : " << Adaptive_Boost << endl;
    cout << "Minimum Start Voltage          : " << Min_Start_Voltage << endl << endl;
}