#include "SolarOverview.hpp"

Solar_Overview::Solar_Overview
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5)
        {
            Manufacturer = _1;
            Model = _2;
            Category = _3;
            Release = _4;
            Target = _5;
        }

void Solar_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "\n--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Manufacturer                   : " << Manufacturer << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Release Year                   : " << Release << endl;
    cout << "Target Market                  : " << Target << endl << endl;
}