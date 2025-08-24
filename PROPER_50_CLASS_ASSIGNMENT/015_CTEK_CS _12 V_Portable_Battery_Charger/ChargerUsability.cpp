#include "ChargerUsability.hpp"

Charger_Usability::Charger_Usability
        (std::string _1, std::string _2
        , std::string _3, std::string _4 )
        {
            Plug = _1;
            LED = _2;
            Maintainer = _3;
            Hold = _4;
        }

void Charger_Usability::show()
{
    using std::cout;
    using std::endl;
 
    cout << "--------------------- U S A B I L I T Y   F E A T U R E S ---------------------" << endl << endl;
    
    cout << "Plug-and-Play Simplicity       : " << Plug << endl;
    cout << "LED Countdown & Status Ring    : " << LED << endl;
    cout << "Maintainer Mode                : " << Maintainer << endl;
    cout << "Hold-Charger Storage           : " << Hold << endl << endl;
}