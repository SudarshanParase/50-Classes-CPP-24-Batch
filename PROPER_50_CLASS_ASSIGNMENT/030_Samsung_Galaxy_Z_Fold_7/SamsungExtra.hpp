#ifndef SAMSUNG_EXTRA_HPP
#define SAMSUNG_EXTRA_HPP

#include <iostream>
#include <string>

class Samsung_Extra
{
    private:

        std::string GPS;
        std::string Fingerprint;
        char Face_Unlock;
        std::string Sensors;
        char Headphone_Jack;
        char NFC;
        std::string AI_Features;
        std::string Water_Resistance;
        char Splash_Resistant;
        std::string IP_Rating;
        char Dust_Resistant;
        std::string Extra_Features;

    public:

        Samsung_Extra(std::string, std::string 
                    , char, std::string 
                    , char, char 
                    , std::string, std::string 
                    , char, std::string 
                    , char, std::string ); // Only Declaration

        void show(); // Only Declaration
};


#endif // SAMSUNG_EXTRA_HPP