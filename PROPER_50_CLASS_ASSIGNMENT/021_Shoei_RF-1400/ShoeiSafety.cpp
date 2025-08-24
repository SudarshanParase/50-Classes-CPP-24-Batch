#include "ShoeiSafety.hpp"

Shoei_Safety::Shoei_Safety
        (std::string _1, std::string _2 
        , std::string _3, std::string _4)
        {
            Shell = _1;
            Impact = _2;
            Safety = _3;
            Noise = _4;
        }

void Shoei_Safety::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- S A F E T Y   &   T E C H N O L O G Y --------------------" << endl << endl;
    
    cout << "Shell Construction             : " << Shell << endl;
    cout << "Impact Liner                   : " << Impact << endl;
    cout << "Safety Ratings                 : " << Safety << endl;
    cout << "Noise Reduction                : " << Noise << endl << endl;
}