#include "ArrmaPowerSystem.hpp"

Arrma_Power::Arrma_Power
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5, std::string _6
    , std::string _7)
    {
        Motor = _1;
        ESC = _2;
        Max_Battery = _3;
        Battery_Connectors = _4;
        Motor_Mount = _5;
        Gearing = _6;
        Optional_High_Speed = _7;
    }

void Arrma_Power::show()
{
    using std::cout;
    using std::endl;
 
    cout << "-------------------------------- P O W E R   S Y S T E M --------------------------------" << endl << endl;
    
    cout << "Motor                                  : " << Motor << endl;
    cout << "ESC                                    : " << ESC << endl;
    cout << "Max Battery Input                      : " << Max_Battery << endl;
    cout << "Battery Connectors                     : " << Battery_Connectors << endl;
    cout << "Motor Mount                            : " << Motor_Mount << endl;
    cout << "Gearing (Stock)                        : " << Gearing << endl;
    cout << "Optional High-Speed Gear               : " << Optional_High_Speed << endl << endl;
}