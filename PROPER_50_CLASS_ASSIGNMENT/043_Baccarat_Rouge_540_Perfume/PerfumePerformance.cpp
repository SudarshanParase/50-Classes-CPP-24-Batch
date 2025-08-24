#include "PerfumePerformance.hpp"

Perfume_Performance::Perfume_Performance
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 )
        {
            Longevity = _1;
            Sillage = _2;
            Strength = _3;
            Versatility = _4;
        }

void Perfume_Performance::show()
{
    using std::cout;
    using std::endl;

    cout << "---------- P E R F O R M A N C E   C H A R A C T E R I S T I C S ----------" << endl << endl;

    cout << "Longevity                      : " << Longevity << endl;
    cout << "Sillage / Projection           : " << Sillage << endl;
    cout << "Silage Strength                : " << Strength << endl;
    cout << "Versatility                    : " << Versatility << endl <<  endl;
}