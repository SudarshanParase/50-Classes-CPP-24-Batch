#include "SolarThermal.hpp"

Solar_Thermal::Solar_Thermal
    (std::string _1, std::string _2 
    , std::string _3 )
    {
        Resilience = _1;
        Annual = _2;
        Low = _3;
    }

void Solar_Thermal::show()
{
    using std::cout;
    using std::endl;

    cout << "---- T H E R M A L   &   D E G R A D A T I O N   P E R F O R M A N C E ----" << endl << endl;

    cout << "High-Temperature Resilience    : " << Resilience << endl;
    cout << "Annual Degradation             : " << Annual << endl;
    cout << "Low Temp Coefficient           : " << Low << endl << endl;
}