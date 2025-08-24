// Header File Inclusion
#include "MustangInterior.hpp"

Mustang_Interior::Mustang_Interior
        (std::string _1, std::string _2 
        , char _3, char _4 
        , char _5, char _6 
        , char _7, char _8
        , char _9, std::string _10 
        , std::string _11, char _12 
        , char _13, char _14 
        , char _15, char _16)
        {
            Seat_Type = _1;
            Adjustable_Driver = _2;
            Adjustable_Passenger = _3;
            Adjustable_Headrest = _4;
            Heated_Seats = _5;
            Power_Windows = _6;
            Air_Conditioner = _7;
            Automatic = _8;
            Infotainment = _9;
            Audio = _10;
            Connectivity = _11;
            Keyless_Entry = _12;
            Push_Button = _13;
            Cruise_Control = _14;
            Driving_Modes = _15;
            Power_Trunk = _16;
        }

void Mustang_Interior::show()
{
    using std::cout;
    using std::endl;

    cout << "------- I N T E R I O R   &   C O N V E N I E N C E   F E A T U R E S -------" << endl << endl;

    cout << "Seat Type                                  : " << Seat_Type << endl;
    cout << "Adjustable Driver Seat                     : " << Adjustable_Driver << endl;
    cout << "Adjustable Passenger Seat                  : " << Adjustable_Passenger << endl;
    cout << "Adjustable Headrest                        : " << Adjustable_Headrest << endl;
    cout << "Heated Seats                               : " << Heated_Seats << endl;
    cout << "Power Windows                              : " << Power_Windows << endl;
    cout << "Air Conditioner                            : " << Air_Conditioner << endl;
    cout << "Automatic Climate Control                  : " << Automatic << endl;
    cout << "Infotainment System                        : " << Infotainment << endl;
    cout << "Audio System                               : " << Audio << endl;
    cout << "Connectivity                               : " << Connectivity << endl;
    cout << "Keyless Entry                              : " << Keyless_Entry << endl;
    cout << "Push Button Start/Stop                     : " << Push_Button << endl;
    cout << "Cruise Control                             : " << Cruise_Control << endl;
    cout << "Driving Modes                              : " << Driving_Modes << endl;
    cout << "Power Trunk Opener                         : " << Power_Trunk << endl << endl;
}