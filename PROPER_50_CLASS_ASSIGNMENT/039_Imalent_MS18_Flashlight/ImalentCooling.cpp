#include "ImalentCooling.hpp"

Imalent_Cooling::Imalent_Cooling
        (std::string _1, std::string _2 
        , std::string _3, std::string _4)
        {
            Cooling = _1;
            Fan = _2;
            Overheat = _3;
            Material = _4;
        }

void Imalent_Cooling::show()
{
    using std::cout;
    using std::endl;

    cout << "------------ C O O L I N G   &   T H E R M A L   C O N T R O L ------------" << endl << endl;

    cout << "Cooling System                 : " << Cooling << endl;
    cout << "Fan Noise                      : " << Fan << endl;
    cout << "Overheat Protection            : " << Overheat << endl;
    cout << "Material                       : " << Material << endl << endl;
}