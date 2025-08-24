#include "MavicLimitations.hpp"

Mavic_Limitations::Mavic_Limitations
        (std::string _1, std::string _2
        , std::string _3)
        {
            Not = _1;
            High = _2;
            Weight = _3;
        }

void Mavic_Limitations::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------- L I M I T A T I O N S ----------------------------" << endl << endl;
   
    cout << "Not offcially available in U.S.: " << Not << endl;
    cout << "High Cost                      : " << High << endl;
    cout << "Weight above 250 g             : " << Weight << endl << endl;
}