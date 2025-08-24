#include "JacketMaterial.hpp"

Jacket_Material::Jacket_Material
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 
    , std::string _5 )
    {
        Main = _1;
        Lining = _2;
        Hardware = _3;
        Stitching = _4;
        Finish = _5;
    }

void Jacket_Material::show()
{
    using std::cout;
    using std::endl;
 
    cout << "------------------ M A T E R I A L S   &   Q U A L I T Y ------------------" << endl << endl;

    cout << "Main Fabric                    : " << Main << endl;
    cout << "Lining                         : " << Lining << endl;
    cout << "Hardware                       : " << Hardware << endl;
    cout << "Stitching                      : " << Stitching << endl;
    cout << "Finish                         : " << Finish << endl << endl;
}