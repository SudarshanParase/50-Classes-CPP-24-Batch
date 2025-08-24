#include "Imalent_Header_File.hpp"

int main(void)
{
    Imalent_Overview Overview("Imalent"
                            , "MS18 (also known as MS18 “Ambassador of Light”)"
                            , "Tactical / Search & Rescue / Ultra High Power"
                            , "2021 (Still top model in 2025)"
                            , "Military, Professional Rescue, Outdoor Survival, Long-Range\n\t\t\t\t Visibility");

            Overview.show();

    Imalent_Light Light("18x CREE XHP70.2 LEDs"
                    , "100,000 lumens"
                    , "Up to 1,350 meters (~1.3 km)"
                    , "9 modes: 700 lm, 2000 lm, 5000 lm, 10,000 lm, 22,000 lm, 30,000 lm,\n\t\t\t\t 60,000 lm, 100,000 lm (Turbo), Strobe"
                    , "Yes - Ultra-intense for emergency or disorientation"
                    , "6500K (cool white)"
                    , "Flood beam with wide coverage");

            Light.show();

    Imalent_Battery Battery("Custom-built, removable 8-cell 21700 Li-ion pack"
                        , "32,000 mAh (8 x 4000 mAh cells)"
                        , "14 hours (lowest), 45 mins (Turbo), 30 secs (100,000 lm burst)"
                        , "Approx. 4.5 hours (fast charging)"
                        , "DC fast charger with smart overcharge protection"
                        , "Digital OLED display with voltage and mode info");

            Battery.show();

    Imalent_Cooling Cooling("3x built-in fans with intelligent thermal sensors"
                        , "Low decibel fan profile (audible, but not loud)"
                        , "Automatically steps down brightness if unit exceeds safe\n\t\t\t\t temp"
                        , "Aerospace-grade aluminum alloy with heat-dissipating fins");

            Cooling.show();

    Imalent_Size Size("265 mm (10.4 inches)"
                    , "129 mm (5.1 inches)"
                    , "59 mm (2.3 inches)"
                    , "1.74 kg (including battery)"
                    , "Knurled anti-slip pattern"
                    , "Matte Black Anodized Finish"
                    , "OLED Status Display");

            Size.show();

    return (0);
}

// 339 Line Code