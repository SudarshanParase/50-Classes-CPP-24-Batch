#ifndef MERCEDES_LIGHTING_HPP
#define MERCEDES_LIGHTING_HPP

#include <iostream>
#include <string>

class Mercedes_Lighting
{
    private:

        std::string Headlights;
        std::string Cornering;
        char Headlight_Height;
        char Automatic;
        std::string Taillights;
        std::string Daytime;
        std::string Fog_Lights;
        char Follow_Me;
        std::string Interior;
        std::string Light;
        std::string Ambient;
        char Puddle;

    public:

        Mercedes_Lighting(std::string, std::string 
                        , char, char 
                        , std::string, std::string 
                        , std::string, char 
                        , std::string, std::string 
                        , std::string, char); // Only Declaration

        void show(); // Only Declaration
};

#endif // MERCEDES_LIGHTING_HPP