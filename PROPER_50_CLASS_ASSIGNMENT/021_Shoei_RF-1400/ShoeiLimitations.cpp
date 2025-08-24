#include "ShoeiLimitations.hpp"

Shoei_Limitations::Shoei_Limitations
        (std::string _1, std::string _2
        , std::string _3)
        {
            Price = _1;
            Modular = _2;
            No = _3;
        }

void Shoei_Limitations::show()
{
    using std::cout;
    using std::endl;

    cout << "---------------------------- L I M I T A T I O N S ----------------------------" << endl << endl;
  
    cout << "Price                          : " << Price << endl;
    cout << "Modular Features               : " << Modular << endl;
    cout << "No MIPS                        : " << No << endl << endl;
}