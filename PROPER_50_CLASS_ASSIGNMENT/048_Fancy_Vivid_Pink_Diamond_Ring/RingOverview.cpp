// Header File Inclusion
#include "RingOverview.hpp"

Ring_Overview::Ring_Overview
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6)
        {
            Gemstone = _1;
            Carat = _2;
            Cut = _3;
            Clarity = _4;
            Diamond = _5;
            Setting = _6;
        }

void Ring_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Gemstone                       : " << Gemstone << endl;
    cout << "Carat Weight                   : " << Carat << endl;
    cout << "Cut                            : " << Cut << endl;
    cout << "Clarity                        : " << Clarity << endl;
    cout << "Diamond Type                   : " << Diamond << endl;
    cout << "Setting                        : " << Setting << endl << endl;
}