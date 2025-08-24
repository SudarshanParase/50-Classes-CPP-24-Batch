// Header File Inclusion
#include "PowerDrivers.hpp" 

Power_Drivers::Power_Drivers
        (char _1, std::string _2 
        , std::string _3, std::string _4 )
        {
            MF_Driver = _1;
            LF_Driver = _2;
            LF_Voice = _3;
            Magnet = _4;
        }

void Power_Drivers::show()
{
    using std::cout;
    using std::endl;
    
    cout << "----------------------------------- D R I V E R S --------------------------------" << endl << endl;

    cout << "MF Driver                          : " << MF_Driver << endl;
    cout << "LF Driver                          : " << LF_Driver << endl;
    cout << "LF Voice Coil                      : " << LF_Voice << endl;
    cout << "Magnet                             : " << Magnet << endl << endl;
}