// Header File Inclusion
#include "RingGemological.hpp"

Ring_Gemological::Ring_Gemological
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 )
    {
        Color = _1;
        Exceptional = _2;
        Type = _3;
        Provenance = _4;
    }

void Ring_Gemological::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------ G E M O L O G I C A L   D E T A I L S ------------------" << endl << endl;

    cout << "Color                          : " << Color << endl;
    cout << "Exceptional Clarity            : " << Exceptional << endl;
    cout << "Type                           : " << Type << endl;
    cout << "Provenance                     : " << Provenance << endl << endl;
}