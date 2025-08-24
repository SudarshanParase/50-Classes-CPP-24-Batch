// Header File Inclusion
#include "AppleGeneral.hpp"

Apple_General::Apple_General
    (std::string _1, std::string _2 
    , char _3, char _4 
    , std::string _5, std::string _6 
    , char _7, char _8)
    {
        Model = _1;
        Sim_Type = _2;
        Dual_Sim = _3;
        Sim_Size = _4;
        Device_Type = _5;
        Release_Date = _6;
        Box = _7;
        Voice_Call = _8;
    }

void Apple_General::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------- G E N E R A L ---------------------------------" << endl << endl;

    cout << "Model                          : " << Model << endl;
    cout << "Sim Type                       : " << Sim_Type << endl;
    cout << "Dual Sim                       : " << Dual_Sim << endl;
    cout << "Sim Size                       : " << Sim_Size << endl;
    cout << "Device Type                    : " << Device_Type << endl;
    cout << "Release Date                   : " << Release_Date << endl;
    cout << "In The Box                     : " << Box << endl;
    cout << "Voice Call                     : " << Voice_Call << endl << endl;
}