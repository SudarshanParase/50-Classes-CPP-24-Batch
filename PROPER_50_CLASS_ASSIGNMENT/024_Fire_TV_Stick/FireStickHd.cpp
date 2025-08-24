#include "FireStickHd.hpp"

Fire_Stick::Fire_Stick
        (std::string _1, std::string _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7, std::string _8
        , std::string _9, std::string _10
        , std::string _11, std::string _12
        , std::string _13, std::string _14
        , std::string _15, std::string _16
        , std::string _17, std::string _18
        , std::string _19, std::string _20
        , std::string _21, char _22
        , std::string _23)
        {
            Size = _1;
            Weight = _2;
            Processor = _3;
            GPU = _4;
            Storage = _5;
            Wifi = _6;
            Bluetooth = _7;
            Voice_Support = _8;
            IR_Device = _9;
            Ports = _10;
            Audio_Support = _11;
            TV = _12;
            System = _13;
            Video = _14;
            Output = _15;
            Warranty = _16;
            Regional = _17;
            Accessibility = _18;
            Included = _19;
            Country_of_Origin = _20;
            Generic_Name = _21;
            Item_Quantity = _22;
            Address = _23;
        }

void Fire_Stick::show()
{
    using std::cout;
    using std::endl;

    cout << "\n------------------------------ F I R E   T V   S T I C K   H D ------------------------------" << endl << endl;
    
    cout << "Size                                   : " << Size << endl;
    cout << "Weight                                 : " << Weight << endl;
    cout << "Processor                              : " << Processor << endl;
    cout << "GPU                                    : " << GPU << endl;
    cout << "Storage                                : " << Storage << endl;
    cout << "Wifi                                   : " << Wifi << endl;
    cout << "Bluetooth                              : " << Bluetooth << endl;
    cout << "Voice Support                          : " << Voice_Support << endl;
    cout << "IR Device Control with Included Alexa  : " << IR_Device << endl;
    cout << "Ports                                  : " << Ports << endl;
    cout << "Audio Support                          : " << Audio_Support << endl;
    cout << "TV Compatibility                       : " << TV << endl;
    cout << "System Requirements                    : " << System << endl;
    cout << "Video Content Formats Supported        : " << Video << endl;
    cout << "Output Resolution Supported            : " << Output << endl;
    cout << "Warranty and Service                   : " << Warranty << endl;
    cout << "Regional Support                       : " << Regional << endl;
    cout << "Accessibility Features                 : " << Accessibility << endl;
    cout << "Included in the Box                    : " << Included << endl;
    cout << "Country of Origin                      : " << Country_of_Origin << endl;
    cout << "Generic Name                           : " << Generic_Name << endl;
    cout << "Item Quantity                          : " << Item_Quantity << endl;
    cout << "Name and Address of Importer           : " << Address << endl << endl; 
}