// Header File Inclusion
#include "RingDesign.hpp"

Ring_Design::Ring_Design
    (std::string _1, std::string _2 
    , std::string _3 )
    {
        Visual = _1;
        Design = _2;
        Hallmarks = _3;
    }

void Ring_Design::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------- A E S T H E T I C   &   D E S I G N -------------------" << endl << endl;

    cout << "Visual Impact                  : " << Visual << endl;
    cout << "Design Style                   : " << Design << endl;
    cout << "Hallmarks of Luxury            : " << Hallmarks << endl << endl;
}