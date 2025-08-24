#include "RaybanOverview.hpp"

Rayban_Overview::Rayban_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6)
        {
            Brand = _1;
            Model = _2;
            Release = _3;
            Product = _4;
            Gender = _5;
            Heritage = _6;
        }

void Rayban_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Brand                          : " << Brand << endl;
    cout << "Model Name                     : " << Model << endl;
    cout << "Release Year                   : " << Release << endl;
    cout << "Product Type                   : " << Product << endl;
    cout << "Gender                         : " << Gender << endl;
    cout << "Heritage                       : " << Heritage << endl << endl;    
}