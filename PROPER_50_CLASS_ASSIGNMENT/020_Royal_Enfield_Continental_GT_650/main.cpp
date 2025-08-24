// Header File Inclusion
#include "Continental_Header_File.hpp"

int main(void)
{

    std::cout << "\n=================== C O N T I N E N T A L   G T   6 5 0 ===================" << std::endl << std::endl;

    std::cout << "=========================== H I G H L I G H T S ===========================" << std::endl << std::endl;

    Continental_Highlights Highlights(648, "25 kmpl"
                                    , "6 Speed Manual"
                                    , 221, "12.5 Litres"
                                    , 804);

        Highlights.show();

    std::cout << "======================= S P E C I F I C A T I O N S =======================" << std::endl << std::endl;

    Continental_Power Power(648, "47 bhp @ 7250 rpm"
                            , "52 Nm @ 5250 rpm"
                            , 169, "25 kmpl"
                            , "6 Speed Manual"
                            , "Chain Drive"
                            , "1 Down 5 Up"
                            , "Assist And Slipper Clutch"
                            , 312.5, 'N', '2', '2'
                            , "Air/Oil Cooled", "78 mm"
                            , "67.8 mm", "9.5:1"
                            , "1 Per Cylinder"
                            , "12V, 12AH VRLA"
                            , "BS6 Phase 2"
                            , "Pertol");

        Power.show();

    Continental_Brakes Brakes("Dual Channel ABS"
                            , "Dsc", 320 
                            , "2 Piston", "Disc"
                            , 240, "1 Piston"
                            , "Spoke", "18 inch"
                            , "18 inch", "100/90-18"
                            , "130/70-18", "Tubed"
                            , "32 psi", "36 psi"
                            , "32 psi", "39 psi");

        Brakes.show();

    Continental_Suspensions Suspensions("41mm dia front fork, 110mm travel"
                                    , "Twin, Coil-over Shocks, 88mm travel"
                                    , "No", "Yes"
                                    , "Steel Tubular, Double Cradle Frame");

        Suspensions.show();

    Continental_Dimensions Dimensions(211, 804 
                                , '-', 174 
                                , "12.5 litres", "1.5 litres"
                                , 2119, 833
                                , 1067, 1398);

        Dimensions.show();

    Continental_Manufacturer Manufacturer("3 Year"
                                        , "40000 km");

        Manufacturer.show();

    Continental_Service Service("500 Kms/45 Days"
                                , "5000 Kms/180 Days"
                                , "10000 Kms/365 Days"
                                , "15000 kms");

        Service.show();

    
    std::cout << "============================= F E A T U R E S =============================" << std::endl << std::endl;

    Continental_Instrument Instrument("Semi-Digital"
                                    , 'N', '-'
                                    , '-', 'N'
                                    , 'N', 'N'
                                    , 'N', 'N'
                                    , "Analogue", "Digital"
                                    , "Digital", 'N'
                                    , 'N', "Digital"
                                    , '2', "Analogue"
                                    , 'N', 'N'
                                    , 'Y', 'Y'
                                    , 'Y', 'N'
                                    , 'Y', 'Y'
                                    , 'N', 'Y'
                                    , 'N', "No Available"
                                    , 'N', 'N');

        Instrument.show();

    Continental_Safety Safety('N', 'N'
                            , 'N', 'N'
                            , 'N', 'N'
                            , "Self Start", 'N'
                            , 'N', 'Y'
                            , 'Y', 'Y');

        Safety.show();

    Continental_Mobile Mobile('N', 'N');

        Mobile.show();

    Continental_Lights Lights("Halogen Bulb", 'N'
                            , 'N', 'N'
                            , "Halogen Bulb", 'Y'
                            , 'N', 'Y'
                            , "Halogen Bulb");

        Lights.show();

    Continental_Seat Seat('N', 'N'
                        , 'N', 'N'
                        , 'N');

        Seat.show();

    Continental_Additional Additional("LCD Instrument Cluster");

        Additional.show();

    return (0);
}

// 1084 Line Code