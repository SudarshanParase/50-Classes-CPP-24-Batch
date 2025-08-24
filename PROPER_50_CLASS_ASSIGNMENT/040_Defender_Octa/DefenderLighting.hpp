#ifndef DEFENDER_LIGHTING_HPP
#define DEFENDER_LIGHTING_HPP

#include <iostream>
#include <string>

class Defender_Lighting
{
    private:

        std::string Headlights;
        char Cornering;
        char Headlight_Height;
        char Automatic_Headlamps;
        std::string Taillights;
        std::string Daytime;
        std::string Fog_Lights;
        char Follow_Me;
        std::string Interior_Lamps;
        std::string Light_on_Vanity;
        std::string Ambient_Interior;
        char Puddle_Lamps;

    public:

        Defender_Lighting(std::string, char
                        , char, char 
                        , std::string, std::string 
                        , std::string, char 
                        , std::string, std::string 
                        , std::string, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // DEFENDER_LIGHTING_HPP