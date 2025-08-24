// Header File Inclusion
#include "DefenderStorage.hpp"

Defender_Storage::Defender_Storage
        (std::string _1, char _2 
        , char _3, char _4 
        , char _5 )
        {
            Cup = _1;
            Cooled = _2;
            Sunglass = _3;
            Driver = _4;
            Third_Row = _5;
        }

void Defender_Storage::show()
{
    using std::cout;
    using std::endl;
    
    cout << "------------------------------- S T O R A G E -------------------------------" << endl << endl;

    cout << "Cup Holders                                : " << Cup << endl;
    cout << "Cooled Glovebox                            : " << Cooled << endl;
    cout << "Sunglass Holder                            : " << Sunglass << endl;
    cout << "Driver Armrest Storage                     : " << Driver << endl;
    cout << "Third Row Cup Holders                      : " << Third_Row << endl << endl;
}