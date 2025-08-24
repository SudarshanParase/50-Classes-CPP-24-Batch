#include "RolexOverview.hpp"

Rolex_Overview::Rolex_Overview
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5, std::string _6)
    {
        Model = _1;
        Launch_Year = _2;
        Case = _3;
        Materials = _4;
        Price = _5;
        Intent = _6;
    }

void Rolex_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model                          : " << Model << endl;
    cout << "Launch Year                    : " << Launch_Year << endl;
    cout << "Case Sizes                     : " << Case << endl;
    cout << "Materials                      : " << Materials << endl;
    cout << "Price Range                    : " << Price << endl;
    cout << "Intent                         : " << Intent << endl << endl;
}