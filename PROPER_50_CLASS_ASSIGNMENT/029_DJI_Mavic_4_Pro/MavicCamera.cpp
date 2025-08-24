#include "MavicCamera.hpp"

Mavic_Camera::Mavic_Camera
        (std::string _1, std::string _2 
        , std::string _3, std::string _4
        , std::string _5, std::string _6)
        {
            Main = _1;
            Video = _2;
            Medium = _3;
            Long = _4;
            Electronic = _5;
            Gimbal = _6;
        }

void Mavic_Camera::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------- C A M E R A   S Y S T E M --------------------------" << endl << endl;

    cout << "Main Camera                    : " << Main << endl;
    cout << "Video Capabilities             : " << Video << endl;
    cout << "Medium Telephoto               : " << Medium << endl;
    cout << "Long Telephoto                 : " << Long << endl;
    cout << "Electronic ND Filter           : " << Electronic << endl;
    cout << "Gimbal                         : " << Gimbal << endl << endl;
}