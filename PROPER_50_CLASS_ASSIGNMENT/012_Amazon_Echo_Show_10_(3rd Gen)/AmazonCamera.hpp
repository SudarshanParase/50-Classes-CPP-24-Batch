#ifndef AMAZON_CAMERA_HPP
#define AMAZON_CAMERA_HPP

#include <iostream>
#include <string>

class Amazon_Camera
{
    private:

        std::string  Camera;
        std::string Video;
        std::string Auto_Framing;
        std::string Privacy;

    public:

        Amazon_Camera(std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif /// AMAZON_CAMERA_HPP