#include "KoenigseggInterior.hpp"

Koenigsegg_Interior::Koenigsegg_Interior
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Seating = _1;
            Material = _2;
            Infotainment = _3;
            Amenities = _4;            
        }

void Koenigsegg_Interior::show()
{
     using std::cout;
    using std::endl;

    cout << "--------------------- I N T E R I O R   &   C O M F O R T ---------------------" << endl << endl;

    cout << "Seating Layout                 : " << Seating << endl;
    cout << "Materials                      : " << Material << endl;
    cout << "Infotainment                   : " << Infotainment << endl;
    cout << "Amenities                      : " << Amenities << endl << endl;
}