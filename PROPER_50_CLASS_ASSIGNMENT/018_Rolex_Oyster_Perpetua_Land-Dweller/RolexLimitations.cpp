#include "RolexLimitations.hpp"

Rolex_Limitations::Rolex_Limitations
        (std::string _1, std::string _2
        , std::string _3)
        {
            High = _1;
            Limited = _2;
            Niche = _3;
        }

void Rolex_Limitations::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------- L I M I T A T I O N S -----------------------------" << endl << endl;
    
    cout << "High Price Entry               : " << High << endl;
    cout << "Limited Practical Complications: " << Limited << endl;
    cout << "Niche Appeal                   : " << Niche << endl << endl;
}