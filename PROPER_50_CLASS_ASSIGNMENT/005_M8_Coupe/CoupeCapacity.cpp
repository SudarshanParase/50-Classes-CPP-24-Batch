#include "CoupeCapacity.hpp"

Coupe_Capacity::Coupe_Capacity(std::string _1, std::string _2
                              , std::string _3, short int _4
                              , std::string _5)
                {
                    Seating_Capacity = _1;
                    No_of_Rows = _2;
                    Doors = _3;
                    Bootspace = _4;
                    Fuel_Tank = _5;
                }

void Coupe_Capacity::show()
            {
                using std::cout;
                using std::endl;

                cout << "-------------------------------------CAPACITY-------------------------------------" << endl << endl;
    
                cout << "Seating Capacity                           : " << Seating_Capacity << endl;
                cout << "No of Rows                                 : " << No_of_Rows << endl;
                cout << "Doors                                      : " << Doors << endl;
                cout << "Bootspace                                  : " << Bootspace << " Litres" << endl;
                cout << "Fuel Tank Capacity                         : " << Fuel_Tank << endl << endl;
            }