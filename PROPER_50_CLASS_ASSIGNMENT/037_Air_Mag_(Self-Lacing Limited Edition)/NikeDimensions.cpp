#include "NikeDimensions.hpp"

Nike_Dimensions::Nike_Dimensions
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Sizes = _1;
            Weight = _2;
            Fit = _3;
            Insole = _4;
        }

void Nike_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- F I T   &   D I M E N S I O N S ---------------------" << endl << endl;

    cout << "Sizes Available                : " << Sizes << endl;
    cout << "Weight (Each Shoe)             : " << Weight << endl;
    cout << "Fit Type                       : " << Fit << endl;
    cout << "Insole Type                    : " << Insole << endl << endl;
}