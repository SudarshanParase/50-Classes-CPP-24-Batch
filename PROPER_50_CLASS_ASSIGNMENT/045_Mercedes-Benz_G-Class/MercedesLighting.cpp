// Header File Inclusion
#include "MercedesLighting.hpp"

Mercedes_Lighting::Mercedes_Lighting
        (std::string _1, std::string _2 
        , char _3, char _4 
        , std::string _5, std::string _6 
        , std::string _7, char _8 
        , std::string _9, std::string _10 
        , std::string _11, char _12 )
        {
            Headlights = _1;
            Cornering = _2;
            Headlight_Height = _3;
            Automatic = _4;
            Taillights = _5;
            Daytime = _6;
            Fog_Lights = _7;
            Follow_Me = _8;
            Interior = _9;
            Light = _10;
            Ambient = _11;
            Puddle = _12;
        }

void Mercedes_Lighting::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------ L I G H T I N G ------------------------------" << endl << endl;

    cout << "Headlights                                 : " << Headlights << endl;
    cout << "Cornering Headlights                       : " << Cornering << endl;
    cout << "Headlight Height Adjuster                  : " << Headlight_Height << endl;
    cout << "Automatic Headlamps                        : " << Automatic << endl;
    cout << "Taillights                                 : " << Taillights << endl;
    cout << "Daytime Running Lights                     : " << Daytime << endl;
    cout << "Fog Lights                                 : " << Fog_Lights << endl;
    cout << "Follow Me Home Headlamps                   : " << Follow_Me << endl;
    cout << "Interior Lamps                             : " << Interior << endl;
    cout << "Light on Vanity Mirrors                    : " << Light << endl;
    cout << "Ambient Interior Lighting                  : " << Ambient << endl;
    cout << "Puddle Lamps                               : " << Puddle << endl << endl;
}