#include "CanonGeneral.hpp"

Canon_General::Canon_General
        (std::string _1, char _2
        , std::string _3, std::string _4
        , std::string _5, std::string _6
        , std::string _7, std::string _8)
        {
            Power_Source = _1;
            Battery = _2;
            Input_Power = _3;
            Power_Consumption = _4;
            Operating_Conditions = _5;
            Certifications = _6;
            Dimensions = _7;
            Weight = _8;
        }

void Canon_General::show()
{
    using std::cout;
    using std::endl;
    
    cout << "----------------------------------- G E N E R A L --------------------------------" << endl << endl;
    
    cout << "Power Source                       : " << Power_Source << endl;
    cout << "Battery                            : " << Battery << endl;
    cout << "Input Power                        : " << Input_Power << endl;
    cout << "Power Consumption                  : " << Power_Consumption << endl;
    cout << "Operating Conditions               : " << Operating_Conditions << endl;
    cout << "Certifications                     : " << Certifications << endl;
    cout << "Dimensions (W x H x D)             : " << Dimensions << endl;
    cout << "Weight                             : " << Weight << endl << endl;
}