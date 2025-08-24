#include "CanonGeneral.hpp"

Canon_General::Canon_General(std::string _1, std::string _2)
{
    Dimensions = _1;
    Weight = _2;
}

void Canon_General::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------- G E N E R A L --------------------------" << endl << endl;
            
    cout << "Dimensions                                 : " << Dimensions << endl;
    cout << "Weight                                     : " << Weight << endl << endl; 
}