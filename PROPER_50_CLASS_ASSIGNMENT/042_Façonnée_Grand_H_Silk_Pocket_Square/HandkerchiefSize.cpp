#include "HandkerchiefSize.hpp"

Handkerchief_Size::Handkerchief_Size
        (std::string _1, std::string _2 
        , std::string _3 )
        {
            Size = _1;
            Weight = _2;
            Pocket = _3;
        }

void Handkerchief_Size::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------- S I Z E   &   D I M E N S I O N S --------------------" << endl << endl;

    cout << "Size                           : " << Size << endl;
    cout << "Weight                         : " << Weight << endl;
    cout << "Pocket Fit                     : " << Pocket << endl << endl;
}