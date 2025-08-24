#include "RaybanTechnology.hpp"

Rayban_Technology::Rayban_Technology
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            Polarization = _1;
            Anti = _2;
            Hydrophobic = _3;
            Impact = _4;
            Hand = _5;
        }

void Rayban_Technology::show()
{
    using std::cout;
    using std::endl;

    cout << "------------- T E C H N O L O G Y   &   E N G I N E E R I N G -------------" << endl << endl;
   
    cout << "Polarization Technology        : " << Polarization << endl;
    cout << "Anti-Reflective Coating        : " << Anti << endl;
    cout << "Hydrophobic/Oleophobic         : " << Hydrophobic << endl;
    cout << "Impact Resistance              : " << Impact << endl;
    cout << "Hand Assembly                  : " << Hand << endl << endl;
}