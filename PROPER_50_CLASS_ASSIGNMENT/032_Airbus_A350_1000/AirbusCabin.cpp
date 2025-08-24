#include "AirbusCabin.hpp"

Airbus_Cabin::Airbus_Cabin
    (std::string _1, std::string _2
    , std::string _3, std::string _4 
    , std::string _5, std::string _6 
    , std::string _7)
    {
        Airspace = _1;
        Passenger = _2;
        IFE = _3;
        First_Class = _4;
        Business_Class = _5;
        Premium_Economy = _6;
        Economy = _7;
    }

void Airbus_Cabin::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------- C A B I N   F E A T U R E S -------------------------" << endl << endl;

    cout << "Airspace Cabin                 : " << Airspace << endl;
    cout << "Passenger Wellbeing            : " << Passenger << endl;
    cout << "IFE & Connectivity             : " << IFE << endl;
    cout << "First Class                    : " << First_Class << endl;
    cout << "Business Class                 : " << Business_Class << endl;
    cout << "Premium Economy                : " << Premium_Economy << endl;
    cout << "Economy                        : " << Economy << endl << endl;
}