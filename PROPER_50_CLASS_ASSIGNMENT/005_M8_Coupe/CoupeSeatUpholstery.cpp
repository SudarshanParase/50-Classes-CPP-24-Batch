#include "CoupeSeatUpholstery.hpp"

Coupe_Seat::Coupe_Seat
        (std::string _1, std::string _2, std::string _3
                 , char _4, char _5, std::string _6
                 , std::string _7, char _8, char _9
                 , std::string _10, char _11, char _12
                 , char _13, std::string _14, std::string _15
                 , char _16, std::string _17)
        {
            Seat_Upholstery = _1;
            Driver_Seat = _2;
            Front_Passenger_Seat = _3;
            Ventilated_Seats = _4;
            Ventilated_Seat_Type = _5;
            Interiors = _6;
            Interior_Colours = _7;
            Leather_Wrapped_Steering = _8;
            Leather_Wrapped_Gear = _9;
            Headrests = _10;
            Front_Seatback = _11;
            Driver_Armrest = _12;
            Rear_Armrest = _13;
            Split_Rear_Seat = _14;
            Folding_Rear_Seat = _15;
            Active_Headrest = _16;
            Rear_Passenger_Seat = _17;
        }

void Coupe_Seat::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------------SEAT & UPHOLSTERY---------------------------------" << endl << endl;
    
    cout << "Seat Upholstery                            : " << Seat_Upholstery << endl;
    cout << "Driver Seat Adjustment                     : " << Driver_Seat << endl;
    cout << "Front Passenger Seat Adjustment            : " << Front_Passenger_Seat << endl;
    cout << "Ventilated Seats                           : " << Ventilated_Seats << endl;
    cout << "Ventilated Seat Type                       : " << Ventilated_Seat_Type << endl;
    cout << "Interiors                                  : " << Interiors << endl;
    cout << "Interiors Colours                          : " << Interior_Colours << endl;
    cout << "Leather-wrapped Steering Wheel             : " << Leather_Wrapped_Steering << endl;
    cout << "Leather-wrapped Gear Knob                  : " << Leather_Wrapped_Gear << endl;
    cout << "Headrests                                  : " << Headrests << endl;
    cout << "Front Seatback Pockets                     : " << Front_Seatback << endl;
    cout << "Driver Armrest                             : " << Driver_Armrest << endl;
    cout << "Rear Armrest                               : " << Rear_Armrest << endl;
    cout << "Split Rear Seat                            : " << Split_Rear_Seat << endl;
    cout << "Folding Rear Seat                          : " << Folding_Rear_Seat << endl;
    cout << "Active headrest                            : " << Active_Headrest << endl;
    cout << "Rear Passenger Seat Type                   : " << Rear_Passenger_Seat << endl << endl;
}