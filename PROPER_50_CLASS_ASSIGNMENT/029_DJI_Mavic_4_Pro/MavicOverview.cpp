#include "MavicOverview.hpp"

Mavic_Overview::Mavic_Overview
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5)
    {
        Model = _1;
        Launched = _2;
        Category = _3;
        Starting = _4;
        US = _5;
    }

void Mavic_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E N E R A L   &   O V E R V I E W ---------------------" << endl << endl; 

    cout << "Model                          : " << Model << endl;
    cout << "Launched                       : " << Launched << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Starting Price                 : " << Starting << endl;
    cout << "U.S. Availability              : " << US << endl << endl;
}