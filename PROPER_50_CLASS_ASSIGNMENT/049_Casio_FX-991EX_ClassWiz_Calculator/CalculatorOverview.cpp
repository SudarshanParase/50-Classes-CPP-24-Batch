#include "CalculatorOverview.hpp"

Calculator_Overview::Calculator_Overview
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5 )
        {
            Brand = _1;
            Model = _2;
            Category = _3;
            Released = _4;
            Ideal = _5;
        }

void Calculator_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "\n--------------------- G E N E R A L   O V E R V I E W ---------------------" << endl << endl; 
    
    cout << "Brand                          : " << Brand << endl;
    cout << "Model Name                     : " << Model << endl;
    cout << "Category                       : " << Category << endl;
    cout << "Released                       : " << Released << endl;
    cout << "Ideal For                      : " << Ideal << endl << endl;
}