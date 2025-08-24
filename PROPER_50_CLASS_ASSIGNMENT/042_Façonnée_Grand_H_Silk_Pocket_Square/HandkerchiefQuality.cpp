#include "HandkerchiefQuality.hpp"

Handkerchief_Quality::Handkerchief_Quality
        (std::string _1, std::string _2
        , std::string _3, std::string _4 )
        {
            Fabric = _1;
            Stitching = _2;
            Care = _3;
            Longevity = _4;
        }

void Handkerchief_Quality::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------- Q U A L I T Y   &   F U N C T I O N A L I T Y --------------" << endl << endl;

    cout << "Fabric Feel                    : " << Fabric << endl;
    cout << "Stitching                      : " << Stitching << endl;
    cout << "Care Instructions              : " << Care << endl;
    cout << "Longevity                      : " << Longevity << endl << endl;
}