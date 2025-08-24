#include "AppleStorage.hpp"

Apple_Storage::Apple_Storage
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , char _5)
    {
        Type = _1;
        Configurations = _2;
        Read = _3;
        Write = _4;
        User = _5;
    }

void Apple_Storage::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------- S T O R A G E --------------------------------" << endl << endl;
    
    cout << "Type                           : " << Type << endl;
    cout << "Configurations                 : " << Configurations << endl;
    cout << "Read Speed                     : " << Read << endl;
    cout << "Write Speed                    : " << Write << endl;
    cout << "User Replaceable?              : " << User << endl << endl;
}