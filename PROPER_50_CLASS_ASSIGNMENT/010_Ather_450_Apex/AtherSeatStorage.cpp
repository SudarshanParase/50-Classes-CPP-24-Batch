#include "AtherSeatStorage.hpp"

Ather_Seat::Ather_Seat
    (std::string _1, char _2
    , char _3, char _4
    , char _5, char _6
    , char _7, char _8)
    {
        Under_Seat = _1;
        Front_Storage = _2;
        Document_Storage = _3;
        Helment_Hooks = _4;
        Pilion_Seat = _5;
        Pilion_Backrest = _6;
        Pilion_Footrest = _7;
        Pilion_Garb = _8;
    }

void Ather_Seat::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- S E A T   &   S T O R A G E -----------------------" << endl << endl;
    
    cout << "Under Seat Storage                         : " << Under_Seat << endl;
    cout << "Front Storage Box                          : " << Front_Storage << endl;
    cout << "Document Storage                           : " << Document_Storage << endl;
    cout << "Helment Hooks                              : " << Helment_Hooks << endl;
    cout << "Pilion Seat                                : " << Pilion_Seat << endl;
    cout << "Pilion Backrest                            : " << Pilion_Backrest << endl;
    cout << "Pilion Footrest                            : " << Pilion_Footrest << endl;
    cout << "Pilion Grab Rail                           : " << Pilion_Garb << endl << endl;
}