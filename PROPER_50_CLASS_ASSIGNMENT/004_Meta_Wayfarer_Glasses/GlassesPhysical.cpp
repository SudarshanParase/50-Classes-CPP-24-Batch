#include "GlassesPhysical.hpp"

Glasses_Physical::Glasses_Physical(std::string _1, std::string _2
                                , std::string _3, std::string _4)
                    {
                        Color = _1;
                        Material = _2;
                        Dimensions = _3;
                        Weight = _4;
                    }

void Glasses_Physical::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------- P H Y S I C A L -------------------------" << endl << endl;
    
    cout << "Color                                      : " << Color << endl;
    cout << "Material of Construction                   : " << Material << endl;
    cout << "Dimensions                                 : " << Dimensions << endl;
    cout << "Weight                                     : " << Weight << endl << endl;
    
}