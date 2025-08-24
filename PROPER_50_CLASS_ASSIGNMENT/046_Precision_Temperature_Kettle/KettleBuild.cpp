#include "KettleBuild.hpp"

Kettle_Build::Kettle_Build
    (std::string _1, std::string _2 
    , std::string _3, std::string _4 
    , std::string _5 )
    {
        Body = _1;
        Heating = _2;
        Cool = _3;
        Water = _4;
        Base = _5;
    }

void Kettle_Build::show()
{
    using std::cout;
    using std::endl;
 
    cout << "-------------------- B U I L D   &   M A T E R I A L S --------------------" << endl << endl;

    cout << "Body Material                  : " << Body << endl;
    cout << "Heating ELement                : " << Heating << endl;
    cout << "Cool-Touch Exterior            : " << Cool << endl;
    cout << "Water Window                   : " << Water << endl;
    cout << "Base Design                    : " << Base << endl << endl;
}