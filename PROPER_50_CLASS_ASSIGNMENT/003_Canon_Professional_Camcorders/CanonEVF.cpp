#include "CanonEVF.hpp"

Canon_EVF::Canon_EVF(std::string _1, std::string _2
                    , int _3)
                    {
                        Display_Type = _1;
                        Screen_Size = _2;
                        EVF_Resolution = _3;
                    }

void Canon_EVF::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------ E V F ------------------------------" << endl << endl;
    
    cout << "EVF Display Type                           : " << Display_Type << endl;
    cout << "Screen Size                                : " << Screen_Size << endl;
    cout << "EVF Resolution                             : " << EVF_Resolution << " Dots" << endl << endl;
}