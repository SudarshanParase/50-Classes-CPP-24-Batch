#include "Ather_Highlights.hpp"

Ather_Highlights::Ather_Highlights
            (short int _1, short _2
            , float _3, float _4
            , short _5, char _6)
            {
                Riding_Range = _1;
                Top_Speed = _2;
                Kerb_Weight = _3;
                Charging_Time = _4;
                Seat_Height = _5;
                Charging_Port = _6;
            }

void Ather_Highlights::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------------- H I G H L I G H T S ---------------------------" << endl << endl;
    
    cout << "Riding Range                               : " << Riding_Range << " km" << endl;
    cout << "Top Speed                                  : " << Top_Speed << " kmph" << endl;
    cout << "Kerb Weight                                : " << Kerb_Weight << " kg" << endl;
    cout << "Charging Time (0-100%)                     : " << Charging_Time << " hrs" << endl;
    cout << "Seat Height                                : " << Seat_Height << " mm" << endl;
    cout << "USB Charging Port                          : " << Charging_Port << endl << endl;
}