#include "FireAlexa.hpp"

Fire_Alexa::Fire_Alexa
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5)
    {
        Size = _1;
        Weight = _2;
        Batteries = _3;
        Technology = _4;
        Compatibility = _5;
    }

void Fire_Alexa::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------- A L E X A   V O I C E   R E M O T E ----------------------------" << endl << endl;
    
    cout << "Size                                   : " << Size << endl;
    cout << "Weight                                 : " << Weight << endl;
    cout << "Batteries                              : " << Batteries << endl;
    cout << "Technology                             : " << Technology << endl;
    cout << "Compatibility                          : " << Compatibility << endl << endl;
}