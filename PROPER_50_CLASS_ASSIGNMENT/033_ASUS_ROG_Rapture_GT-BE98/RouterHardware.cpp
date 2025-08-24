#include "RouterHardware.hpp"

Router_Hardware::Router_Hardware
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Processor = _1;
            RAM = _2;
            Flash = _3;
            Cooling = _4;
        }

void Router_Hardware::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------------- H A R D W A R E   S P E C S -----------------------" << endl << endl;

    cout << "Processor (CPU)                : " << Processor << endl;
    cout << "RAM                            : " << RAM << endl;
    cout << "Flash Memory                   : " << Flash << endl;
    cout << "Cooling                        ; " << Cooling << endl << endl;
}