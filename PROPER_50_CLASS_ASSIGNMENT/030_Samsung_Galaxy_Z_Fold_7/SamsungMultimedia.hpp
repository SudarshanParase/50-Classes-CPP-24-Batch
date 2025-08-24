#ifndef SAMSUNG_MULTIMEDIA_HPP
#define SAMSUNG_MULTIMEDIA_HPP

#include <iostream>
#include <string>

class Samsung_Multimedia
{
    private:

        char Email;
        std::string Music;
        std::string Video;
        char FM_Radio;
        char Document;

    public:

        Samsung_Multimedia(char, std::string 
                        , std::string, char 
                        , char ); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_MULTIMEDIA_HPP