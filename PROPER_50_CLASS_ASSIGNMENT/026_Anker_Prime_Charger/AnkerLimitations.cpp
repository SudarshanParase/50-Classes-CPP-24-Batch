#include "AnkerLimitations.hpp"

Anker_Limitations::Anker_Limitations
        (std::string _1, std::string _2
        , std::string _3)
        {
            Wireless = _1;
            Bulky = _2;
            Relatively = _3;
        }

void Anker_Limitations::show()
{
    using std::cout;
    using std::endl;
 
    cout << "---------------------------- L I M I T A T I O N S ----------------------------" << endl << endl;

    cout << "No Wireless Charging           : " << Wireless << endl;
    cout << "Bulky for travel use           : " << Bulky << endl;
    cout << "Relatively Premium Price       : " << Relatively << endl << endl;
}