// Header File Inclusion
#include "PowerPhysical.hpp"

Power_Physical::Power_Physical
        (std::string _1, char _2 
        , std::string _3, char _4 
        , std::string _5, std::string _6 
        , std::string _7)
        {
            Color = _1;
            Handles = _2;
            Cooling = _3;
            Environmental = _4;
            Construction = _5;
            Dimensions = _6;
            Weight = _7;
        }

void Power_Physical::show()
{
    using std::cout;
    using std::endl;
    
    cout << "---------------------------------- P H Y S I C A L -------------------------------" << endl << endl;

    cout << "Color                              : " << Color << endl;
    cout << "Handles                            : " << Handles << endl;
    cout << "Cooling                            : " << Cooling << endl;
    cout << "Environmental Resistance           : " << Environmental << endl;
    cout << "Construction Material              : " << Construction << endl;
    cout << "Dimensions                         : " << Dimensions << endl;
    cout << "Weight                             : " << Weight << endl << endl;
}