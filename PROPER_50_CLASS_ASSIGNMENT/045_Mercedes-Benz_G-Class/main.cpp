// Header File Inclusion
#include "Mercedes_Header_File.hpp"

int main(void)
{

    std::cout << "\n======================== S P E C I F I C A T I O N S ========================" << std::endl << std::endl;

    Mercedes_Engine Engine("2925 cc, 6 Cylinders Inline, 4 Valves/Cylinder, DOHC"
                        , "OM656 Turbocharged I6"
                        , "Turbocharger Parallel"
                        , "Disel"
                        , "326 bhp @ 3600 rpm"
                        , "700 Nm @ 1200 rpm"
                        , "BS6 Phase 2"
                        , "0-100 km/h in 6.4 seconds (claimed)"
                        , 210, "9.9 kmph"
                        , 'Y', "AWD"
                        , "Automatic (TC) - 9 Gears, Manual Override & Paddle Shift, Sport\n\t\t\t\t\t\tMode");

        Engine.show();

    Mercedes_Dimensions Dimensions("4817 mm * 1931 mm * 1969 mm"
                                , "241 mm (unladen)"
                                , 2890);

        Dimensions.show();

    Mercedes_Capacity Capacity("5 Seats and 2 Rows"
                            , "5 Doors", 480
                            , 100);

        Capacity.show();

    Mercedes_Suspensions Suspensions("Independent, Double Wishbone with Coil Springs"
                                , "Trailing-Link, Rigid Axle with Coil Springs"
                                , 'N'
                                , "Power assisted (Electric) steering"
                                , "Radial - Tubeless Tyres"
                                , "Ventilated Disc"
                                , "Ventilated Disc"
                                , "Alloy"
                                , "6.8 Meters"
                                , "265 / 60 R18"
                                , "265 / 60 R18"
                                , "Alloy Wheels");

        Suspensions.show();



    std::cout << "============================== F E A T U R E S ==============================" << std::endl << std::endl;

    Mercedes_Exterior Exterior("Electrically Adjustable"
                            , 'N', 'Y'
                            , "Silver"
                            , "Cladding - Body Coloured"
                            , 'Y'
                            , "Roof - Mounted Antenna");

        Exterior.show();

    Mercedes_Safety Safety('Y'
                        , "5 Star (Euro NCAP)"
                        , "9 Airbags (Driver, Front Passenger, 2 Curtain, Driver Knee, Driver Side, Front\n\t\t\t\t\t\tPassenger Side, 2 Rear Passenger Side)"
                        , 'Y'
                        , "Lane Departure Prevention"
                        , 'Y', 'Y'
                        , 'Y', 'Y'
                        , 'Y'
                        , "1 beep over 80kmph, Continuous beeps over 120kmph"
                        , "Rear Middle Head Rest & Rear Middle Three Point seatbelt"
                        , 'Y', 'N'
                        , 'N', 'Y');

        Safety.show();

    Mercedes_Comfort Comfort("Automatic Climate Control: Three Zone (Front AC: Two Zones with Fan speed control,\n\t\t\t\t\t\tSecond row AC: Separate Zone with Fan speed control with Vents Behind Front Armrest)"
                            , 'N', 'Y'
                            , 'Y', "Auto Steering"
                            , "Front & Rear"
                            , "Electric Tilt & Telescopic"
                            , 'Y'
                            , "Driver & Co-Driver"
                            , 'Y', 'N'
                            , 'Y', "Auto Hold"
                            , 'Y', 'Y');

        Comfort.show();

    Mercedes_Lighting Lighting("LED"
                            , "Intelligent"
                            , 'Y', 'Y'
                            , "LED", "LED"
                            , "LED - Front & LED - Rear"
                            , 'Y'
                            , "Front and Rear Glovebox Lamp, Reading Lamp"
                            , "Driver & Co-Driver"
                            , "Multi-colour (64 Colours)"
                            , 'Y');
        Lighting.show();

    Mercedes_Braking Braking('Y', 'Y'
                            , 'Y', 'Y'
                            , 'Y', 'Y'
                            , 'Y', 'N'
                            , "Centre & Both Axles"
                            , "Torque-On-Demand"
                            , 'Y');

        Braking.show();

    Mercedes_Locks Locks('Y', "Remote"
                        , 'Y', 'Y');

        Locks.show();

    Mercedes_Doors Doors("Black Finish with handle type"
                        , "Chrome"
                        , "Front & Rear Power Windows, All One-touch up/down"
                        , 'N', 'N'
                        , 'N', "Front & Rear"
                        , "Illuminated"
                        , "Body Coloured Finish, Turn Indicators on ORVMs"
                        , "Electrically Adjustable & Retractable"
                        , "Electronic - Internal & Driver Door"
                        , "Rain - Sensing Wipers, Rear Wiper"
                        , "Key", 'Y');

        Doors.show();

    Mercedes_Entertainment Entertainment("12.3 Touch Screen"
                                    , "6+ Speakers"
                                    , 'Y', 'Y'
                                    , 'Y', 'Y'
                                    , 'Y', 'Y'
                                    , 'Y', 'Y'
                                    , 'Y', 'N'
                                    , 'Y', 'N'
                                    , "AUX Compatibility, Bluetooth Compatibility (Phone & Audio\n\t\t\t\t\t\tStreaming), DVD Playback"
                                    , 'Y');

        Entertainment.show();

    Mercedes_Mobile Mobile('Y', 'Y'
                        , 'Y', 'Y'
                        , 'N', 'N'
                        , 'N', 'Y'
                        , 'Y', 'Y'
                        , 'N');

        Mobile.show();

    Mercedes_Instrumentation Instrumentation("Average Fuel Consumption, Distance to Empty, Instantaneous Fuel\n\t\t\t\t\t\tConsumption & Low Fuel Level Warning"
                                            , "Digital Instrument Cluster with Adjustable Cluster\n\t\t\t\t\t\tBrightness"
                                            , "2 Trips Electronic"
                                            , 'Y', 'Y'
                                            , 'N', "Digital"
                                            , 'N', "Dynamic"
                                            , "Analogue");

        Instrumentation.show();

    Mercedes_Storage Storage("Cupholders in Front & Second Row"
                            , 'N', 'Y'
                            , 'Y', 'N');

        Storage.show(); 

    Mercedes_Manufacturer Manufacturer("3 Years/ Unlimited Kms");

        Manufacturer.show();
    

    return (0);
}

// 1473 Line Code