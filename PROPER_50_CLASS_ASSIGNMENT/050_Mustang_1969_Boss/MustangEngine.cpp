// Header File Inclusion
#include "MustangEngine.hpp"

Mustang_Engine::Mustang_Engine
        (std::string _1, short int _2 
        , char _3, char _4 
        , std::string _5, float _6 
        , std::string _7, std::string _8 
        , std::string _9, std::string _10 
        , std::string _11, std::string _12 
        , std::string _13, std::string _14 )
        {
                Engine_Type = _1;
                Engine_Displacement = _2;
                No_of_Cylinders = _3;
                Valve = _4;
                Compression = _5; 
                Bore = _6;
                Stroke = _7;
                Fuel_Supply = _8;
                Ignition = _9;
                Cooling = _10;
                Emission = _11;
                Transmission = _12;
                Clutch = _13;
                Drive_Type = _14;
        }

void Mustang_Engine::show()
{
    using std::cout;
    using std::endl;

    cout << "----------------- E N G I N E   &   T R A N S M I S S I O N -----------------" << endl << endl;

    cout << "Engine Type                                : " << Engine_Type << endl;
    cout << "Engine Displacement                        : " << Engine_Displacement <<  " cc" << endl;
    cout << "Number of Cylinder                         : " << No_of_Cylinders << endl;
    cout << "Valve Per Cylinder                         : " << Valve << endl;
    cout << "Compression Ratio                          : " << Compression << endl;
    cout << "Bore                                       : " << Bore << " mm" << endl;
    cout << "Stroke                                     : " << Stroke << endl;
    cout << "Fuel Supply                                : " << Fuel_Supply << endl;
    cout << "Ignition                                   : " << Ignition << endl;
    cout << "Cooling                                    : " << Cooling << endl;
    cout << "Emission Type                              : " << Emission << endl;
    cout << "Transmission                               : " << Transmission << endl;
    cout << "Clutch                                     : " << Clutch << endl;
    cout << "Drive Type                                 : " << Drive_Type << endl;
}