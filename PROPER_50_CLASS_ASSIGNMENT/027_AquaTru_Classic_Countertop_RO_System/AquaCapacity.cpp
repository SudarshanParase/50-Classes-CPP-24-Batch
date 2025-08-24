// Header File Inclusion
#include "AquaCapacity.hpp"

Aqua_Capacity::Aqua_Capacity
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Holding = _1;
            Footprint = _2;
            Installation = _3;
            Maintenance = _4;
        }

void Aqua_Capacity::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------- C A P A C I T Y   &   U S A B I L I T Y -------------------" << endl << endl; 

    cout << "Holding Tank                   : " << Holding << endl;
    cout << "Footprint                      : " << Footprint << endl;
    cout << "Installation                   : " << Installation << endl;
    cout << "Maintenance                    : " << Maintenance << endl << endl;
}