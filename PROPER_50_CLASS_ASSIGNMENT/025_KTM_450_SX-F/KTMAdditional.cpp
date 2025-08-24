// Header File Inclusion
#include "KTMAdditional.hpp"

Ktm_Additional::Ktm_Additional
    (std::string _1)
    {
        Additional = _1;
    }

void Ktm_Additional::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------ A D D I T I O N A L   F E A T U R E S ------------------" << endl << endl;

    cout << "Additional Features                            : " << Additional << endl << endl;
}