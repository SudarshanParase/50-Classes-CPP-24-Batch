// Header File Inclusion
#include "MustangExterior.hpp"

Mustang_Exterior::Mustang_Exterior
        (std::string _1, std::string _2 
        , char _3, char _4 
        , std::string _5, char _6 
        , char _7, char _8 
        , char _9, char _10)
        {
            Headlight = _1;
            Tail_Light = _2;
            Fog_Lights = _3;
            Daytime = _4;
            Outside_Rear = _5;
            Front_Wiper = _6;
            Rear_Wiper = _7;
            Sunroof = _8;
            Moonroof = _9;
            Roof_Rails = _10;
        }

void Mustang_Exterior::show()
{
    using std::cout;
    using std::endl;

    cout << "--------------------- E X T E R I O R   F E A T U R E S ---------------------" << endl << endl;

    cout << "Headlight                                  : " << Headlight << endl;
    cout << "Tail Light                                 : " << Tail_Light << endl;
    cout << "Fog Lights                                 : " << Fog_Lights << endl;
    cout << "Daytime Running Lights                     : " << Daytime << endl;
    cout << "Outside Rear View Mirror                   : " << Outside_Rear << endl;
    cout << "Front Wiper                                : " << Front_Wiper << endl;
    cout << "Rear Wiper                                 : " << Rear_Wiper << endl;
    cout << "Sunroof                                    : " << Sunroof << endl;
    cout << "Moonroof                                   : " << Moonroof << endl;
    cout << "Roof Rails                                 : " << Roof_Rails << endl << endl;
}