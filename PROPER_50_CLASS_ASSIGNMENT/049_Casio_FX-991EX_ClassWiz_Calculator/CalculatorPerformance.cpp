#include "CalculatorPerformance.hpp"

Calculator_Performance::Calculator_Performance
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 )
        {
            Processor = _1;
            Power = _2;
            Build = _3;
            Warranty = _4;
        }

void Calculator_Performance::show()
{
    using std::cout;
    using std::endl;
 
    cout << "----------- P E R F O R M A N C E   &   C O N S T R U C T I O N -----------" << endl << endl;

    cout << "Processor Speed                : " << Processor << endl;
    cout << "Power Source                   : " << Power << endl;
    cout << "Build Quality                  : " << Build << endl;
    cout << "Warranty & Support             : " << Warranty << endl << endl;
}