#include "BeltMaterials.hpp"

Belt_Materials::Belt_Materials
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 
    , std::string _5)
    {
        Strap = _1;
        Buckle = _2;
        Craftsmanship = _3;
        Stitching = _4;
        Edge = _5;
    }

void Belt_Materials::show()
{
    using std::cout;
    using std::endl;

    cout << "----------- M A T E R I A L S   &   B U I L D   Q U A L I T Y -------------" << endl << endl;

    cout << "Strap Leather                  : " << Strap << endl;
    cout << "Buckle Material                : " << Buckle << endl;
    cout << "Craftsmanship                  : " << Craftsmanship << endl;
    cout << "Stitching                      : " << Stitching << endl;
    cout << "Edge Finish                    : " << Edge << endl << endl;
}