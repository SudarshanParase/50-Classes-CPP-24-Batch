#include "HikvisionOverview.hpp"

Hikvision_Overview::Hikvision_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5)
        {
            Model = _1;
            Category = _2;
            Launched = _3;
            Use = _4;
            Price = _5;
        }

void Hikvision_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model                          : " << Model << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Launched                       : " << Launched << endl;
    cout << "Use Case                       : " << Use << endl;
    cout << "Price (India)                  : " << Price << endl << endl;
}