#include "SolarVerdict.hpp"

Solar_Verdict::Solar_Verdict 
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 
    , std::string _5 )
    {
        Efficiency = _1;
        High = _2;
        Strong = _3;
        Longevity = _4;
        Optimized = _5;
    }

void Solar_Verdict::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------------- V E R D I C T -------------------------------" << endl << endl;

    cout << "Top-tier efficiency            : " << Efficiency << endl;
    cout << "High power Output              : " << High << endl;
    cout << "Strong Durability              : " << Strong << endl;
    cout << "Longevity                      : " << Longevity << endl;
    cout << "Optimized                      : " << Optimized << endl << endl;
}