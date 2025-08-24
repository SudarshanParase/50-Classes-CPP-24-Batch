#include "HandbagMaterials.hpp"

Handbag_Materials::Handbag_Materials
        (std::string _1, std::string _2 
        , std::string _3, std::string _4)
        {
            Exterior = _1;
            Interior = _2;
            Finish = _3;
            Other = _4;
        }

void Handbag_Materials::show()
{
    using std::cout;
    using std::endl;
 
    cout << "----------------- M A T E R I A L S   &   L E A T H E R S -----------------" << endl << endl;

    cout << "Exterior Leather               : " << Exterior << endl;
    cout << "Interior Lining                : " << Interior << endl;
    cout << "Finish                         : " << Finish << endl;
    cout << "Other Leather Options          : " << Other << endl << endl;
}