// Header File Inclusion
#include "AquaAdvantages.hpp"

Aqua_Advantages::Aqua_Advantages
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Max = _1;
            High = _2;
            Lab = _3;
            Compact = _4;
        }

void Aqua_Advantages::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------------- A D V A N T A G E S -----------------------------" << endl << endl;

    cout << "Maximum Purity                 : " << Max << endl;
    cout << "High User Convenience          : " << High << endl;
    cout << "Lab-Tested Excellence          : " << Lab << endl;
    cout << "Compact & Affordable           : " << Compact << endl << endl;
}