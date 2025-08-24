#include "BottleSize.hpp"

Bottle_Size::Bottle_Size
    (std::string _1, std::string _2 
    , std::string _3 )
    {
        Available = _1;
        Weight = _2;
        Design = _3;
    }

void Bottle_Size::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- S I Z E   &   O P T I O N S -----------------------" << endl << endl;

    cout << "Available Sizes                : " << Available << endl;
    cout << "Weight                         : " << Weight << endl;
    cout << "Design                         : " << Design << endl << endl;
}