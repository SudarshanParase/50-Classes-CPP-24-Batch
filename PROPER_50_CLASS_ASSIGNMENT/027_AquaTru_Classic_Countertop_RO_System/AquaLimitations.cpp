// Header Fil Inclusion
#include "AquaLimitations.hpp"

Aqua_Limitations::Aqua_Limitations
        (std::string _1, std::string _2
        , std::string _3)
        {
            Water = _1;
            No = _2;
            Replacement = _3;
        }

void Aqua_Limitations::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------- L I M I T A T I O N S ----------------------------" << endl << endl;

    cout << "Water Waste                    : " << Water << endl;
    cout << "No Mineralization              : " << No << endl;
    cout << "Replacement Costs              : " << Replacement << endl << endl;
}