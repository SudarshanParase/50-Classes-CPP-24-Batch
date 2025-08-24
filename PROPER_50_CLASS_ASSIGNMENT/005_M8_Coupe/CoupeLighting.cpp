#include "CoupeLighting.hpp"

Coupe_Lighting::Coupe_Lighting(std::string _1, std::string _2, char _3
                    , char _4, std::string _5, std::string _6
                    , std::string _7, char _8, std::string _9
                    , char _10, char _11, std::string _12 
                    , char _13, char _14)
            {
                Headlights = _1;
                Cornering_Headlights = _2;
                Headlight_Height = _3;
                Automatic_Headlamps = _4;
                Taillights = _5;
                Daytime_Running = _6;
                Fog_Lights = _7;
                Home_Headlamps = _8;
                Cabin_Lamps_Position = _9;
                Reading_Lamp = _10;
                Glovebox_Lamp = _11;
                Light_on_Vanity_Mirrors = _12;
                Ambient_Interior = _13;
                Puddle_Lamps = _14;
            }

void Coupe_Lighting::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------------LIGHTING--------------------------------------" << endl << endl;
    
    cout << "Headlights                                 : " << Headlights << endl;
    cout << "Cornering Headlights                       : " << Cornering_Headlights << endl;
    cout << "Headlight Height Adjuster                  : " << Headlight_Height << endl;
    cout << "Automatic Headlamps                        : " << Automatic_Headlamps << endl;
    cout << "Taillights                                 : " << Taillights << endl;
    cout << "Daytime Running Lights                     : " << Daytime_Running << endl;
    cout << "Fog Lights                                 : " << Fog_Lights << endl;
    cout << "Follow Me Home Headlamps                   : " << Home_Headlamps << endl;
    cout << "Cabin Lamps Position                       : " << Cabin_Lamps_Position << endl;
    cout << "Reading Lamp                               : " << Reading_Lamp << endl;
    cout << "Glovebox Lamp                              : " << Glovebox_Lamp << endl;
    cout << "Light on Vanity Mirrors                    : " << Light_on_Vanity_Mirrors << endl;
    cout << "Ambient Interior Lighting                  : " << Ambient_Interior << endl;
    cout << "Puddle Lamps                               : " << Puddle_Lamps << endl << endl;
}