#include "M8_Coupe_Header_File.hpp"


int main(void)
{
         
    std::cout << "\n============================ B M W   M 8   C O U P E =============================" << std::endl << std::endl;

    std::cout << " - - - - - - - - - - - - - S P E C I F I C A T I O N S - - - - - - - - - - - - - -" << std::endl << std::endl;

    Coupe_Engine Engine("4395 cc, 8 Cylinders In V Shape, 4 Valves/Cylinder, DOHC"
                      , "S63 Twin-Turbocharged V8", "Twin Turbo, Twin-Scroll", "Twin Turbo"
                      , "Petrol", "617 bhp @ 6000 rpm", "750 Nm @ 1800-5600 rpm"
                      , "BS6 Phase 2", "8.77 kmpl", "9 kmpl", 'Y', 596, "3.2 Seconds", "AWD"
                      , "Automatic (TC) - 8 Gears, Manual Override & Paddle Shift, Sport Mode");   
                      
                Engine.show();

    Coupe_Dimension Dimension(4867, 1907, 1362, 130, 2827);

                Dimension.show();

    Coupe_Capacity Capacity("4 Person", "2 Rows", "2 Doors", 420, "68 Litres");

                Capacity.show();

    Coupe_Sus Sus("Double Wishbone Axle with Adaptive Variable Damper Control"
                            , "Five-link Axle with Adaptive Variable Damper Control"
                            , "Ventialted Disc", "Ventilated Disc", "6.1 Meters"
                            , "Power assisted (Electric)", "Servotronic Steering"
                            , "275/35 R20", "285/35 R20", "Radial - Tubeless", "Alloy Wheels", "Space Saver");

            Sus.show();

    std::cout << " - - - - - - - - - - - - - - - - F E A T U R E S - - - - - - - - - - - - - - - - -" << std::endl << std::endl;

    Coupe_Exterior Exterior('N', "Shark Fin Antenna", 'Y', 'Y', 'Y');

                Exterior.show();

    Coupe_Safety Safety('N', "Optional", 'N', "Not Tested"
                , "6 Airbags (Driver, Front Passenger, 2 Curtain, Driver Side, Front\n\t\t\t\t\t\t Passenger Side)"
                , '1', "Optional", "Optional", "Optional", 'Y', 'N', 'Y'
                , "1 beep over 80kmph, Continuous beeps over 120kmph"
                , 'Y', 'Y', 'Y', 'N', 'N');
        
                Safety.show();

    Coupe_Comfort Comfort("Automatic Climate Control: Dual Zone"
                        , "Two Zones, Individual Fan Speed Controls", 'Y'
                        , 'Y', 'Y', 360, "Front & Rear", "Electric Tilt & Telescopic"
                        , 'Y', "Driver & Co-Driver", 'Y', "Auto Hold", 'Y', 'Y', 'Y');

                Comfort.show();

    Coupe_Lighting Lighting("LED", "Intelligent", 'Y', 'Y', "LED", "LED", "LED,LED"
                            , 'Y', "Front and Rear", 'N', 'Y', "Driver & Co-Driver"
                            , 'Y', 'N');

                Lighting.show();

    Coupe_Braking_Traction Braking('Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'N', 'Y'
                                    , 'N', "Torque-On-Demand", 'N');
                
                    Braking.show();

    Coupe_LockSecurity Lock('Y', "Keyless", 'N', 'Y');

                    Lock.show();

    Coupe_Doo_Win Door("Body Coloured", "Chrome", "Front Only", "Front", "Front"
                     , 'N', 'N', "Front", "Illuminated", "Both Sides", "Electrically Adjustable & Retractable"
                     , 'Y', "Electronic-Internal & Driver Door", 'Y', "Electric Opening and Closing"
                     , 'Y');

                Door.show();

    Coupe_Entertainment ENtertainment("10.25 inch", 16, 'Y', 'Y', "Wireless"
                    , "Wireless", 'Y', 'Y', 'Y', "Phone & Audio Streaming"
                     , 'Y', 'Y', 'Y', 'Y', 'Y', 'Y');

                     ENtertainment.show();

    Coupe_Seat Seat("Leather", "16 way electrically adjustable with 2 memory presets\n\t\t\t\t\t\t (seat: forward / back, backrest tilt: forward / back,\n\t\t\t\t\t\t seat height: up / down, lumbar: up / down, lumbar:\n\t\t\t\t\t\t forward / back, seat base angle: up / down,\n\t\t\t\t\t\t shoulder support: forward / back, backrest bolsters: in / out)\n\t\t\t\t\t\t + 2 way manually adjustable (headrest: up / down)"
                  , "16 way electrically adjustable with 2 memory presets\n\t\t\t\t\t\t (seat: forward / back, backrest tilt: forward / back,\n\t\t\t\t\t\t seat height: up / down, lumbar: up / down, lumbar:\n\t\t\t\t\t\t forward / back, seat base angle: up / down,\n\t\t\t\t\t\t shoulder support: forward / back, backrest bolsters: in / out)\n\t\t\t\t\t\t + 2 way manually adjustable (headrest: up / down)"
                  , 'N', 'N', "Dual Tone", "Silverstone/Black, Black", 'Y', 'N', "Front & Rear"
                  , 'Y', 'Y', 'N', "50:50", "Flat", 'Y', "Bench");

            Seat.show();

     Coupe_Mobile_App Mobile('N','N','N','N','N','N','N','N');

                Mobile.show();

     Coupe_Instrumentation Instru('Y', 'Y', 'Y', 'Y', "Digital", 'Y'
                                , "2 Trips Electronic", 'Y', 'Y', 'Y'
                                , "Digital", 'N', 'Y', "Digital");

                        Instru.show();

     Coupe_Storage Storage("Front Only", 'Y');

                Storage.show();

     Coupe_Manufacturer Manufacturer('2', "Unlimited");
                
                Manufacturer.show();
    
    
    return (0);
}

// 1434