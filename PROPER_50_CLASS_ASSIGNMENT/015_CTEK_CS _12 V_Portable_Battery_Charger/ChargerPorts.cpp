#include "ChargerPorts.hpp"

Charger_Ports::Charger_Ports
    (std::string _1, std::string _2
    , std::string _3)
    {
        Main = _1;
        USB_C = _2;
        USB_A = _3;
    }

void Charger_Ports::show()
{
    using std::cout;
    using std::endl;
 
    cout << "------------------------ O U T P U T S   &   P O R T S ------------------------" << endl << endl;
    
    cout << "Main Output (to battery)       : " << Main << endl;
    cout << "USB-C Output                   : " << USB_C << endl;
    cout << "USB-A Output                   : " << USB_A << endl << endl;
}