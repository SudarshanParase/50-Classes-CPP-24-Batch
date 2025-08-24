#include "FeadshipInterior.hpp"

Feadship_Interior::Feadship_Interior
        (std::string _1, std::string _2
        , std::string _3, std::string _4 
        , std::string _5)
        {
            Guest = _1;
            Crew = _2;
            Layout = _3;
            Special = _4;
            Luxury = _5;
        }

void Feadship_Interior::show()
{
    using std::cout;
    using std::endl;

    cout << "------------ I N T E R I O R   D E S I G N   &   A M E N I T I E S ------------" << endl << endl;
   
    cout << "Guest Capacity                 : " << Guest << endl;
    cout << "Crew                           : " << Crew << endl;
    cout << "Layout                         : " << Layout << endl;
    cout << "Special Facilities             : " << Special << endl;
    cout << "Luxury Venues                  : " << Luxury << endl << endl;
}