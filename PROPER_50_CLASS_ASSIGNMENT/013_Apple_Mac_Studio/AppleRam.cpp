#include "AppleRam.hpp"

Apple_Ram::Apple_Ram
    (std::string _1, std::string _2
    , std::string _3, char _4)
    {
        Type = _1;
        Configurations = _2;
        Memory = _3;
        User = _4;
    }

void Apple_Ram::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------------ R A M ------------------------------------" << endl << endl;
    
    cout << "Type                           : " << Type << endl;
    cout << "Configurations                 : " << Configurations << endl;
    cout << "Memory Bandwidth               : " << Memory << endl;
    cout << "User Upgradable?               : " << User << endl << endl;
}