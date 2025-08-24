#include "HandkerchiefDesign.hpp"

Handkerchief_Design::Handkerchief_Design
            (std::string _1, std::string _2 
            , std::string _3 )
            {
                Primary = _1;
                Colorways = _2;
                Versatility = _3;
            }

void Handkerchief_Design::show()
{
    using std::cout;
    using std::endl;
 
    cout << "--------------- D E S I G N   M O T I F   &   C O L O U R S ---------------" << endl << endl;

    cout << "Primary Design                 : " << Primary << endl;
    cout << "Colorways                      : " << Colorways << endl;
    cout << "Versatility                    : " << Versatility << endl << endl;
}