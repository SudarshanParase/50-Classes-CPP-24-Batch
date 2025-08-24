#include "AnkerPhysical.hpp"

Anker_Physical::Anker_Physical
        (std::string _1, std::string _2
        , std::string _3)
        {
            Weight = _1;
            Dimensions = _2;
            Build = _3;
        }

void Anker_Physical::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------- P H Y S I C A L   C H A R A C T E R I S T I C S ---------------" << endl << endl;

    cout << "Weight                         : " << Weight << endl;
    cout << "Dimensions                     : " << Dimensions << endl;
    cout << "Build Quality                  : " << Build << endl << endl;
}