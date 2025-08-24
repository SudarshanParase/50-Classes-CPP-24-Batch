#include "CanonPrinterMediaHandling.hpp"

Canon_Printer_Media::Canon_Printer_Media
        (std::string _1, std::string _2
        , std::string _3, std::string _4)
        {
            Media_Handling = _1;
            Media_Sizes = _2;
            Media_Thickness = _3;
            Media_Roll_Diameter = _4;
        }

void Canon_Printer_Media::show()
{
    using std::cout;
    using std::endl;
    
    cout << "-------------------- P R I N T E R   M E D I A   H A N D L I N G -----------------" << endl << endl;
    
    cout << "Media Handling                     : " << Media_Handling << endl;
    cout << "Media Sizes                        : " << Media_Sizes << endl;
    cout << "Media Thicknesss                   : " << Media_Thickness << endl;
    cout << "Media Roll Diameter                : " << Media_Roll_Diameter << endl << endl;
 }