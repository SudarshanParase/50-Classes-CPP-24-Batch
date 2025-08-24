#include "AmazonOverview.hpp"

Amazon_Overview::Amazon_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4 
        , std::string _5, std::string _6)
        {
            Model = _1;
            Release_Date = _2;
            Price_Range = _3;
            Smart_Assistant = _4;
            Display_Type = _5;
            Use_Case = _6;
        }

void Amazon_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- G E N E R A L   O V E R V I E W -----------------------" << endl << endl;
    
    cout << "Model                          : " << Model << endl;
    cout << "Release Date                   : " << Release_Date << endl;
    cout << "Price Range (INR)              : " << Price_Range << endl;
    cout << "Smart Assistant                : " << Smart_Assistant << endl;
    cout << "Display Type                   : " << Display_Type<< endl;
    cout << "Use Case                       : " << Use_Case << endl << endl;
}