// Header File Inclusion
#include "AppleMultimedia.hpp"

Apple_Multimedia::Apple_Multimedia
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 
    , char _5, char _6 )
    {
        Supports = _1;
        Email = _2;
        Music = _3;
        Video = _4;
        Radio = _5;
        Document = _6;
    }

void Apple_Multimedia::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------- M U L T I M E D I A ------------------------------" << endl << endl;

    cout << "Supports                       : " << Supports << endl;
    cout << "Email                          : " << Email << endl;
    cout << "Music                          : " << Music << endl;
    cout << "Video                          : " << Video << endl;
    cout << "FM Radio                       : " << Radio << endl;
    cout << "Document Reader                : " << Document << endl << endl;
    
}