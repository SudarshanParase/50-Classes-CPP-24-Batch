#include "SamsungBasicInfo.hpp"


Samsung_Basic_Info::Samsung_Basic_Info(int _1, std::string _2
                                      , std::string _3, std::string _4)
                                      {
                                        Price = _1;
                                        Brand = _2;
                                        SKU = _3;
                                        MPN = _4;
                                      }


void Samsung_Basic_Info::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------ B A S I C   I N F O R M A T I O N ------------------" << endl << endl;
     
    cout << "Brand                                  : " << Brand << endl;
    cout << "Price                                  : " << Price << " Inr" << endl;
    cout << "SKU                                    : " << SKU << endl;
    cout << "MPN                                    : " << MPN << endl << endl;
}

