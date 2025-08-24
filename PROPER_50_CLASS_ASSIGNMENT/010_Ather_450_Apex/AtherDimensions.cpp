#include "AtherDimensions.hpp"

Ather_Dimensions::Ather_Dimensions
        (float _1, short int _2
        , char _3, short int _4
        , short int _5, short int _6
        , short int _7, char _8
        , char _9)
        {
            Kerb_Weight = _1;
            Seat_Height = _2;
            Seat_Length = _3;
            Ground_Clearance = _4;
            Overall_Length = _5;
            Overall_Width = _6;
            Overall_Height = _7;
            Wheelbase = _8;
            Carrying_Capacity = _9;
        }

void Ather_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------- D I M E N S I O N S ---------------------------" << endl << endl;
    
    cout << "Kerb Weight                                : " << Kerb_Weight << " kg" << endl;
    cout << "Seat Height                                : " << Seat_Height << " mm" << endl;
    cout << "Seat Length                                : " << Seat_Length << endl;
    cout << "Ground Clearance                           : " << Ground_Clearance << " mm" << endl;
    cout << "Overall Length                             : " << Overall_Length << " mm" << endl;
    cout << "Overall Width                              : " << Overall_Width << " mm" << endl;
    cout << "Overall Height                             : " << Overall_Height << " mm" << endl;
    cout << "Wheelbase                                  : " << Wheelbase << endl;
    cout << "Carrying Capacity                          : " << Carrying_Capacity << endl << endl;
}