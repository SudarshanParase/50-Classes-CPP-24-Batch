#include "HikvisionSmart.hpp"

Hikvision_Smart::Hikvision_Smart
        (std::string _1, std::string _2 
        , std::string _3, std::string _4)
        {
            AI_Detection = _1;
            Smart = _2;
            Privacy = _3;
            Edge = _4;
        }

void Hikvision_Smart::show()
{
    using std::cout;
    using std::endl;
 
    cout << "------------- S M A R T   F E A T U R E S   &   A N A L Y T I C S -------------" << endl << endl;
  
    cout << "AI Detection                   : " << AI_Detection << endl;
    cout << "Smart Alerts                   : " << Smart << endl;
    cout << "Privacy Masking                : " << Privacy << endl;
    cout << "Edge Analytics                 : " << Edge << endl << endl;
}