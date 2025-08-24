// Header File Inclusion
#include "MustangDimensions.hpp"

Mustang_Dimensions::Mustang_Dimensions
        (short int _1, short int _2 
        , short int _3, short int _4 
        , short int _5, short int _6 
        , std::string _7, short int _8 
        , char _9, char _10 
        , short int _11, short int _12)
        {
            Length = _1;
            Width = _2;
            Height = _3;
            Wheelbase = _4;
            Ground_Clearance = _5;
            Kerb_Weight = _6;
            Fuel_Tank = _7;
            Boot_Space = _8;
            Seating_Capacity = _9;
            Doors = _10;
            Front_Track = _11;
            Rear_Track = _12;
        }

void Mustang_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "-------- D I M E N S I O N S ,   W E I G H T ,   &   C A P A C I T Y --------" << endl << endl;

    cout << "Length                                     : " << Length << " mm" << endl;
    cout << "Width                                      : " << Width << " mm" << endl;
    cout << "Height                                     : " << Height << " mm" << endl;
    cout << "Wheelbase                                  : " << Wheelbase << " mm" << endl;
    cout << "Ground Clearance                           : " << Ground_Clearance << " kg" << endl;
    cout << "Kerb Weight                                : " << Kerb_Weight << " kg" << endl;
    cout << "Fuel Tank Capacity                         : " << Fuel_Tank << endl;
    cout << "Boot Space                                 : " << Boot_Space << " litres" << endl;
    cout << "Seating Capacity                           : " << Seating_Capacity << endl;
    cout << "No. of Doors                               : " << Doors << endl;
    cout << "Front Track                                : " << Front_Track << " mm" << endl;
    cout << "Rear Track                                 : " << Rear_Track << " mm" << endl << endl;
}