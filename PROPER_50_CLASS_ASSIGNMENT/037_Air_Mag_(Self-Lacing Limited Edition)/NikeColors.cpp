#include "NikeColors.hpp"

Nike_Colors::Nike_Colors
    (std::string _1, std::string _2
    , std::string _3, std::string _4)
    {
        Main = _1;
        Design = _2;
        Branding = _3;
        Limited = _4;
    }

void Nike_Colors::show()
{
    using std::cout;
    using std::endl;

    cout << "------------ C O L O R S   &   D E S I G N   E L E M E N T S --------------" << endl << endl;

    cout << "Main Colorway                  : " << Main << endl;
    cout << "Design Style                   : " << Design << endl;
    cout << "Branding                       : " << Branding << endl;
    cout << "Limited Edition Tag            : " << Limited << endl << endl;
}