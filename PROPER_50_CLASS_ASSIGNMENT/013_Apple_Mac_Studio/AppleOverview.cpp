#include "AppleOverview.hpp"

Apple_Overview::Apple_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4 
        , std::string _5, std::string _6
        , std::string _7)
        {
            Model = _1;
            Price = _2;
            Release_Date = _3;
            Target = _4;
            Form_factor = _5;
            Build_Material = _6;
            Color = _7;
        }

void Apple_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- G E N E R A L   O V E R V I E W -----------------------" << endl << endl;
    
    cout << "Model                          : " << Model << endl;
    cout << "Price (INR)                    : " << Price << endl;
    cout << "Release Date                   : " << Release_Date << endl;
    cout << "Target Audience                : " << Target << endl;
    cout << "Form Factor                    : " << Form_factor << endl;
    cout << "Build Material                 : " << Build_Material << endl;
    cout << "Color                          : " << Color << endl << endl;
}