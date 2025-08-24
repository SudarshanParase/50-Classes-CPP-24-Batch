#include "ChargerInput.hpp"

Charger_Input::Charger_Input
    (std::string _1, std::string _2
    , std::string _3, std::string _4)
    {
        USB = _1;
        Vehicle = _2;
        Service = _3;
        Solar = _4;
    }

void Charger_Input::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- I N P U T / C H A R G I N G   M E T H O D S -----------------" << endl << endl;
   
    cout << "USB-C (Mains)                  : " << USB << endl;
    cout << "12 V Vehicle Socket            : " << Vehicle << endl;
    cout << "12 V Service Battery           : " << Service << endl;
    cout << "Solar Panel Kit                : " << Solar << endl << endl;
}