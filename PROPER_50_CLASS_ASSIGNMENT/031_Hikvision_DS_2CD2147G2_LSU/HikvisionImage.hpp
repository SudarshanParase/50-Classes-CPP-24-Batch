#ifndef HIKVISION_IMAGE_HPP
#define HIKVISION_IMAGE_HPP

#include <iostream>
#include <string>

class Hikvision_Image
{
    private:

        std::string Sensor;
        std::string Resolution;
        std::string Optics;
        std::string Aperture;
        std::string Zoom;

    public:

        Hikvision_Image(std::string, std::string
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HIKVISION_IMAGE_HPP