// Header File Inclusion
#include "AquaOverview.hpp"

Aqua_Overview::Aqua_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6)
        {
            Model = _1;
            Category = _2;
            Release = _3;
            Use = _4;
            Price = _5;
            Certifications = _6;
        }

void Aqua_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Model                          : " << Model << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Release Year                   : " << Release << endl;
    cout << "Use Case                       : " << Use << endl;
    cout << "Price (INR)                    : " << Price << endl;
    cout << "Certifications                 : " << Certifications << endl << endl;
}