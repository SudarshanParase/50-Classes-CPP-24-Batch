// Header File Inclusion
#include "DefenderDimensions.hpp"

Defender_Dimensions::Defender_Dimensions
        (std::string _1, short int _2 )
        {
            Length = _1;
            Wheelbase = _2;
        }

void Defender_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------- D I M E N S I O N S   &   W E I G H T -------------------" << endl << endl; 

    cout << "Length * Width * Height                    : " << Length << endl;
    cout << "Wheelbase                                  : " << Wheelbase << " mm" << endl;
}