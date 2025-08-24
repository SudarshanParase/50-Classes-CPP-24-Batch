#include "MavicTransmission.hpp"

Mavic_Transmission::Mavic_Transmission
        (std::string _1, std::string _2 
        , std::string _3)
        {
            Video = _1;
            Internal = _2;
            Charging = _3;
        }

void Mavic_Transmission::show()
{
    using std::cout;
    using std::endl;
     
    cout << "----------------- T R A N S M I S S I O N   &   S T O R A G E -----------------" << endl << endl;

    cout << "Video Transmission             : " << Video << endl;
    cout << "Internal Storage               : " << Internal << endl;
    cout << "Charging                       : " << Charging << endl << endl;
}