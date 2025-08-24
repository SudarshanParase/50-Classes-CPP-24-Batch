#include "JacketOverview.hpp"

Jacket_Overview::Jacket_Overview
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5)
        {
            Brand = _1;
            Model = _2;
            Category = _3;
            Release = _4;
            Target = _5;
        }

void Jacket_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Brand                          : " << Brand << endl;
    cout << "Model Name                     : " << Model << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Release Year                   : " << Release << endl;
    cout << "Target Audience                : " << Target << endl << endl;
}