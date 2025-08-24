// Header file Inclusion
#include "Ergotron_Header_File.hpp"

int main(void)
{
    std::cout << "\n============================= E R G O T R O N   D E S K ==========================" << std::endl << std::endl;
            
    Ergotron_Basic_Info Basic_Info("ERGOTRON", "6613173403733", "45-241-224"
                                , "698833073829");

                Basic_Info.show();

    Ergotron_General General("Up to 34 / 86.4 cm", '1', "25 lb / 11.3 kg", "75 x 75 to 100 x 100 mm"
                           , "Landscape, Portrait", "Width: 0.3 to 2 / 8 to 50 mm\n\t\t\t\t\t\t Depth: 2.2 / 57 mm"
                           , "0.4 to 2.4 / 10 to 60 mm", "0.4 / 10 mm");

                General.show();

    E_Adjustments Adjustments("360Â", " 75Â (-5 to 70Â)", "360Â", "13.0 / 330.0 mm", "24 / 610 mm");

                Adjustments.show();


    E_Physical Physical("Aluminum", "ETL, as per Manufacturer", "1.4 / 35 mm", "7.9 / 200.00 mm"
                      , "7.8 lb / 3.5 kg");

            Physical.show();

    E_Packaging Packaging("9.075 lb", "22.8 x 10 x 5.6");

            Packaging.show();
    
    return (0);
}

// 308 Line Code