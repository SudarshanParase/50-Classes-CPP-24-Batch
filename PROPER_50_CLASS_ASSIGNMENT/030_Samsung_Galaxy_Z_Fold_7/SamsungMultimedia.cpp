// Header File Inclusion
#include "SamsungMultimedia.hpp"

Samsung_Multimedia::Samsung_Multimedia  
        (char _1, std::string _2 
        , std::string _3, char _4 
        , char _5 )
        {
            Email = _1;
            Music = _2;
            Video = _3;
            FM_Radio = _4;
            Document = _5;
        }

void Samsung_Multimedia::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------------- M U L T I M E D I A -----------------------------" << endl << endl;

    cout << "Email                          : " << Email << endl;
    cout << "Music                          : " << Music << endl;
    cout << "Video                          : " << Video << endl;
    cout << "FM Radio                       : " << FM_Radio << endl;
    cout << "Document Reader                : " << Document << endl << endl;
}