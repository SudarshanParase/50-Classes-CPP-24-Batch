#include "PerfumeBottle.hpp"

Perfume_Bottle::Perfume_Bottle  
        (std::string _1, std::string _2 
        , std::string _3 )
        {
            Bottle = _1;
            Volume = _2;
            Packaging = _3;
        }

void Perfume_Bottle::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------- B O T T L E   &   P A C K A G I N G -------------------" << endl << endl;

    cout << "Bottle Design                  : " << Bottle << endl;
    cout << "Volume Options                 : " << Volume << endl;
    cout << "Packaging Style                : " << Packaging << endl << endl;
}