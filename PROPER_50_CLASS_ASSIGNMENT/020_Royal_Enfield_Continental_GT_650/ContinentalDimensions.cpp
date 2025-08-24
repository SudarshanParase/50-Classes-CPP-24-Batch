#include "ContinentalDimensions.hpp"

Continental_Dimensions::Continental_Dimensions
        (short int _1, short int _2 
        , char _3, short int _4 
        , std::string _5, std::string _6 
        , short int _7, short int _8 
        , short int _9, short int _10)
        {
            Kerb_Weight = _1;
            Seat_Height = _2;
            Seat_Length = _3;
            Ground_Clearance = _4;
            Fuel_Tank_Capacity = _5;
            Reserve_Fuel_Capacity = _6;
            Overall_Length = _7;
            Overall_Width = _8;
            Overall_Height = _9;
            Wheelbase = _10;
        }

void Continental_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------- D I M E N S I O N S ---------------------------" << endl << endl;

    cout << "Kerb Weight                                    : " << Kerb_Weight << " kg" << endl;
    cout << "Seat Height                                    : " << Seat_Height << " mm" << endl;
    cout << "Seat Length                                    : " << Seat_Length << endl;
    cout << "Ground Clearance                               : " << Ground_Clearance << " mm" << endl;
    cout << "Fuel Tank Capacity                             : " << Fuel_Tank_Capacity << endl;
    cout << "Reserve Fuel Capacity                          : " << Reserve_Fuel_Capacity << endl;
    cout << "Overall Length                                 : " << Overall_Length << " mm" << endl;
    cout << "Overall Width                                  : " << Overall_Width << " mm" << endl;
    cout << "Overall Height                                 : " << Overall_Height << " mm" << endl;
    cout << "Wheelbase                                      : " << Wheelbase << " mm" << endl << endl;
}