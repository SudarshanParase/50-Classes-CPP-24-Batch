#include "BeltBuckle.hpp"

Belt_Buckle::Belt_Buckle
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            Buckle = _1;
            Attachment = _2;
            Material = _3;
            Customization = _4;
            Iconic = _5;
        }

void Belt_Buckle::show()
{
    using std::cout;
    using std::endl;
 
    cout << "----------------------- B U C K L E   D E T A I L S -----------------------" << endl << endl;

    cout << "Buckle Type                    : " << Buckle << endl;
    cout << "Attachment                     : " << Attachment << endl;
    cout << "Material                       : " << Material << endl;
    cout << "Customization                  : " << Customization << endl;
    cout << "Iconic Status                  : " << Iconic << endl << endl;
}