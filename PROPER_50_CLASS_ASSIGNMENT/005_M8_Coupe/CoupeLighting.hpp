#ifndef COUPE_LIGHTING_HPP
#define COUPE_LIGHTING_HPP

// Header File Inclusion
#include <iostream>
#include <string>

class Coupe_Lighting
{
    private:

        // Data Member
        std::string Headlights;
        std::string Cornering_Headlights;
        char Headlight_Height;
        char Automatic_Headlamps;
        std::string Taillights;
        std::string Daytime_Running;
        std::string Fog_Lights;
        char Home_Headlamps;
        std::string Cabin_Lamps_Position;
        char Reading_Lamp;
        char Glovebox_Lamp;
        std::string Light_on_Vanity_Mirrors;
        char Ambient_Interior;
        char Puddle_Lamps;

    public:

        // Constructor
        Coupe_Lighting(std::string, std::string, char
                    , char, std::string, std::string
                    , std::string, char, std::string
                    , char, char, std::string
                    , char , char); // Only Declaration

        // Show Function
        void show(); // Only Declaration

};

#endif // COUPE_LIGHTING_HPP 