#include "KettlePerformance.hpp"

Kettle_Performance::Kettle_Performance
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 )
        {
            Longevity = _1;
            Safety = _2;
            Noise = _3;
            Low = _4;
        }

void Kettle_Performance::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- P E R F O R M A N C E   &   S A F E T Y -----------------" << endl << endl;

    cout << "Longevity & Durability         : " << Longevity << endl;
    cout << "Safety Features                : " << Safety << endl;
    cout << "Noise Level                    : " << Noise << endl;
    cout << "Low-Minimum Fill               : " << Low << endl << endl;
}