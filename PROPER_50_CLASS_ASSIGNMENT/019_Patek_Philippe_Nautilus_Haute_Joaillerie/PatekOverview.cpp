#include "PatekOverview.hpp"

Patek_Overview::Patek_Overview
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5)
    {
        Model = _1;
        Unveiled = _2;
        Category = _3;
        Case = _4;
        Price = _5;
    }

void Patek_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model                          : " << Model << endl;
    cout << "Unveiled                       : " << Unveiled << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Case Sizes                     : " << Case << endl;
    cout << "Price Range                    : " << Price << endl;

}