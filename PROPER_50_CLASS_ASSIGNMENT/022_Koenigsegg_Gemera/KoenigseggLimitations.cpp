#include "KoenigseggLimitations.hpp"

Koenigsegg_Limitations::Koenigsegg_Limitations
            (std::string _1, std::string _2
            , std::string _3)
            {
                Ultra = _1;
                Cost = _2;
                Service = _3;
            }

void Koenigsegg_Limitations::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------- L I M I T A T I O N S ----------------------------" << endl << endl;
    
    cout << "Ultra-Exclusive                : " << Ultra << endl;
    cout << "Cost                           : " << Cost << endl;
    cout << "Service Complexity             : " << Service << endl << endl;
}