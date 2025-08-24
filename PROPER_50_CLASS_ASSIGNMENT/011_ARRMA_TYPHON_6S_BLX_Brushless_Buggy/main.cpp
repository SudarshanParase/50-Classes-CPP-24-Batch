// Header File Inclusion
#include "Arrma_Header_File.hpp"

int main(void)
{
    Arrma_Overview Overview("ARRMA Typhon 6S BLX V5 (latest version)"
                            , "1/8", "4WD Off-road Buggy", "High-speed bashing / racing"
                            , "70+ mph (113+ km/h) with optional gearing"
                            , "Advanced", "Yes (battery and charger sold separately)");

                Overview.show();

    Arrma_Chassis Chassis("6061-T6 Aluminum", "3 mm", "4WD Shaft-driven"
                        , "Yes (metal geared)", "Big Bore, oil-filled, aluminum bodies"
                        , "Aluminum front & rear", "Independent double wishbone"
                        , "Heavy-duty steel CVD (front), dogbone (rear)"
                        , "3 (front, center, rear) — all metal gear"
                        , "Adjustable Steel", "17 mm", "dBoots KATAR all-terrain tires"
                        , "1/8 buggy wheels, 17mm hex");

                Chassis.show();

    Arrma_Power Power("Spektrum Firma 4074 2050Kv Brushless Motor (4-pole, sensored ready)"
                    , "Spektrum Firma 150A Smart Waterproof ESC (with EC5/IC5 connectors)"
                    , "6S LiPo (2x 3S or 1x 6S)", "IC5 (EC5 compatible)"
                    , "Sliding motor mount — tool-less gear mesh adjustment"
                    , "Pinion: 16T, Spur: 50T (Mod 1.0 pitch)"
                    , "Included in box (20T pinion for 70+ mph)");

            Power.show();
        
    Arrma_Radio Radio("Spektrum SLT3 2.4GHz 3-Channel"
                    , "Spektrum SR315 DSMR 3-Channel Receiver"
                    , "Spektrum S652 Digital Waterproof Servo"
                    , "17kg-cm @ 6V", "Yes (ESC, servo, receiver box)");

            Radio.show();

    Arrma_Dimensions Dimensions(511, 306, 195, 328, 42, "3.9 kg (8.6 lbs)");

            Dimensions.show();

    Arrma_Battery Battery("Slower, not recommended for max performance"
                        , "Good Performance", "Powerful"
                        , "Full Performance mode, 70+ mph achievable"
                        , "Fits most hard case LiPos");

            Battery.show();

    return (0);
};

// 431 Line Code