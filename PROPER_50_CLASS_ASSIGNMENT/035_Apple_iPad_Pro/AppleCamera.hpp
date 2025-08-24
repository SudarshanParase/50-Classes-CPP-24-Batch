#ifndef APPLE_CAMERA_HPP
#define APPLE_CAMERA_HPP

#include <iostream>
#include <string>

class Apple_Camera
{
    private:

        std::string Rear_Camera;
        char Auto_Focus;
        std::string Features;
        std::string Video_Recording;
        std::string Flash;
        std::string Front_Camera;
        char Front_Video;

    public:

        Apple_Camera(std::string, char
                    , std::string, std::string 
                    , std::string, std::string 
                    , char); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_CAMERA_HPP