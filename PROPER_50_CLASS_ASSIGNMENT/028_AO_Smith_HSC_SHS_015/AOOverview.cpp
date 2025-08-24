#include "AOOverview.hpp"

AO_Overview::AO_Overview
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 
    , std::string _5 )
    {
        Model = _1;
        Category = _2;
        Energy = _3;
        Price = _4;
        Target = _5;
    }

void AO_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Model                          : " << Model << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Energy Rating                  : " << Energy << endl;
    cout << "Price (INR)                    : " << Price << endl;
    cout << "Target Users                   : " << Target << endl << endl;
}