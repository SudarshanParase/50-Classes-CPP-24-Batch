#include "SamsungGeneral.hpp"

Samsung_General::Samsung_General
    (std::string _1, std::string _2
    , std::string _3)
    {
        Light_Source = _1;
        Dimensions = _2;
        Weight = _3;
    }

void Samsung_General::show()
{
    using std::cout;
    using std::endl;
    
    cout << "----------------------------------  G E N E R A L --------------------------------" << endl << endl;
    
    cout << "Light Source                       : " << Light_Source << endl;
    cout << "Dimensions (W x H x D)             : " << Dimensions << endl;
    cout << "Weight                             : " << Weight << endl << endl;
}