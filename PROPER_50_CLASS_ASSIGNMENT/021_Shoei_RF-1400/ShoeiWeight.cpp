#include "ShoeiWeight.hpp"

Shoei_Weight::Shoei_Weight
    (std::string _1, std::string _2
    , std::string _3)
    {
        Weight = _1;
        Fit = _2;
        Liner = _3;
    }

void Shoei_Weight::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------- W E I G H T   &   F I T ---------------------------" << endl << endl;
    
    cout << "Weight                         : " << Weight << endl;
    cout << "Fit Type                       : " << Fit << endl;
    cout << "Liner                          : " << Liner << endl << endl;
}