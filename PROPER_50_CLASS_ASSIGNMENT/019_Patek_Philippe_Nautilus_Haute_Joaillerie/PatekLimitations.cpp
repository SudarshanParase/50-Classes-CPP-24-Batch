#include "PatekLimitations.hpp"

Patek_Limitations::Patek_Limitations
        (std::string _1, std::string _2
        , std::string _3)
        {
            Practical = _1;
            Complications = _2;
            Very = _3;
        }

void Patek_Limitations::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------- L I M I T A T I O N S ----------------------------" << endl << endl;

    cout << "Not a Practical Sports Watch   : " << Practical << endl;
    cout << "No Complications               : " << Complications << endl;
    cout << "Very Exclusive                 : " << Very << endl << endl;
}