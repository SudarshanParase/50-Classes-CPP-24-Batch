#include "PerfumeOverview.hpp"

Perfume_Overview::Perfume_Overview
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 
    , std::string _5, std::string _6 )
    {
        Brand = _1;
        Fragrance = _2;
        Category = _3;
        Initial = _4;
        Designer = _5;
        Target = _6;
    }

void Perfume_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Brand                          : " << Brand << endl;
    cout << "Fragrance Name                 : " << Fragrance << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Initial Release                : " << Initial << endl;
    cout << "Designer Perfumer              : " << Designer << endl;
    cout << "Target Audience                : " << Target << endl << endl;
}