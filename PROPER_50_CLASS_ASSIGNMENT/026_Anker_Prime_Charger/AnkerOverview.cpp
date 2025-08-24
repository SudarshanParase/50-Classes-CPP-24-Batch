#include "AnkerOverview.hpp"

Anker_Overview::Anker_Overview
    (std::string _1, std::string _2
    , std::string _3, std::string _4 
    , std::string _5)
    {
        Model = _1;
        Type = _2;
        Launch = _3;
        Price = _4;
        Tech = _5;
    }

void Anker_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model                          : " << Model << endl;
    cout << "Type                           : " << Type << endl;
    cout << "Launch Period                  : " << Launch << endl;
    cout << "Price (INR)                    : " << Price << endl;
    cout << "Technology                     : " << Tech << endl << endl;
}