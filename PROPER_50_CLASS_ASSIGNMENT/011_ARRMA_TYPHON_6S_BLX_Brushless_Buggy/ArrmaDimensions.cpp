#include "ArrmaDimensions.hpp"

Arrma_Dimensions::Arrma_Dimensions
            (short int _1, short int _2
            , short int _3, short int _4
            , short int _5, std::string _6)
            {
                Length = _1;
                Width = _2;
                Height = _3;
                Wheelbase = _4;
                Ground = _5;
                Weight = _6;
            }

void Arrma_Dimensions::show()
{
    using std::cout;
    using std::endl;
 
    cout << "---------------------------------- D I M E N S I O N S ----------------------------------" << endl << endl;
    
    cout << "Length                                 : " << Length << " mm (20.1 in)" << endl;
    cout << "Width                                  : " << Width << " mm (12 in)" << endl;
    cout << "Height                                 : " << Height << " mm (7.7 in)" << endl;
    cout << "Wheelbase                              : " << Wheelbase << " mm (12.9 in)" << endl;
    cout << "Ground Clearance                       : " << Ground << " (1.65 in)" << endl;
    cout << "Weight (No Battery)                    : " << Weight << endl << endl;
}