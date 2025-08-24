#include "KettleDesign.hpp"

Kettle_Design::Kettle_Design
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 )
        {
            Aesthetic = _1;
            Usability = _2;
            Maintenance = _3;
            Warranty = _4;
        }

void Kettle_Design::show()
{
    using std::cout;
    using std::endl;
 
    cout << "------------- U S E R   E X P E R I E N C E   &   D E S I G N -------------" << endl << endl;

    cout << "Aesthetic Style                : " << Aesthetic << endl;
    cout << "Usability                      : " << Usability << endl;
    cout << "Maintenance                    : " << Maintenance << endl;
    cout << "Warranty                       : " << Warranty << endl << endl;
}