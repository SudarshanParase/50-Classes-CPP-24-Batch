#include "GlassesBasicInfo.hpp"

Glasses_Basic_Info::Glasses_Basic_Info(std::string _1 , std::string _2
                                    , std::string _3 )
                    {
                        Brand = _1;
                        SKU = _2;
                        MPN = _3;
                    }


void Glasses_Basic_Info::show()
                    {
                        using std::cout;
                        using std::endl;

                        cout << "----------------------- B A S I C   I N F O -----------------------" << endl << endl;
                        
                        cout << "Brand                                      : " << Brand << endl;
                        cout << "SKU                                        : " << SKU << endl;
                        cout << "MPN                                        : " << MPN << endl << endl;

                    }