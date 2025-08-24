// Header File Inclusion
#include "Defender_Header_File.hpp"

int main(void)
{
    
    std::cout << "\n======================== S P E C I F I C A T I O N S ========================" << std::endl << std::endl;

    Defender_Engine Engine("4395 cc, 8 Cylinders In V Shape, 4 Valves/Cylinder, DOHC"
                        , "4.4-Litre Twin Turbo"
                        , "Turbocharger"
                        , "Mild Hybrid (Electric + Petrol)"
                        , 626, 800
                        , "BS6 Phase 2"
                        , "0-100 km/h in 4 seconds (claimed)"
                        , 250, 'Y'
                        , "AWD"
                        , "Automatic (TC) - 8 Gears, Paddle Shift, Sport Mode");

        Engine.show();

    Defender_Dimensions Dimensions("4813 mm * 2064 mm * 1995 mm"
                                , 3023);

        Dimensions.show();

    Defender_Capacity Capacity("5 Seats and 2 Rows"
                            , "5 Doors");

        Capacity.show();

    Defender_Suspensions Suspensions("Double Wishbone with Coil Springs and Electronic Air\n\t\t\t\t\t\tSuspension"
                                , "Multi-link with Coil Springs and Electronic Air Suspension"
                                , "Power assisted (Electric) steering"
                                , "Radial - Tubeless Tyres"
                                , "Disc"
                                , "Ventilated Disc"
                                , "Alloy", "Alloy Wheels");

        Suspensions.show();


    std::cout << "============================== F E A T U R E S ==============================" << std::endl << std::endl;

    Defender_Exterior Exterior("Optional"
                            , "Optional"
                            , 'Y', 'N'
                            , "Cladding - Black/Grey"
                            , 'N', "Shark Fin Antenna");

        Exterior.show();

    Defender_Safety Safety('N', "5 Star (Euro NCAP)"
                        , "6 Airbags (Driver, Front Passenger, 2 Curtain, Driver Side, Front\n\t\t\t\t\t\tPassenger Side)"
                        , 'Y', 'N'
                        , 'N', 'N'
                        , 'Y', 'Y'
                        , "1 beep over 80kmph, Continuous beeps over 120kmph"
                        , "Rear Middle Head Rest & Rear Middle Three Point seatbelt"
                        , 'Y', 'N'
                        , 'N', 'Y');

        Safety.show();

    Defender_Comfort Comfort("Automatic Climate Control: Three Zone (Front AC: Two Zones with Fan speed control,\n\t\t\t\t\t\tSecond row AC: Separate Zone with Fan speed control with Vents Behind Front Armrest)"
                            , 'Y', 'Y'
                            , "Adaptive"
                            , "360 Degree Camera"
                            , "Front & Rear"
                            , "Electric Tilt & Telescopic"
                            , 'Y', "Driver & Co-Driver"
                            , 'Y', 'N'
                            , 'N', 'Y'
                            , "Auto Hold", 'Y');

        Comfort.show();

    Defender_Lighting Lighting("LED", 'N'
                        , 'Y', 'Y'
                        , "LED", "LED"
                        , "LED - Front & LED - Rear"
                        , 'Y'
                        , "Front and Rear Glovebox Lamp, Reading Lamp"
                        , "Driver & Co-Driver"
                        , "Footwell Lamps"
                        , 'Y');

        Lighting.show();

    Defender_Braking Braking('Y', 'Y'
                        , 'Y', 'Y'
                        , 'Y', 'Y'
                        , 'Y', 'N'
                        , "Electronic"
                        , "Full-time"
                        , 'Y');

        Lighting.show();

    Defender_Locks Locks('Y', "Keyless"
                        , 'Y', 'Y');

        Locks.show();

    Defender_Doors Doors("Body Coloured Finish with handle type"
                        , "Chrome"
                        , "Front & Rear Power Windows, All One-touch up/down"
                        , 'N', 'N'
                        , 'Y', "Front & Rear"
                        , "Metallic"
                        , "Body Coloured finish, Turn Indicators on ORVMs"
                        , "Electrically Adjustable & Retractable"
                        , "Eletronic - Internal & Driver Door"
                        , "Rain-sensing Wipers, Rear Wiper"
                        , "Electric Tailgate Release"
                        , 'Y');

        Doors.show();

    Defender_Entertainment Entertainment("11.4 Touch Screen"
                                        , "6+ Speakers"
                                        ,'Y', 'Y'
                                        , 'Y', 'Y'
                                        , 'Y', 'Y'
                                        , 'Y', 'Y'
                                        , 'N', 'Y'
                                        , 'N'
                                        , "AUX Compatibility, Bluetooth Compatibility (Phone & Audio\n\t\t\t\t\t\tStreaming)"
                                        , 'Y'
                                        , "Optional Wireless Charger");

        Entertainment.show();

    Defender_Seats Seats( "Leather"
                        , "16 way electrically adjustable with 3 memory presets (seat: forward / back, backrest tilt: forward /\n\t\t\t\t\t\tback, headrest: up / down, seat height: up / down, lumbar: up / down, lumbar: forward / back, seat\n\t\t\t\t\t\tbase angle: up / down, backrest bolsters: in / out)"
                        , "16 way electrically adjustable with 3 memory presets (seat: forward / back, backrest tilt: forward /\n\t\t\t\t\t\tback, headrest: up / down, seat height: up / down, lumbar: up / down, lumbar: forward / back, seat\n\t\t\t\t\t\tbase angle: up / down, backrest bolsters: in / out)"
                        , "2 way manually adjustable (headrest up / down)"
                        , "Optional"
                        , "Heated and Cooled"
                        , 'N'
                        , "Dual Tone (Khaki, Ebony, Light Cloud, Lunar)"
                        , 'Y', 'Y'
                        , "Front & Rear"
                        , 'Y', 'Y'
                        , 'Y', "40:20:40"
                        , "Flat", 'N'
                        , "Bench", 'N');

        Seats.show();

    Defender_Mobile Mobile('N', 'N'
                        , 'Y', 'Y'
                        , 'N', 'Y'
                        , 'Y', 'N'
                        , 'N', 'N'
                        , 'N');

        Mobile.show();

    Defender_Instrumentation Instrumentation("Average Fuel Consumption, Distance to Empty, Instantaneous Fuel\n\t\t\t\t\t\tConsumption & Low Fuel Level Warning"
                                            , "Analogue - Digital Instrument Cluster with Adjustable Cluster\n\t\t\t\t\t\tBrightness"
                                            , "2 Trips Electronic"
                                            , 'Y', 'Y'
                                            , 'Y', "Digital"
                                            , 'Y', "Dynamic"
                                            , "Digital");

        Instrumentation.show();

    Defender_Storage Storage("Cupholders in Front & Second Row"
                            , 'Y', 'Y'
                            , 'Y', 'N');

        Storage.show();

    Defender_Manufacturer Manufacturer("3 Years/100000 Kms");

        Manufacturer.show();

    return (0);
}

// 1432 Line Code