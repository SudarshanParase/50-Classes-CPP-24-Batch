#include "ShoeiOverview.hpp"

Shoei_Overview::Shoei_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6)
        {
            Model = _1;
            Position = _2;
            Materials = _3;
            Price = _4;
            Certifications = _5;
            Primary = _6;
        }

void Shoei_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model                          : " << Model << endl;
    cout << "Position                       : " << Position << endl;
    cout << "Materials                      : " << Materials << endl;
    cout << "Price (USD)                    : " << Price << endl;
    cout << "Certifications                 : " << Certifications << endl;
    cout << "Primary Use                    : " << Primary << endl << endl;
}