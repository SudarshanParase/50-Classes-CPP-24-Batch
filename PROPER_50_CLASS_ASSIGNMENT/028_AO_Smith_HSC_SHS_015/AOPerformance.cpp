#include "AOPerformance.hpp"

AO_Performance::AO_Performance
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            Power = _1;
            Heating = _2;
            Dimensions = _3;
            Temperature = _4;
            Installation = _5;
        }

void AO_Performance::show()
{
    using std::cout;
    using std::endl;

    cout << "----------- P E R F O R M A N C E   &   U S E R    F E A T U R E S ------------" << endl << endl;

    cout << "Power Consumption              : " << Power << endl;
    cout << "Heating Time                   : " << Heating << endl;
    cout << "Dimensions                     : " << Dimensions << endl;
    cout << "Temperature Control            : " << Temperature << endl;
    cout << "Installation                   : " << Installation << endl << endl;
}