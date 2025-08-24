#include "GlassesWireless.hpp"

Glasses_Wireless::Glasses_Wireless(std::string _1
                                , std::string _2)
                {
                    Wireless = _1;
                    Mobile_App = _2;
                }

void Glasses_Wireless::show()
{
    using std::cout;
    using std::endl;

    
    cout << "------------------------- W I R E L E S S -------------------------" << endl << endl;
    
    cout << "Wireless                                   : " << Wireless << endl;
    cout << "Mobile App Compatible                      : " << Mobile_App << endl;
}