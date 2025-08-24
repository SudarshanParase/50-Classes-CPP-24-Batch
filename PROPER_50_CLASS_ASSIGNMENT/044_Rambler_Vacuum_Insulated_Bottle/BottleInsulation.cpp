#include "BottleInsulation.hpp"

Bottle_Insulation::Bottle_Insulation
            (std::string _1, std::string _2 
            , std::string _3)
            {
                Construction = _1;
                Hot = _2;
                No = _3;
            }

void Bottle_Insulation::show()
{
    using std::cout;
    using std::endl;
 
    cout << "----- I N S U L A T I O N   &   T H E R M A L   P E R F O R M A N C E -----" << endl << endl;
    
    cout << "Construction                   : " << Construction << endl;
    cout << "Hot/Cold Retention             : " << Hot << endl;
    cout << "No Condensation                : " << No << endl << endl;

}