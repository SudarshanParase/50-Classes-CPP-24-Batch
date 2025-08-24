#include "Apple_Header_File.hpp"

int main(void)
{

    Apple_Overview Overview("Apple Watch Ultra 2", "September 2023"
                        , "₹89,900 to ₹95,000+ (Depending on strap)"
                        , "Rugged Smartwatch / Digital Smartwatch"
                        , "Athletes, Divers, Hikers, Professionals, Health-focused Users"
                        , "Aerospace-grade Titanium", "Natural Titanium Finish");

            Overview.show();

    Apple_Display Display("Always-On Retina LTPO OLED Display", "49mm case size"
                        , "410 x 502 pixels", "Up to 3000 nits (most in any smartwatch)"
                        , "Sapphire Crystal Front"
                        , "WR100 + EN13319 (Certified for Diving - up to 100 meters)"
                        , "Flat edge, raised edge to protect display, Action Button"
                        , "61.4 grams (without strap)");

        Display.show();

    Apple_Battery Battery("Up to 36 hours", "Up to 72 hours"
                        , "Magnetic Fast Charging USB-C Cable"
                        , "~1.5 hours");

            Battery.show();

    Apple_Performance Performance("Apple S9 SiP (System in Package)"
                                , "4-core, for fast on-device Siri"
                                , "64 GB internal storage"
                                , "Not officially disclosed (est. ~1 GB)"
                                , "watchOS 10 (Upgradeable to latest watchOS)");

                Performance.show();

    Apple_Sensors Sensors("3rd-gen Optical + Electrical", "Yes (SpO2 monitoring)"
                        , "Yes - FDA approved", "Night-time skin temp tracking"
                        , "Precision dual-frequency GPS + Backtrack"
                        , "Always-on barometric altimeter"
                        , "Fall detection, crash detection, workout auto-detection"
                        , "With water temp sensor (real diving support)"
                        , "Built-in 86-decibel siren (for emergencies)");

            Sensors.show();

    return (0);
}
// 355 Line Code