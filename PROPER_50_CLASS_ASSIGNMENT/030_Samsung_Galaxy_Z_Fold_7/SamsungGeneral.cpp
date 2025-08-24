// Header File Inclusion
#include "SamsungGeneral.hpp"

Samsung_General::Samsung_General
        (std::string _1, std::string _2 
        , std::string _3, char _4
        , std::string _5, char _6
        , std::string _7, std::string _8 
        , char _9)
        {
            Country_of_Origin = _1;
            Model = _2;
            Sim_Type = _3;
            Dual_Sim = _4;
            Sim_Size = _5;
            SAR = _6;
            Device_Type = _7;
            Release_Date = _8;
            Box = _9;
        }

void Samsung_General::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------- G E N E R A L ---------------------------------" << endl << endl;

    cout << "Country of Origin              : " << Country_of_Origin << endl;
    cout << "Model                          : " << Model << endl;
    cout << "Sim Type                       : " << Sim_Type << endl;
    cout << "Dual Sim                       : " << Dual_Sim << endl;
    cout << "Sim Size                       : " << Sim_Size << endl;
    cout << "SAR                            : " << SAR << endl;
    cout << "Device Type                    : " << Device_Type << endl;
    cout << "Release Date                   : " << Release_Date << endl;
    cout << "In The Box                     : " << Box << endl << endl;
}