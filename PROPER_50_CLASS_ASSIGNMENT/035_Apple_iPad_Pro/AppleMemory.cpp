// Header File Inclusion
#include "AppleMemory.hpp"

Apple_Memory::Apple_Memory
    (std::string _1, short int _2 
    , char _3 )
    {
        RAM = _1;
        Storage = _2;
        Card_Slot = _3;
    }

void Apple_Memory::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------- M E M O R Y ----------------------------------" << endl << endl;

    cout << "RAM                            : " << RAM << endl;
    cout << "Storage                        : " << Storage << endl;
    cout << "Card Slot                      : " << Card_Slot << endl << endl;
}