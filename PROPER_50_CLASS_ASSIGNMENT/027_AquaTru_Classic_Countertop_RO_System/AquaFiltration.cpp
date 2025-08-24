// Header File Inclusion
#include "AquaFiltration.hpp"

Aqua_Filtration::Aqua_Filtration
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Filtration = _1;
            Contaminant = _2;
            TDS = _3;
            Production = _4;
        }

void Aqua_Filtration::show()
{
    using std::cout;
    using std::endl;

    cout << "-------- F I L T R A T I O N   S Y S T E M   &   P E R F O R M A N C E --------" << endl << endl;

    cout << "Filtrartion                    : " << Filtration << endl;
    cout << "Contaminant Removal            : " << Contaminant << endl;
    cout << "TDS Output                     : " << TDS << endl;
    cout << "Production Rate                : " << Production << endl << endl;
}