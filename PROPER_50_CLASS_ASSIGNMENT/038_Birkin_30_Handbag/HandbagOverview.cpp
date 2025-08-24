#include "HandbagOverview.hpp"

Handbag_Overview::Handbag_Overview
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6)
        {
            Brand = _1;
            Model = _2;
            Bag = _3;
            Origin = _4;
            Release = _5;
            Target = _6;
        }

void Handbag_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Brand                          : " << Brand << endl;
    cout << "Model Name                     : " << Model << endl;
    cout << "Bag Type                       : " << Bag << endl;
    cout << "Origin                         : " << Origin << endl;
    cout << "Release History                : " << Release << endl;
    cout << "Target Audience                : " << Target << endl << endl;
}