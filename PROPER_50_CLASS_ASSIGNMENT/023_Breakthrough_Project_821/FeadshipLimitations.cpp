#include "FeadshipLimitations.hpp"

Feadship_Limitations::Feadship_Limitations
        (std::string _1, std::string _2
        , std::string _3)
        {
            Ultra = _1;
            Specialized = _2;
            Niche = _3;
        }

void Feadship_Limitations::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------- L I M I T A T I O N S ----------------------------" << endl << endl;
   
    cout << "Ultra-high cost                : " << Ultra << endl;
    cout << "Specialized infrastructure     : " << Specialized << endl;
    cout << "Niche Ownership                : " << Niche << endl << endl;
}