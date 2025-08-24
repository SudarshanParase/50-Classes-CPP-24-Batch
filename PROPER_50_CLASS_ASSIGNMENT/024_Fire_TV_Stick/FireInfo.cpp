#include "FireInfo.hpp"

Fire_Info::Fire_Info
    (std::string _1, std::string _2
    , std::string _3, std::string _4
    , std::string _5, std::string _6 
    , std::string _7, std::string _8
    , std::string _9, std::string _10 
    , std::string _11, std::string _12
    , std::string _13, std::string _14 
    , std::string _15)
    {
        Price = _1;
        Rating = _2;
        Remote = _3;
        Power = _4;
        Supported_A = _5;
        Best_For = _6;
        Hands = _7;
        Picture = _8;
        Behind = _9;
        Storage = _10;
        Memory = _11;
        Wifi = _12;
        Live = _13;
        Quad = _14;
        Optional = _15;
    }

void Fire_Info::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------- F I R E   T V   S T I C K   D E V I C E S -------------------------" << endl << endl;

    cout << "Price                                  : " << Price << endl;
    cout << "Ratings                                : " << Rating << endl;
    cout << "Included Remote                        : " << Remote << endl;
    cout << "Power/Volume Button With Remote        : " << Power << endl;
    cout << "Supported Audio                        : " << Supported_A << endl;
    cout << "Best for                               : " << Best_For << endl;
    cout << "Hands-Free With ALexa                  : " << Hands << endl;
    cout << "Picture Quality                        : " << Picture << endl;
    cout << "Behind-The-TV Design                   : " << Behind << endl;
    cout << "Storage                                : " << Storage << endl;
    cout << "Memory                                 : " << Memory << endl;
    cout << "Wi-Fi 6 Support                        : " << Wifi << endl;
    cout << "Live View Picture-In-Picture           : " << Live << endl;
    cout << "Quad-Core Processor                    : " << Quad << endl;
    cout << "Optional Amazon Ethernet Adapter       : " << Optional << endl << endl;
}