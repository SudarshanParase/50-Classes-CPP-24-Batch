#include "HikvisionBuild.hpp"

Hikvision_Build::Hikvision_Build
        (std::string _1, std::string _2
        , std::string _3)
        {
            Housing = _1;
            Operating = _2;
            Power = _3;
        }

void Hikvision_Build::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- B U I L D   &   E N V I R O N M E N T --------------------" << endl << endl;
 
    cout << "Housing                        : " << Housing << endl;
    cout << "Operating Temp                 : " << Operating << endl;
    cout << "Power                          : " << Power << endl << endl;
}