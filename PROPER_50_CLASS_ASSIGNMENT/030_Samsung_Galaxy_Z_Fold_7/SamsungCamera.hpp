#ifndef SAMSUNG_CAMERA_HPP
#define SAMSUNG_CAMERA_HPP

#include <iostream>
#include <string>

class Samsung_Camera
{
    private:

        std::string Rear_Camera;
        char OIS;
        char Auto_Focus;
        std::string Features;
        std::string Video_Recording;
        std::string Flash;
        std::string Front_Camera;
        std::string Front_Video_Recording;

    public:

        Samsung_Camera(std::string, char
                    , char, std::string
                    , std::string , std::string
                    , std::string , std::string); // Only Declaration

        void show(); // Only Declaration

};

#endif // SAMSUNG_CAMERA_HPP