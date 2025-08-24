#include "RouterDesign.hpp"

Router_Design::Router_Design
    (std::string _1, std::string _2
    , std::string _3, std::string _4 
    , std::string _5)
    {
        Design = _1;
        Ventilation = _2;
        Cooling = _3;
        Size = _4;
        Weight = _5;
    }

void Router_Design::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- T H E R M A L S   &   D E S I G N --------------------" << endl << endl;

    cout << "Design Style                   : " << Design << endl;
    cout << "Ventilation                    : " << Ventilation << endl;
    cout << "Cooling                        : " << Cooling << endl;
    cout << "Size                           : " << Size << endl;
    cout << "Weight                         : " << Weight << endl << endl;
}