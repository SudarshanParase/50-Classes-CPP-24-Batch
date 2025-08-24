#include "HandbagDimensions.hpp"

Handbag_Dimensions::Handbag_Dimensions
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5, std::string _6)
        {
            Model = _1;
            Length = _2;
            Height = _3;
            Depth = _4;
            Handle_Drop = _5;
            Weight = _6;
        }

void Handbag_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- S I Z E   &   D I M E N S I O N S --------------------" << endl << endl;

    cout << "Model                          : " << Model << endl;
    cout << "Length                         : " << Length << endl;
    cout << "Height                         : " << Height << endl;
    cout << "Depth                          : " << Depth << endl;
    cout << "Handle Drop                    : " << Handle_Drop << endl;
    cout << "Weight                         : " << Weight << endl << endl;
}