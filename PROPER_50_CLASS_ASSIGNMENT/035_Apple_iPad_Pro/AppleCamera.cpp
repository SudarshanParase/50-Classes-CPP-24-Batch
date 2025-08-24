// Header File Inclusion
#include "AppleCamera.hpp"

Apple_Camera::Apple_Camera
    (std::string _1, char _2 
    , std::string _3, std::string _4 
    , std::string _5, std::string _6 
    , char _7)
    {
        Rear_Camera = _1;
        Auto_Focus = _2;
        Features = _3;
        Video_Recording = _4;
        Flash = _5;
        Front_Camera = _6;
        Front_Video = _7;
    }

void Apple_Camera::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------- C A M E R A ----------------------------------" << endl << endl;

    cout << "Rear Camera                    : " << Rear_Camera << endl;
    cout << "Auto Focus                     : " << Auto_Focus << endl;
    cout << "Features                       : " << Features << endl;
    cout << "Video Recording                : " << Video_Recording << endl;
    cout << "Flash                          : " << Flash << endl;
    cout << "Front Camera                   : " << Front_Camera << endl;
    cout << "Front Video Recording          : " << Front_Video << endl << endl;
}