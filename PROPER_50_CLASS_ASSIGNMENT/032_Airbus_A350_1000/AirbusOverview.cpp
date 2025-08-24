#include "AirbusOverview.hpp"

Airbus_Overview::Airbus_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6)
        {
            Model = _1;
            Family = _2;
            Entry = _3;
            Typical = _4;
            Range = _5;
            Primary = _6;
        }

void Airbus_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model                          : " << Model << endl;
    cout << "Family                         : " << Family << endl;
    cout << "Entry into Service             : " << Entry << endl;
    cout << "Typical Seating                : " << Typical << endl;
    cout << "Range                          : " << Range << endl;
    cout << "Primary Role                   : " << Primary << endl << endl;
}