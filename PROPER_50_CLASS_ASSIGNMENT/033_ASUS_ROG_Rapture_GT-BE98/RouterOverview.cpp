#include "RouterOverview.hpp"

Router_Overview::Router_Overview
        (std::string _1, short int _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6)
        {
            Model = _1;
            Release_Year = _2;
            Wifi = _3;
            Bands = _4;
            Max = _5;
            Target = _6;
        }

void Router_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model Name                     : " << Model << endl;
    cout << "Release Year                   : " << Release_Year << endl;
    cout << "Wi-Fi Standard                 : " << Wifi << endl;
    cout << "Bands                          : " << Bands << endl;
    cout << "Max Speed                      : " << Max << endl;
    cout << "Target Audience                : " << Target << endl << endl;
}