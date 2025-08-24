// Header File Inclusion
#include "MercedesDimensions.hpp"

Mercedes_Dimensions::Mercedes_Dimensions
        (std::string _1, std::string _2
        , short int _3 )
        {
            Length = _1;
            Ground_Clearance = _2;
            Wheelbase = _3;
        }

void Mercedes_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------- D I M E N S I O N S   &   W E I G H T -------------------" << endl << endl; 

    cout << "Length * Width * Height                    : " << Length << endl;
    cout << "Ground Clearance                           : " << Ground_Clearance << endl;
    cout << "Wheelbase                                  : " << Wheelbase << " mm" << endl << endl;
}