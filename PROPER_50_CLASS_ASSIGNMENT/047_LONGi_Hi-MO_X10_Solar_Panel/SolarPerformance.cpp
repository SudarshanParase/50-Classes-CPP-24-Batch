#include "SolarPerformance.hpp"

Solar_Performance::Solar_Performance
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5 )
        {
            Efficiency = _1;
            Power = _2;
            Technology = _3;
            Degradation = _4;
            Temperature = _5;
        }

void Solar_Performance::show()
{
    using std::cout;
    using std::endl;
    
    cout << "------------------ P E R F O R M A N C E   M E T R I C S ------------------" << endl << endl;

    cout << "Efficiency                     : " << Efficiency << endl;
    cout << "Power Output                   : " << Power << endl;
    cout << "Technology                     : " << Technology << endl;
    cout << "Degradation Rate               : " << Degradation << endl;
    cout << "Temperature Coefficient        : " << Temperature << endl << endl;
}