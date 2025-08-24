#include "AppleOverview.hpp"

Apple_Overview::Apple_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7 )
        {
            Model = _1;
            Release_Date = _2;
            Price = _3;
            Category = _4;
            Target_Audience = _5;
            Material = _6;
            Color = _7;
        }

void Apple_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl;
    
    cout << "Model                          : " << Model << endl;
    cout << "Release Date                   : " << Release_Date << endl;
    cout << "Price (INR)                    : " << Price << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Target Audience                : " << Target_Audience << endl;
    cout << "Material                       : " << Material << endl;
    cout << "Color                          : " << Color << endl << endl;
}