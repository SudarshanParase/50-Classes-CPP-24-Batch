#include "HandkerchiefMaterial.hpp"

Handkerchief_Material::Handkerchief_Material
        (std::string _1, std::string _2 
        , std::string _3, std::string _4)
        {
            Fabric = _1;
            Edges = _2;
            Weave = _3;
            Finish = _4;
        }

void Handkerchief_Material::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------- M A T E R I A L   &   C O N S T R U C T I O N --------------" << endl << endl;

    cout << "Fabric                         : " << Fabric << endl;
    cout << "Edges                          : " << Edges << endl;
    cout << "Weave Style                    : " << Weave << endl;
    cout << "Finish                         : " << Finish << endl << endl;
}