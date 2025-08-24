#include "ImalentLight.hpp"

Imalent_Light::Imalent_Light
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 
    , std::string _5, std::string _6 
    , std::string _7) 
    {
        LED = _1;
        Max = _2;
        Beam = _3;
        Lighting = _4;
        Strobe = _5;
        Color = _6;
        Beam_Type =  _7;
    }

void Imalent_Light::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- L I G H T   O U T P U T   &   M O D E S -----------------" << endl << endl;

    cout << "LED Type                       : " << LED << endl;
    cout << "Max Lumens                     : " << Max << endl;
    cout << "Beam Distance                  : " << Beam << endl;
    cout << "Lighting Modes                 : " << Lighting << endl;
    cout << "Strobe Mode                    : " << Strobe << endl;
    cout << "Color Temperature              : " << Color << endl;
    cout << "Beam Type                      : " << Beam_Type << endl << endl;
}