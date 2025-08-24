// Header File Inclusion
#include "SamsungMemory.hpp"

Samsung_Memory::Samsung_Memory
    (std::string _1, char _2
    , short int _3, std::string _4 )
    {
        RAM = _1;
        RAM_Type = _2;
        Storage = _3;
        Storage_Type = _4;
    }

void Samsung_Memory::show()
{
    using std::cout;
    using std::endl;
 
    cout << "-------------------------------- M E M O R Y ----------------------------------" << endl << endl;

    cout << "RAM                            : " << RAM << endl;
    cout << "RAM Type                       : " << RAM_Type << endl;
    cout << "Storage                        : " << Storage << " GB" << endl;
    cout << "Storage Type                   : " << Storage_Type << endl;
}