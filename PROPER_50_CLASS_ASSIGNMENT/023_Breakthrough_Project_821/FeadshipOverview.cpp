#include "FeadshipOverview.hpp"

Feadship_Overview::Feadship_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            Model = _1;
            Launch = _2;
            Category = _3;
            Builder = _4;
            Designers = _5;
        }

void Feadship_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model / Hull                   : " << Model << endl;
    cout << "Launch / Delivery              : " << Launch << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Builder                        : " << Builder << endl;
    cout << "Designers                      : " << Designers << endl << endl;

}