#include "AOHighlights.hpp"

AO_Highlights::AO_Highlights
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 
    , std::string _5)
    {
        Glass = _1;
        High = _2;
        Fast = _3;
        Built = _4;
        Reliable = _5;
    }

void AO_Highlights::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------------- H I G H L I G H T S -----------------------------" << endl << endl;

    cout << "Glass-Lined Tank               : " << Glass << endl;
    cout << "High Energy-Saving Potential   : " << High << endl;
    cout << "Fast Heating                   : " << Fast << endl;
    cout << "Built for high-rise            : " << Built << endl;
    cout << "Reliable Brand                 : " << Reliable << endl << endl;
}