#include "CanonPackagingInfo.hpp"

Canon_Packaging::Canon_Packaging(std::string _1, std::string _2)
{
    Package_Weight = _1;
    Box_Dimensions = _2;
}

void Canon_Packaging::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------- P A C K A G I N G   I N F O -------------------" << endl << endl;
    
    cout << "Package Weight                             : " << Package_Weight << endl;
    cout << "Box Dimensions (L x W x H)                 : " << Box_Dimensions << endl << endl;
}