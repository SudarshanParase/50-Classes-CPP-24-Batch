#include "ChargerOverview.hpp"

Charger_Overview::Charger_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6)
        {
            Model = _1;
            Launch_Year = _2;
            Price = _3;
            Category = _4;
            Warranty = _5;
            Use_Cases = _6;
        }

void Charger_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model                          : " << Model << endl;
    cout << "Launch Year                    : " << Launch_Year << endl;
    cout << "Price                          : " << Price << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Warranty                       : " << Warranty << endl;
    cout << "Use Cases                      : " << Use_Cases << endl << endl;
}