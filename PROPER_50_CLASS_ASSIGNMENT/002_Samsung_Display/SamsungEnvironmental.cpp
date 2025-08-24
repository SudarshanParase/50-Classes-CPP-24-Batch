// Header File Inclusion   
#include "SamsungEnvironmental.hpp"

Samsung_Environmental::Samsung_Environmental(std::string _1, std::string _2, std::string _3
                            , std::string _4, std::string _5)
                            {
                                Operating_Temperature = _1;
                                Operating_Humidity = _2;
                                Power_Consumption = _3;
                                AC_Input_Power = _4;
                                Power_Adapter_Type = _5;
                            }


void Samsung_Environmental::show(){

    using std::cout;
    using std::endl;

            cout << "---------------------- E N V I R O N M E N T A L ----------------------" << endl << endl;

            cout << "Operating Temperature                  : " << Operating_Temperature << endl;
            cout << "Operating Humidity                     : " << Operating_Humidity << endl;
            cout << "Power Consumption                      : " << Power_Consumption << endl;
            cout << "AC Input Power                         : " << AC_Input_Power << endl;
            cout << "Power Adapter Type                     : " << Power_Adapter_Type << endl << endl;

}