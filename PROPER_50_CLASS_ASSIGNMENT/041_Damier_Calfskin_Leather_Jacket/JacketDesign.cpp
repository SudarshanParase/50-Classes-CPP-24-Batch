#include "JacketDesign.hpp"

Jacket_Design::Jacket_Design
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6 )
        {
            Exterior = _1;
            Shoulder = _2;
            Pockets = _3;
            Sleeve = _4;
            Back = _5;
            Signature = _6;
        }

void Jacket_Design::show()
{
    using std::cout;
    using std::endl;

    cout << "-------- D E S I G N   &   P E R F O R M A N C E   F E A T U R E S --------" << endl << endl;

    cout << "Exterior Pattern               : " << Exterior << endl;
    cout << "Shoulder Design                : " << Shoulder << endl;
    cout << "Pockets                        : " << Pockets << endl;
    cout << "Sleeve Detail                  : " << Sleeve << endl;
    cout << "Back Vent                      : " << Back << endl;
    cout << "Signature Branding             : " << Signature << endl << endl;
}