// Header File Inclusion
#include "AppleOverview.hpp"

Apple_Overview::Apple_Overview
        (std::string _1, char _2 
        , std::string _3, std::string _4 
        , char _5, std::string _6 
        , std::string _7, std::string _8
        , std::string _9, short int _10 
        , std::string _11, std::string _12)
        {
            Specs_Score = _1;
            Sim_Count = _2;
            Display_Size = _3;
            Resolution = _4;
            Screen_Ratio = _5;
            RAM = _6;
            CPU = _7;
            CPU_Cores = _8;
            Front_Camera = _9;
            Weight = _10;
            Thickness = _11;
            Unique_Features = _12;
        }

void Apple_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------ O V E R V I E W --------------------------------" << endl << endl;

    cout << "Specs Score                    : " << Specs_Score << endl;
    cout << "Sim Count                      : " << Sim_Count << endl;
    cout << "Display Size                   : " << Display_Size << endl;
    cout << "Display Resolution             : " << Resolution << endl;
    cout << "Screen To Body Ratio           : " << Screen_Ratio << endl;
    cout << "RAM                            : " << RAM << endl;
    cout << "CPU Clock Speed                : " << CPU << endl;
    cout << "CPU Cores                      : " << CPU_Cores << endl;
    cout << "Front Camera                   : " << Front_Camera << endl;
    cout << "Weight                         : " << Weight << " g" << endl;
    cout << "Thickness                      : " << Thickness << endl;
    cout << "Unique Features                : " << Unique_Features << endl << endl;
    
}