#include "Ather_Header_File.hpp"


int main(void)
{

    std::cout << "======================= A T H E R   4 5 0   A P E X =======================" << std::endl << std::endl;

    std::cout << "=========================== H I G H L I G H T S ===========================" << std::endl << std::endl;
    
    Ather_Highlights Highlights(157, 100, 111.6, 5.45, 780, 'N');

            Highlights.show();

    std::cout << "======================= S P E C I F I C A T I O N S =======================" << std::endl << std::endl;

    Ather_Power Power("7 kW", '-', "26 Nm", 100, "2.9 seconds", '-', "Automatic", 157, "Eco, Ride, Sport and Warp Plus"
                    , "Electric", "PMS Motor", "IP66", "20 Degree", 300);

            Power.show();

    Ather_Battery Battery("3.7 KWh", "5.45 hrs", "4.3 hrs", "1 fixed batter - 3.7 kWh", 'Y', '-', '-'
                    , "Not Included in the Vehicle Price", "Lithium Ion", 'N', '1', 'N', "IP67"
                    , "Portable Charger", 350, "No Additional cost (Included in the Vehicle Price)");

                Battery.show();

    Ather_Brakes Brakes("CBS", "Disc", 200, "3 Piston", "Disc", 190, "1 Piston", "Alloy"
                        , "12 inch", "12 inch", "90/90 - 12", "100/80 - 12", "Tubeless");

            Brakes.show();

    Ather_Suspensions Suspensions("Telescopic Forks", "Symmetrically Mounted Progressive Monoshock"
                            , 'N', 'N', "Precision Machined Hybrid Chassis");

            Suspensions.show();
    
    Ather_Dimensions Dimensions(111.6, 780, '-', 170, 1891, 739, 1114, '-', '-');

            Dimensions.show();

    Ather_Manufacturer Manufacturer("5 Year or 60,000 km", "3 Year");

            Manufacturer.show();

    std::cout << "============================= F E A T U R E S =============================" << std::endl << std::endl;

    Ather_Instrument Instrument("Digital", 'Y', '-', '-', '-', 'Y', 'Y', "Digital", "Digital"
                            , 'N', 'Y', "Digital", '1', 'Y', 'Y', 'Y', 'Y', '-', 'Y', "Available"
                            , 'Y', 'Y');
            Instrument.show();

    Ather_Safety Safety('N', 'Y', 'N', "Self Start", '-', 'Y', 'N', 'Y', 'Y', 'N', 'Y', 'Y', 'Y');

        Safety.show();

    Ather_Mobile_App_M Mobile('Y', 'Y', 'N', '-', 'Y', 'Y');

        Mobile.show();

    Ather_Lights Lights("LED",'-', '-', 'Y', 'Y', "LED", 'N', 'Y', "LED");
    
            Lights.show();

    Ather_Seat Seat("22 Litres", 'N', '-', '-', 'Y', 'N', 'Y', 'Y');

        Seat.show();

    Ather_Additional_Features Additional("Halo bundled, Multi mode Traction Control, Remote diagnostics,\n\t\t\t\t\t\t Ather Dot - Home Charging Point, Magic Twist");

        Additional.show();
    
    return (0);
}

// 1020