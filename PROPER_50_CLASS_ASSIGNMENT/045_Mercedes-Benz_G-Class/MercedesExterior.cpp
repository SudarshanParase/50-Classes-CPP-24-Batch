// Header File Inclusion
#include "MercedesExterior.hpp"

Mercedes_Exterior::Mercedes_Exterior
        (std::string _1, char _2 
        , char _3, std::string _4 
        , std::string _5, char _6 
        , std::string _7)
        {
            Sunroof = _1;
            Roof = _2;
            Body = _3;
            Rub = _4;
            Body_Kit = _5;
            Chrome = _6;
            Antenna = _7;
        }

void Mercedes_Exterior::show()
{
    using std::cout;
    using std::endl;

    cout << "------------------------------ E X T E R I O R ------------------------------" << endl << endl;

    cout << "Sunroof                                    : " << Sunroof << endl;
    cout << "Roof Rails                                 : " << Roof << endl;
    cout << "Body-coloured Bumpers                      : " << Body << endl;
    cout << "Rub-strips                                 : " << Rub << endl;
    cout << "Body Kit                                   : " << Body_Kit << endl;
    cout << "Chrome Finish Exhast Pipe                  : " << Chrome << endl;
    cout << "Antenna                                    : " << Antenna << endl << endl;
}