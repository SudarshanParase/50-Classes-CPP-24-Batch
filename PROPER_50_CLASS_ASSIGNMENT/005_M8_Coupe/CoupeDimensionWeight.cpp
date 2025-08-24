#include "CoupeDimensionWeight.hpp"

Coupe_Dimension::Coupe_Dimension(short int _1, short int _2, short int _3
                                , short int _4, short int _5)
                {
                    Length = _1;
                    Width = _2;
                    Height = _3;
                    Ground_Clearance = _4;
                    Wheelbase = _5;
                }

void Coupe_Dimension::show()
                {
                    using std::cout;
                    using std::endl;

                    cout << "-------------------------------DIMENSIONS & WEIGHT--------------------------------" << endl << endl;
    
                    cout << "Length                                     : " << Length << " mm" << endl;
                    cout << "Width                                      : " << Width << " mm" << endl;
                    cout << "Height                                     : " << Height << " mm" << endl;
                    cout << "Ground Clearance (unladen)                 : " << Ground_Clearance << " mm" << endl;
                    cout << "Wheelbase                                  : " << Wheelbase << " mm" << endl << endl;
                }