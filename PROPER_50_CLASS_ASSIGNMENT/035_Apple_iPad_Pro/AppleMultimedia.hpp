#ifndef APPLE_MULTIMEDIA_HPP
#define APPLE_MULTIMEDIA_HPP

#include <iostream>
#include <string>

class Apple_Multimedia
{
    private:

        std::string Supports;
        std::string Email;
        std::string Music;
        std::string Video;
        char Radio;
        char Document;

    public:

        Apple_Multimedia(std::string, std::string 
                        , std::string, std::string 
                        , char, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_MULTIMEDIA_HPP