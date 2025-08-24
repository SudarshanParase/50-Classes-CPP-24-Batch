#include "SamsungPackagingInfo.hpp"

Samsung_Packaging::Samsung_Packaging
        (float _1, std::string _2)
        {
            Package_Weight = _1;
            Box_Dimensions = _2;
        }

void Samsung_Packaging::show()
{
    using std::cout;
    using std::endl;
    
    cout << "---------------------------- P A C K A G I N G   I N F O -------------------------" << endl << endl;

    cout << "Package Weight                     : " << Package_Weight << " lb" << endl;
    cout << "Box Dimensions (L X W X H)         : " << Box_Dimensions << endl << endl; 
}