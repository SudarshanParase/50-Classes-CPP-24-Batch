#include "SamsungKeySpecs.hpp"

Samsung_Key_Specs::Samsung_Key_Specs
            (std::string _1, std::string _2, std::string _3
                        , std::string _4, std::string _5, std::string _6
                        , std::string _7)

            {
                Display_System = _1;
                Native_Chip_Resolution = _2;
                Max_Brightness = _3;
                Projection_Size = _4;
                Supported_HDR = _5;
                I_O = _6;
                Light_Source = _7;
            }

void Samsung_Key_Specs::show()
{
    using std::cout;
    using std::endl;
    
    cout << "--------------------------------- K E Y   S P E C S ------------------------------" << endl << endl;
    
    cout << "Display System                     : " << Display_System << endl;
    cout << "Native Chip Resolution             : " << Native_Chip_Resolution << endl;
    cout << "Maximum Brightness                 : " << Max_Brightness << endl;
    cout << "Projection Size                    : " << Projection_Size << endl;
    cout << "Supported HDR Input Formats        : " << Supported_HDR << endl;
    cout << "Inputs/Output                      : " << I_O << endl;
    cout << "Light Source                       : " << Light_Source << endl;
}