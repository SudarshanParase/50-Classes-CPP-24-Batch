#include "ImalentSize.hpp"

Imalent_Size::Imalent_Size
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6 
        , std::string _7 )
        {
            Length = _1;
            Head = _2;
            Body = _3;
            Weight = _4;
            Grip = _5;
            Color = _6;
            Display = _7;
        }

void Imalent_Size::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------ S I Z E   &   D E S I G N ------------------------" << endl << endl;

    cout << "Length                         : " << Length << endl;
    cout << "Head Diameter                  : " << Head << endl;
    cout << "Body Diameter                  : " << Body << endl;
    cout << "Weight                         : " << Weight << endl;
    cout << "Grip Design                    : " << Grip << endl;
    cout << "Color                          : " << Color << endl;
    cout << "Display                        : " << Display << endl << endl;
}