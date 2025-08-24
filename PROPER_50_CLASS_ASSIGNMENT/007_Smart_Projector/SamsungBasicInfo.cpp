#include "SamsungBasicInfo.hpp"

Samsung_Basic_Info::Samsung_Basic_Info
                (std::string _1, std::string _2 
                , std::string _3, std::string _4 )
            {
                Brand = _1;
                SKU = _2;
                MPN = _3;
                UPC = _4;
            }

void Samsung_Basic_Info::show()
{
    using std::cout;
    using std::endl;
    
    cout << "-------------------------------- B A S I C   I N F O -----------------------------" << endl << endl;

    cout << "Brand                              : " << Brand << endl;
    cout << "SKU                                : " << SKU << endl;
    cout << "MPN                                : " << MPN << endl;
    cout << "UPC/HSN                            : " << UPC << endl << endl;
}