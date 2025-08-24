#include "FeadshipDimensions.hpp"

Feadship_Dimensions::Feadship_Dimensions
        (float _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            Length = _1;
            Beam = _2;
            Draft = _3;
            Gross_Tonnage = _4;
            Hull = _5;
        }

void Feadship_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- D I M E N S I O N S   &   V O L U M E --------------------" << endl << endl;

    cout << "Length Overall                 : " << Length << " m" << endl;
    cout << "Beam                           : " << Beam << endl;
    cout << "Gross Tonnage                  : " << Gross_Tonnage << endl;
    cout << "Hull & Superstructure          : " << Hull << endl << endl;
}