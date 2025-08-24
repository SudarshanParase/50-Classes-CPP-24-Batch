#ifndef MAVIC_CAMERA_HPP
#define MAVIC_CAMERA_HPP

#include <iostream>
#include <string>

class Mavic_Camera
{
    private:

        std::string Main;
        std::string Video;
        std::string Medium;
        std::string Long;
        std::string Electronic;
        std::string Gimbal;

    public:

        Mavic_Camera(std::string, std::string 
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // MAVIC_CAMERA_HPP