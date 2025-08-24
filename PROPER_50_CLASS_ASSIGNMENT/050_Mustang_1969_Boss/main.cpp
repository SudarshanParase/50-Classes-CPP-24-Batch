// Header File Inclusion
#include "Mustang_Header_File.hpp"

int main(void)
{

    Mustang_Key Key(7030
                , "374.9 hp @ 5,200 rpm"
                , "610.12 Nm @ 3,400 rpm"
                , 225 
                , "4-Speed, Manual"
                , "Petrol"
                , '4');

        Key.show();

    Mustang_Price Price("Rs 40.77 - 73.38 Lakh"
                    , "Rs 2.22 Crore");

        Price.show();

    Mustang_Engine Engine("V8, Hydraulic Valve Lifters"
                        , 7030, '8'
                        , '4', "10.5:1"
                        , 110.74, "91.2 mm"
                        , "Holley Four Barrel"
                        , "Points Type Ignition System"
                        , "Water Cooling"
                        , "Not Rated"
                        , "4-Speed Manual"
                        , "Manual"
                        , "Rear Wheel Drive");

        Engine.show();

    Mustang_Power Power("374.9 hp @ 5,200 rpm"
                    , "610.12 Nm @ 3,400 rpm"
                    , 234.17
                    , 225
                    , "53.33 hp per litre");

        Power.show();
    
    Mustang_Chassis Chassis("Steel Frame"
                        , "2-Door Fastback"
                        , "Recirculation Ball Steering System"
                        , "Standard Fixed Column"
                        , "6 meters"
                        , "Heavy Duty Coil Springs with Sway Bar"
                        , "Leaf Spring Setup");

        Chassis.show();

    Mustang_Brakes Brakes("Vented Disc Brakes"
                        , "Drum Brakes"
                        , "11.3 Inch"
                        , "10.5 Inch"
                        , "Magnum 500 Wheels"
                        , "15" , "15"
                        , 'N'
                        , "F60x15 Goodyear RWL Polyglas GT"
                        , "F60x15 Goodyear RWL Polyglas GT");

        Brakes.show();

    Mustang_Dimensions Dimensions(4760, 1824
                            , 1280, 2743 
                            , 1601, 1601 
                            , "5 inches"
                            , 320, '4'
                            , '3', 1511 
                            , 1511);

        Dimensions.show();

    Mustang_Safety Safety("Not Rated"
                        , '0', 'N'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N', 'N'
                        , 'N');

        Safety.show();

    Mustang_Exterior Exterior("Halogen"
                            , "Halogen"
                            , 'N', 'N'
                            , "Body Coloured"
                            , 'Y', 'Y'
                            , 'N', 'N'
                            , 'N');

        Exterior.show();

    Mustang_Interior Interior("High Bucket Seats"
                            , "Manually Adjustable"
                            , 'N', 'N'
                            , 'N', 'N'
                            , 'N', 'N'
                            , 'N', "Radio System"
                            , "None", 'N'
                            , 'N', 'N'
                            , 'N', 'N');

        Interior.show();

    return (0);
}

// 868 Line Code