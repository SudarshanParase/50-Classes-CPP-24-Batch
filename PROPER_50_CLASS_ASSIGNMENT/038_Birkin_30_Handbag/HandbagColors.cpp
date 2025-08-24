#include "HandbagColors.hpp"

Handbag_Colors::Handbag_Colors
        (std::string _1, std::string _2 
        , std::string _3, std::string _4)
        {
            Popular = _1;
            Interior = _2;
            Stitching = _3;
            Custom = _4;
        }

void Handbag_Colors::show()
{
    using std::cout;
    using std::endl;
     
    cout << "--------------- C O L O R S   &   C U S T O M I Z A T I O N ---------------" << endl << endl;

    cout << "Popular Colors                 : " << Popular << endl;
    cout << "Interior Color                 : " << Interior << endl;
    cout << "Stitching                      : " << Stitching << endl;
    cout << "Custom Orders                  : " << Custom << endl << endl;
}