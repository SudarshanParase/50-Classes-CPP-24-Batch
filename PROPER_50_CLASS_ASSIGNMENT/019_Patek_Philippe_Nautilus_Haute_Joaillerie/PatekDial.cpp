#include "PatekDial.hpp"

Patek_Dial::Patek_Dial
    (std::string _1, std::string _2
    , std::string _3, std::string _4)
    {
        Total = _1;
        Brilliant = _2;
        Baguette = _3;
        Dial = _4;
    }

void Patek_Dial::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- G E M - S E T T I N G   &   D I A L ---------------------" << endl << endl;
    
    cout << "Total Diamonds                 : " << Total << endl;
    cout << "Brilliant-Cut Diamonds         : " << Brilliant << endl;
    cout << "Baguette-Cut Diamonds          : " << Baguette << endl;
    cout << "Dial Material                  : " << Dial << endl << endl;
}