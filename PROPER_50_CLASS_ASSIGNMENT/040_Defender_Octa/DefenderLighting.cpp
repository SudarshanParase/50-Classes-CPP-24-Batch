// Header File Inclusion
#include "DefenderLighting.hpp"

Defender_Lighting::Defender_Lighting
        (std::string _1, char _2 
        , char _3, char _4 
        , std::string _5, std::string _6 
        , std::string _7, char _8 
        , std::string _9, std::string _10 
        , std::string _11, char _12 )
        {
            Headlights = _1;
            Cornering = _2;
            Headlight_Height = _3;
            Automatic_Headlamps = _4;
            Taillights = _5;
            Daytime = _6;
            Fog_Lights = _7;
            Follow_Me = _8;
            Interior_Lamps = _9;
            Light_on_Vanity = _10;
            Ambient_Interior = _11;
            Puddle_Lamps = _12;
        }

void Defender_Lighting::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------ L I G H T I N G ------------------------------" << endl << endl;

    cout << "Headlights                                 : " << Headlights << endl;
    cout << "Cornering Headlights                       : " << Cornering << endl;
    cout << "Headlight Height Adjuster                  : " << Headlight_Height << endl;
    cout << "Automatic Headlamps                        : " << Automatic_Headlamps << endl;
    cout << "Taillights                                 : " << Taillights << endl;
    cout << "Daytime Running Lights                     : " << Daytime << endl;
    cout << "Fog Lights                                 : " << Fog_Lights << endl;
    cout << "Follow Me Home Headlamps                   : " << Follow_Me << endl;
    cout << "Interior Lamps                             : " << Interior_Lamps << endl;
    cout << "Light on Vanity Mirrors                    : " << Light_on_Vanity << endl;
    cout << "Ambient Interior Lighting                  : " << Ambient_Interior << endl;
    cout << "Puddle Lamps                               : " << Puddle_Lamps << endl;
}