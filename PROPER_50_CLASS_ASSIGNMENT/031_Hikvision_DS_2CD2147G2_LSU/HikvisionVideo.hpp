#ifndef HIKVISION_VIDEO_HPP
#define HIKVISION_VIDEO_HPP

#include <iostream>
#include <string>

class Hikvision_Video
{
    private:

        std::string Compression;
        std::string Frame;
        std::string Video;
        std::string Onboard;
        std::string Network;
        std::string Integration;

    public:

        Hikvision_Video(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HIKVISION_VIDEO_HPP