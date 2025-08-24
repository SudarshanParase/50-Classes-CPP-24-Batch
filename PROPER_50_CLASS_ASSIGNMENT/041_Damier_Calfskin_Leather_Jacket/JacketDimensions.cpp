#include "JacketDimensions.hpp"

Jacket_Dimensions::Jacket_Dimensions
        (std::string _1, std::string _2 
        , std::string _3, std::string _4 
        , std::string _5 )
        {
            Cut = _1;
            Sizes = _2;
            Length = _3;
            Weight = _4;
            Fit = _5;
        }

void Jacket_Dimensions::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- F I T   &   D I M E N S I O N S ---------------------" << endl << endl;

    cout << "Cut                            : " << Cut << endl;
    cout << "Sizes                          : " << Sizes << endl;
    cout << "Length                         : " << Length << endl;
    cout << "Weight                         : " << Weight << endl;
    cout << "Fit Notes                      : " << Fit << endl << endl;
}