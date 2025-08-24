// Header File Inclusion
#include "ShoeiVentilation.hpp"

Shoei_Ventilation::Shoei_Ventilation
    (std::string _1, std::string _2)
    {
        Ventilation = _1;
        Aerodynamics = _2;
    }

void Shoei_Ventilation::show()
{
    using std::cout;
    using std::endl;

    cout << "------------- V E N T I L A T I O N   &   A E R O D Y N A M I C S -------------" << endl << endl;
    
    cout << "Ventilation                    : " << Ventilation << endl;
    cout << "Aerodynamics                   : " << Aerodynamics << endl << endl;
}