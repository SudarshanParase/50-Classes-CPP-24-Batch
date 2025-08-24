// Header File Inclusion
#include "SamsungCamera.hpp"

Samsung_Camera::Samsung_Camera
    (std::string _1, char _2 
    , char _3, std::string _4 
    , std::string _5, std::string _6 
    , std::string _7, std::string _8)
    {
        Rear_Camera = _1;
        OIS = _2;
        Auto_Focus = _3;
        Features = _4;
        Video_Recording = _5;
        Flash = _6;
        Front_Camera = _7;
        Front_Video_Recording = _8;
    }

void Samsung_Camera::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------------- C A M E R A ---------------------------------" << endl << endl;

    cout << "Rear Camera                    : " << Rear_Camera << endl;
    cout << "OIS                            : " << OIS << endl;
    cout << "Auto Focus                     : " << Auto_Focus << endl;
    cout << "Features                       : " << Features << endl;
    cout << "Video Recording                : " << Video_Recording << endl;
    cout << "Flash                          : " << Flash << endl;
    cout << "Front Camera                   : " << Front_Camera << endl;
    cout << "Front Video Recording          : " << Front_Video_Recording << endl << endl;
}