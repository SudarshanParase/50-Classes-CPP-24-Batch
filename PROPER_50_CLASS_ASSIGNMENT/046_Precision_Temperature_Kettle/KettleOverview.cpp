#include "KettleOverview.hpp"

Kettle_Overview::Kettle_Overview
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 )
    {
        Brand = _1; 
        Model = _2;
        Capacity = _3;
        Category = _4;
    }

void Kettle_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "\n--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Brand                          : " << Brand << endl;
    cout << "Model                          : " << Model << endl;
    cout << "Capacity                       : " << Capacity << endl;
    cout << "Category                       : " << Category << endl << endl;
}