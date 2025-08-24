#include "HikvisionVideo.hpp"

Hikvision_Video::Hikvision_Video
        (std::string _1, std::string _2
        , std::string _3, std::string _4 
        , std::string _5, std::string _6)
        {
            Compression = _1;
            Frame = _2;
            Video = _3;
            Onboard = _4;
            Network = _5;
            Integration = _6;
        }

void Hikvision_Video::show()
{
    using std::cout;
    using std::endl;

    cout << "------------- V I D E O   P R O C E S S I N G   &   S T O R A G E -------------" << endl << endl;

    cout << "Compression                    : " << Compression << endl;
    cout << "Frame Rate                     : " << Frame << endl;
    cout << "Video Streams                  : " << Video << endl;
    cout << "Onboard Storage                : " << Onboard << endl;
    cout << "Network Protocols              : " << Network << endl;
    cout << "Integration                    : " << Integration << endl << endl;
}