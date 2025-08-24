#ifndef CANON_CAMERA_HPP
#define CANON_CAMERA_HPP

#include <iostream>
#include <string>

class Canon_Camera
{
    private:

        std::string ND_Filter;
        std::string Microphone_Type;
        std::string Recording_Media;

    public:

        Canon_Camera(std::string , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CANON_CAMERA_HPP