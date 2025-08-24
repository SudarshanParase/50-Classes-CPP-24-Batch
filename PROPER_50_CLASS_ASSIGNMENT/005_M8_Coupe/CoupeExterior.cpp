#include "CoupeExterior.hpp"

Coupe_Exterior::Coupe_Exterior(char _1, std::string _2, char _3
                            , char _4, char _5)
            {
                Sunroof = _1;
                Antenna = _2;
                Body_Coloured_Bumpers = _3;
                Body_Kit = _4;
                Chrome_Finish_Exhaust_Pipe = _5;
            }

void Coupe_Exterior::show()
{
    using std::cout;
    using std::endl;

    cout << "-------------------------------------EXTERIOR-------------------------------------" << endl << endl;
    
    cout << "Sunroof/Moonroof                           : " << Sunroof << endl;
    cout << "Antenna                                    : " << Antenna << endl;
    cout << "Body-coloured Bumpers                      : " << Body_Coloured_Bumpers << endl;
    cout << "Body Kit                                   : " << Body_Kit << endl;
    cout << "Chrome Finish Exhaust Pipe                 : " << Chrome_Finish_Exhaust_Pipe << endl << endl;
}