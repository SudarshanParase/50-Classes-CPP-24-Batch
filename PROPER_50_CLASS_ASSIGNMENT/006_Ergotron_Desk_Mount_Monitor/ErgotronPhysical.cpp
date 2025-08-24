#include "ErgotronPhysical.hpp"

E_Physical::E_Physical
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            Material_of_Construction = _1;
            Certifications = _2;
            Pole_Diameter = _3;
            Pole_Height = _4;
            Weight = _5;
        }

void E_Physical::show()
{
    using std::cout;
    using std::endl;
    
    cout << "---------------------------------- P H Y S I C A L -------------------------------" << endl << endl;
   
    cout << "Material of Construction           : " << Material_of_Construction << endl;
    cout << "Certifications                     : " << Certifications << endl;
    cout << "Pole Diameter                      : " << Pole_Diameter << endl;
    cout << "Pole Height                        : " << Pole_Height << endl;
    cout << "Weight                             : " << Weight << endl << endl;
}