#include "AOSafety.hpp"

AO_Safety::AO_Safety
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5)
    {
        Multi = _1;
        Automatic = _2;
        Dry = _3;
        Child = _4;
        Shock = _5;
    }

void AO_Safety::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- S A F E T Y   &   P R O T E C T I O N --------------------" << endl << endl;

    cout << "Multi-Level Safety Valve       : " << Multi << endl;
    cout << "Automatic Thermal Cut-Out      : " << Automatic << endl;
    cout << "Dry/Frost Protection           : " << Dry << endl;
    cout << "Child Safety Mode Indicator    : " << Child << endl;
    cout << "Shock-Proof ABS Outer Shell    : " << Shock << endl << endl;
}