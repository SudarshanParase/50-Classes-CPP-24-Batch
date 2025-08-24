// Header File Inclusion
#include "PowerSignal.hpp"

Power_Signal::Power_Signal
    (char _1, char _2 
    , char _3, char _4 
    , std::string _5, char _6 
    , char _7, std::string _8 
    , std::string _9)
    {
        EQ = _1;
        Parametric = _2;
        Semi = _3;
        Filters = _4;
        Dynamic_Processing = _5;
        Alignment = _6;
        Phase_Adjustment = _7;
        Digital = _8;
        Maximum = _9;
    }

void Power_Signal::show()
{
    using std::cout;
    using std::endl;
    
    cout << "------------------------- S I G N A L   P R O C E S S I N G ----------------------" << endl << endl;

    cout << "EQ                                 : " << EQ << endl;
    cout << "Parametric EQ                      : " << Parametric << endl;
    cout << "Semi-Parametric EQ                 : " << Semi << endl;
    cout << "Filters                            : " << Filters << endl;
    cout << "Dynamic Processing                 : " << Dynamic_Processing << endl;
    cout << "Alignment Delay                    : " << Alignment << endl;
    cout << "Phase Adjustment                   : " << Phase_Adjustment << endl;
    cout << "Digital Signal Processing          : " << Digital << endl;
    cout << "Maximum Sampling Rate              : " << Maximum << endl << endl;
}