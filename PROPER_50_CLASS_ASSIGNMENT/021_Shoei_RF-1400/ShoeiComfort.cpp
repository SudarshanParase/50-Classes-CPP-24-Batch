#include "ShoeiComfort.hpp"

Shoei_Comfort::Shoei_Comfort
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Interior = _1;
            Helmet = _2;
            Controls = _3;
            Extras = _4;
        }

void Shoei_Comfort::show()
{
    using std::cout;
    using std::endl;

    cout << "----------- C O M F O R T   &   U S A B I L I T Y   F E A T U R E S -----------" << endl << endl;
   
    cout << "Interior                       : " << Interior << endl;
    cout << "Helmet Care                    : " << Helmet << endl;
    cout << "Controls                       : " << Controls << endl;
    cout << "Extras                         : " << Extras << endl << endl;
}