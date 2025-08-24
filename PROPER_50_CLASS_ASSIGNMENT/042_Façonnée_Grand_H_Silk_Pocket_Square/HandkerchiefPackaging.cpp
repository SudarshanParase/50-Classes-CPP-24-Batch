#include "HandkerchiefPackaging.hpp"

Handkerchief_Packaging::Handkerchief_Packaging
        (std::string _1, std::string _2 
        , std::string _3 )
        {
            Pocket = _1;
            Presentation = _2;
            Dust = _3;
        }

void Handkerchief_Packaging::show()
{
    using std::cout;
    using std::endl;

    cout << "------------- P A C K A G I N G   &   P R E S E N T A T I O N -------------" << endl << endl;

    cout << "Pocket Square                  : " << Pocket << endl;
    cout << "Presentation Box               : " << Presentation << endl;
    cout << "Dust Bag                       : " << Dust << endl << endl;
}