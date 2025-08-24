#include "BottleOverview.hpp"

Bottle_Overview::Bottle_Overview
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5 )
        {
            Brand = _1;
            Model = _2;
            Category = _3;
            Main = _4;
            Notable = _5;
        }

void Bottle_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Brand                          : " << Brand << endl;
    cout << "Model                          : " << Model << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Main Use                       : " << Main << endl;
    cout << "Notable In '25                 : " << Notable << endl << endl;
}