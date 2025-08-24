#include "HandbagStorage.hpp"

Handbag_Storage::Handbag_Storage
        (std::string _1, std::string _2 
        , std::string _3, std::string _4
        , std::string _5)
        {
            Interior = _1;
            Laptop = _2;
            Closure = _3;
            Wear = _4;
            Water = _5;
        }

void Handbag_Storage::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------- S T O R A G E   &   F U N C T I O N A L I T Y --------------" << endl << endl;
 
    cout << "Interior Pockets               : " << Interior << endl;
    cout << "Laptop Fit                     : " << Laptop << endl;
    cout << "Closure Type                   : " << Closure << endl;
    cout << "Wear Method                    : " << Wear << endl;
    cout << "Water Resistance               : " << Water << endl << endl;
}