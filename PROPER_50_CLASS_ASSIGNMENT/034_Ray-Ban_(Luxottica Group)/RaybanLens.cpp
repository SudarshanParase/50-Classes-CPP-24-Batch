#include "RaybanLens.hpp"

Rayban_Lens::Rayban_Lens
        (std::string _1, std::string _2
        , std::string _3, std::string _4 
        , std::string _5, std::string _6
        , std::string _7, std::string _8
        , std::string _9, std::string _10 )
        {
            Lens_Type = _1;
            Lens_Material = _2;
            Color = _3;
            Polarization = _4;
            UV = _5;
            Width = _6;
            Height = _7;
            Visible = _8;
            Scratch = _9;
            Color_Accuracy = _10;
        }

void Rayban_Lens::show()
{
    using std::cout;
    using std::endl;
 
    cout << "----------------- L E N S   D E S I G N   &   O P T I C S -----------------" << endl << endl;

    cout << "Lens Type                      : " << Lens_Type << endl;
    cout << "Lens Material                  : " << Lens_Material << endl;
    cout << "Lens Color                     : " << Color << endl;
    cout << "Polarizaiton                   : " << Polarization << endl;
    cout << "UV Protection                  : " << UV << endl;
    cout << "Lens Width                     : " << Width << endl;
    cout << "Lens Height                    : " << Height << endl;
    cout << "Visible Light Transmission     : " << Visible << endl;
    cout << "Scratch Resistance             : " << Scratch << endl;
    cout << "Color Accuracy                 : " << Color_Accuracy << endl << endl;
}