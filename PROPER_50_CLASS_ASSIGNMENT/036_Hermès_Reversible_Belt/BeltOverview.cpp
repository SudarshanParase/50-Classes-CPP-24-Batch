#include "BeltOverview.hpp"

Belt_Overview::Belt_Overview
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6)
        {
            Brand = _1;
            Model = _2;
            Year = _3;
            Category = _4;
            Gender = _5;
            Status = _6;
        }

void Belt_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Brand                          : " << Brand << endl;
    cout << "Model Name                     : " << Model << endl;
    cout << "Year Introduced                : " << Year << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Gender                         : " << Gender << endl;
    cout << "Status                         : " << Status << endl << endl;
}