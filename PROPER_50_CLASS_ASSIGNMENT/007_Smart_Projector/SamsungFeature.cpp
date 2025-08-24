#include "SamsungFeature.hpp"

Samsung_Feature::Samsung_Feature
            (std::string _1, std::string _2
            , char _3, short int _4
            , char _5)
            {
                Supported_HDR = _1;
                Multi_Input = _2;
                Built_In_Speaker = _3;
                Speaker_Power = _4;
                Projection = _5;
            }

void Samsung_Feature::show()
{
    using std::cout;
    using std::endl;
    
    cout << "----------------------------------- F E A T U R E --------------------------------" << endl << endl;
    
    cout << "Supported HDR Input Formats        : " << Supported_HDR << endl;
    cout << "Multi-Input Support (PIP/PBP)      : " << Multi_Input << endl;
    cout << "Built-In Speaker                   : " << Built_In_Speaker << endl;
    cout << "Speaker Power                      : " << Speaker_Power << " W" << endl;
    cout << "Projection Tilt Option             : " << Projection << endl << endl;
}
