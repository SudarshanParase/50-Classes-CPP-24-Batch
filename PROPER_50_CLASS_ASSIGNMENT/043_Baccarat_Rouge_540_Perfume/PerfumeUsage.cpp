#include "PerfumeUsage.hpp"

Perfume_Usage::Perfume_Usage
    (std::string _1, std::string _2 
    , std::string _3 )
    {
        Application = _1;
        Storage = _2;
        Shelf = _3;
    }

void Perfume_Usage::show()
{
    using std::cout;
    using std::endl;
 
    cout << "------------------------- C A R E   &   U S A G E -------------------------" << endl << endl;

    cout << "Application Tips               : " << Application << endl;
    cout << "Storage                        : " << Storage << endl;
    cout << "Shelf Life                     : " << Shelf << endl << endl;
}