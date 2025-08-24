#include "HikvisionImage.hpp"

Hikvision_Image::Hikvision_Image
        (std::string _1, std::string _2
        , std::string _3, std::string _4 
        , std::string _5)
        {
            Sensor = _1;
            Resolution = _2;
            Optics = _3;
            Aperture = _4;
            Zoom = _5;
        }

void Hikvision_Image::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------ I M A G E   S E N S O R   &   O P T I C S ------------------" << endl << endl;

    cout << "Sensor                         : " << Sensor << endl;
    cout << "Resolution                     : " << Resolution << endl;
    cout << "Optics                         : " << Optics << endl;
    cout << "Aperture                       : " << Aperture << endl;
    cout << "Zoom Support                   : " << Zoom << endl << endl;
}