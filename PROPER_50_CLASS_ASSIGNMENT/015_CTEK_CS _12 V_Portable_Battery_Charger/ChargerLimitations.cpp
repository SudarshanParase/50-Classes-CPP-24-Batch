#include "ChargerLimitations.hpp"

Charger_Limitations::Charger_Limitations
            (std::string _1, std::string _2
            , std::string _3, std::string _4)
            {
                Traditional = _1;
                Limited = _2;
                Accessory = _3;
                Weight = _4;
            }

void Charger_Limitations::show()
{
    using std::cout;
    using std::endl;

    cout << "------------ L I M I T A T I O N S   &   C O N S I D E R A T I O N S ----------" << endl << endl;
    
    cout << "Not a Traditional Jump Starter : " << Traditional << endl;
    cout << "Limited Internal Capacity      : " << Limited << endl;
    cout << "Accessory Cost Adds Up         : " << Accessory << endl;
    cout << "Weight                         : " << Weight << endl << endl;
}