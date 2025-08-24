#include "AmazonCamera.hpp"

Amazon_Camera::Amazon_Camera
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Camera = _1;
            Video = _2;
            Auto_Framing = _3;
            Privacy = _4;
        }

void Amazon_Camera::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------- C A M E R A ----------------------------------" << endl << endl;
    
    cout << "Camera Resolution              : " << Camera << endl;
    cout << "Video Call Support             : " << Video << endl;
    cout << "Auto-Framing                   : " << Auto_Framing << endl;
    cout << "Privacy Cover                  : " << Privacy << endl << endl;
}