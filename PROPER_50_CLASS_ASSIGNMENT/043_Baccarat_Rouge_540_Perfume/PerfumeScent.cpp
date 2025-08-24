#include "PerfumeScent.hpp"

Perfume_Scent::Perfume_Scent
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 
    , std::string _5 )
    {
        Top = _1;
        Heart = _2;
        Base = _3;
        Signature = _4;
        Scent = _5;
    }

void Perfume_Scent::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------- S C E N T   P R O F I L E   &   N O T E S ----------------" << endl << endl; 

    cout << "Top Notes                      : " << Top << endl;
    cout << "Heart / Middle Notes           : " << Heart << endl;
    cout << "Base Notes                     : " << Base << endl;
    cout << "Signature Accord               : " << Signature << endl;
    cout << "Scent Vibe                     : " << Scent << endl << endl;
}