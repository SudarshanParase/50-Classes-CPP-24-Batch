// Header File Inclusion
#include "MercedesSeats.hpp"

Mercedes_Seats::Mercedes_Seats
        (std::string _1, std::string _2
        , std::string _3, std::string _4 
        , std::string _5, std::string _6 
        , char _7, std::string _8 
        , char _9, char _10
        , std::string _11, char _12 
        , char _13, char _14 
        , std::string _15, std::string _16 
        , char _17, char _18
        , char _19, std::string _20 
        , char _21)
        {
            Seat_Upholstery = _1;
            Driver_Seat = _2;
            Front_Passenger = _3;
            Second_Row = _4;
            Ventilated = _5;
            Ventilated_Type = _6;
            Massage_Seats = _7;
            Interior = _8;
            Leather_Steering = _9;
            Leather_Gear = _10;
            Headrests = _11;
            Front_Seatback = _12;
            Driver_Armrest = _13;
            Rear_Armrest = _14;
            Split_Rear = _15;
            Folding_Rear = _16;
            Split_Third_Row = _17;
            Audio_Controls = _18;
            Active_Headrest = _19;
            Rear_Passenger = _20;
            Third_Row_Seat = _21;
        }

void Mercedes_Seats::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- S E A T   &   U P H O L S T E R Y ---------------------" << endl << endl;

    cout << "Seat Upholstery                            : " << Seat_Upholstery << endl;
    cout << "Driver Seat Adjustment                     : " << Driver_Seat << endl;
    cout << "Front Passenger Seat Adjustment            : " << Front_Passenger << endl;
    cout << "Second Row Seat Adjustment                 : " << Second_Row << endl;
    cout << "Ventilated Seats                           : " << Ventilated << endl;
    cout << "Ventilated Seat Type                       : " << Ventilated_Type << endl;
    cout << "Massage Seats                              : " << Massage_Seats << endl;
    cout << "Interior                                   : " << Interior << endl;
    cout << "Leather-wrapped Steering Wheel             : " << Leather_Steering << endl;
    cout << "Leather-wrapped Gear Knob                  : " << Leather_Gear << endl;
    cout << "Headrests                                  : " << Headrests << endl;
    cout << "Front Seatback Pockets                     : " << Front_Seatback << endl;
    cout << "Driver Armrest                             : " << Driver_Armrest << endl;
    cout << "Rear Armrest                               : " << Rear_Armrest << endl;
    cout << "Split Rear Seat                            : " << Split_Rear << endl;
    cout << "Folding Rear Seat                          : " << Folding_Rear << endl;
    cout << "Split Third Row Seat                       : " << Split_Third_Row << endl;
    cout << "Audio Controls in Rear Armrest             : " << Audio_Controls << endl;
    cout << "Active Headrest                            : " << Active_Headrest << endl;
    cout << "Rear Passenger Seat Type                   : " << Rear_Passenger << endl;
    cout << "Third Row Seat Type                        : " << Third_Row_Seat << endl << endl;
}