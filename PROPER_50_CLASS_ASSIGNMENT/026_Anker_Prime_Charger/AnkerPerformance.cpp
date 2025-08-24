#include "AnkerPerformance.hpp"

Anker_Performance::Anker_Performance
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Single = _1;
            Multi = _2;
            Charging = _3;
            Silent = _4;
        }

void Anker_Performance::show()
{
    using std::cout;
    using std::endl;
 
    cout << "---------------- P E R F O R M A N C E   &   P R O T O C O L S ----------------" << endl << endl;

    cout << "Single-Port Power              : " << Single << endl;
    cout << "Multi-Port Sharing             : " << Multi << endl;
    cout << "Charging Safety                : " << Charging << endl;
    cout << "Silent Operation               : " << Silent << endl << endl;
}