#include "SolarDesign.hpp"

Solar_Design::Solar_Design
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5 )
        {
            Cell = _1;
            Module = _2;
            Bifacial = _3;
            Structural = _4;
            Warranty = _5;
        }

void Solar_Design::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- C E L L   &   M O D U L E   D E S I G N -----------------" << endl << endl; 

    cout << "Cell Type                      : " << Cell << endl;
    cout << "Module Size                    : " << Module << endl;
    cout << "Bifacial Capability            : " << Bifacial << endl;
    cout << "Structural Design              : " << Structural << endl;
    cout << "Warranty                       : " << Warranty << endl << endl;
}