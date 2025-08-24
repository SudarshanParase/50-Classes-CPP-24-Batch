#include "KTM_Header_File.hpp"

int main(void)
{

    std::cout << "\n========================= K T M   4 5 0   S X - F =========================" << std::endl << std::endl;

    std::cout << "=========================== H I G H L I G H T S ===========================" << std::endl << std::endl;

    Ktm_HighLights HighLights(449.9
                            , "5 Speed Manual"
                            , 107
                            , "7.2 Litres"
                            , 958
                            , "62.1 bhp");

        HighLights.show();

    std::cout << "====================== S P E C I F I C A T I O N S ========================" << std::endl << std::endl;

    Ktm_Power Power(449.9
                , "62.1 bhp @ 9500 rpm"
                , "74 Nm @ 9500 rpm"
                , '-', '-'
                , "5 Speed Manual"
                , "Chain Drive"
                , "1 Down 4 Up"
                , "Wet Multiplate"
                , '-', 'N'
                , '1', '4'
                , "Liquid Cooled"
                , "95 mm", "63.4 mm"
                , "13.1"
                , "1 Per Cylinder"
                , "12.8V 2Ah"
                , "BS6 Phase 2"
                , "Petrol");
                
        Power.show();

    Ktm_Brakes Brakes("Dual Channel ABS"
                    , "Disc", 260
                    , '-', "Disc"
                    , 220, '-'
                    , "Spoke", "21 inch"
                    , "19 inch"
                    , "80/100 - 21"
                    , "110/90 - 19"
                    , "Tubed", "15 psi"
                    , "15 psi", "15 psi"
                    , "15 psi");

        Brakes.show();

    Ktm_Suspensions Suspensions("WP XACT-USD (AER), Ø 48 mm"
                            , "WP XACT Monoshock with linkage"
                            , 'Y', 'Y'
                            , "Central Double-Cradle Frame");

        Suspensions.show();

    Ktm_Dimensions Dimensions(107, 958 
                        , '-', 343
                        , "7.2 Litres"
                        , "1.9 Litres"
                        , '-', '-'
                        , '-', 1493);

        Dimensions.show();

    Ktm_Manufacturer Manufacturer("2 Year"
                                , "50000 km");
                                
        Manufacturer.show();

    std::cout << "============================ F E A T U R E S ==============================" << std::endl << std::endl;

    Ktm_Instrument Instrument('N', 'N'
                        , '-', '-'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N', '-'
                        , 'N', '0'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N', 'N'
                        , '-', 'N'
                        , 'N', 'N'
                        , "Not Available"
                        , 'N', 'N');

        Instrument.show();

    Ktm_Safety Safety('N', '-'
                    , 'N', '-'
                    , 'Y', 'N'
                    , "Self Start"
                    , '-', '-'
                    , '-', 'Y'
                    , 'Y');

        Safety.show();

    Ktm_Mobile Mobile('-', 'N');

        Mobile.show();

    Ktm_Lights Lights('N', '-'
                    , '-', 'N'
                    , 'N', 'N'
                    , 'N', 'N'
                    , 'N');

        Lights.show();

    Ktm_Seat Seat('N', 'Y'
                , 'N', 'Y'
                , 'Y');

        Seat.show();

    Ktm_Additional Additional("Launch Control, Quickshifter");

        Additional.show();

    return (0);
}

// 1035 Line Code