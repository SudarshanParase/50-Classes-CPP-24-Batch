#include "RaybanFrame.hpp"

Rayban_Frame::Rayban_Frame
        (std::string _1, std::string _2
        , std::string _3, std::string _4 
        , std::string _5, std::string _6 
        , std::string _7, std::string _8)
        {
            Frame_Type = _1;
            Frame_Shape = _2;
            Frame_Material = _3;
            Temple = _4;
            Nose = _5;
            Finish = _6;
            Weight = _7;
            Build = _8;
        }

void Rayban_Frame::show()
{
    using std::cout;
    using std::endl;

    cout << "------------- F R A M E   D E S I G N   &   M A T E R I A L S -------------" << endl << endl;

    cout << "Frame Type                     : " << Frame_Type << endl;
    cout << "Frame Shape                    : " << Frame_Shape << endl;
    cout << "Frame Material                 : " << Frame_Material << endl;
    cout << "Temple Material                : " << Temple << endl;
    cout << "Nose Pads                      : " << Nose << endl;
    cout << "Finish                         : " << Finish << endl;
    cout << "Weight                         : " << Weight << endl;
    cout << "Build Quality                  : " << Build << endl << endl;
}