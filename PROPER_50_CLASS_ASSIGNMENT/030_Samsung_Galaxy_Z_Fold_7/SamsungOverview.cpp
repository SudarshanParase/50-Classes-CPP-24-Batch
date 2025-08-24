// Header File Inclusion
#include "SamsungOverview.hpp"

Samsung_Overview::Samsung_Overview
        (std::string _1, std::string _2 
        , std::string _3, short int _4 
        , std::string _5, std::string _6 
        , std::string _7, short int _8 
        , std::string _9)
        {
            Specs_Score = _1;
            Resolution = _2;
            RAM = _3;
            Storage = _4;
            CPU = _5;
            Rear_Camera = _6;
            Front_Camera = _7;
            Battery = _8;
            Unique_Features = _9;   
        }

void Samsung_Overview::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------ O V E R V I E W --------------------------------" << endl << endl;

    cout << "Specs Score                    : " << Specs_Score << endl;
    cout << "Display Resolution             : " << Resolution << endl;
    cout << "RAM                            : " << RAM << endl;
    cout << "Storage                        : " << Storage << " GB" << endl;
    cout << "CPU Clock Speed                : " << CPU << endl;
    cout << "Rear Camera                    : " << Rear_Camera << endl;
    cout << "Front Camera                   : " << Front_Camera << endl;
    cout << "Battery                        : " << Battery << " mAh" << endl;
    cout << "Unique Features                : " << Unique_Features << endl << endl;
}