#include "ArrmaOverview.hpp"

Arrma_Overview::Arrma_Overview
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7)
        {
            Model_Name = _1;
            Scale = _2;
            Vehicle_Type = _3;
            Recommended_Use = _4;
            Top_Speed = _5;
            Skill_Level = _6;
            RTR = _7;
        }

void Arrma_Overview::show()
{
    using std::cout;
    using std::endl;
 
    cout << "------------------------------------ O V E R V I E W ------------------------------------" << endl << endl;
    
    cout << "Model Name                             : " << Model_Name << endl;
    cout << "Scale                                  : " << Scale << endl;
    cout << "Vehicle Type                           : " << Vehicle_Type << endl;
    cout << "Recommended Use                        : " << Recommended_Use << endl;
    cout << "Top Speed                              : " << Top_Speed << endl;
    cout << "Skill Level                            : " << Skill_Level << endl;
    cout << "RTR (Ready to Run)                     : " << RTR << endl << endl;
}