// Header File Inclusion
#include "KTMDimensions.hpp"

Ktm_Dimensions::Ktm_Dimensions
        (short int _1, short int _2 
        ,char _3, short int _4 
        , std::string _5, std::string _6 
        , char _7, char _8
        , char _9, short int _10)
        {
            Kerb = _1;
            Seat_Height = _2;
            Seat_Length = _3;
            Ground_Clearance = _4;
            Fuel_Tank = _5;
            Reserve_Fuel = _6;
            Overall_Length = _7;
            Overall_Width = _8;
            Overall_Height = _9;
            Wheelbase = _10;
        }

void Ktm_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------- D I M E N S I O N S ----------------------------" << endl << endl;

    cout << "Kerb Weight                                    : " << Kerb << endl;
    cout << "Seat Height                                    : " << Seat_Height << endl;
    cout << "Seat Length                                    : " << Seat_Length << endl;
    cout << "Ground Clearance                               : " << Ground_Clearance << endl;
    cout << "Fuel Tank Capacity                             : " << Fuel_Tank << endl;
    cout << "Reserve Fuel Capacity                          : " << Reserve_Fuel << endl;
    cout << "Overall Length                                 : " << Overall_Length << endl;
    cout << "Overall Width                                  : " << Overall_Width << endl;
    cout << "Overall Height                                 : " << Overall_Height << endl;
    cout << "Wheelbase                                      : " << Wheelbase << endl << endl;
}