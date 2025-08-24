// Header File Inclusion
#include "Power_Header_File.hpp"

int main(void)
{
    Power_Basic Basic("BASSBOSS"
                    , "7075606822997"
                    , "KRAKEN-MK3"
                    , "85559100674");

        Basic.show();

    Power_Key Key("Active Subwoofer"
                , "Bandpass Subwoofer"
                , 10000, 'N'
                , "4x 21 / 53.3 cm Woofer"
                , 'N', "Black"
                , "4 x 2500 W"
                , "Class-D");

        Key.show();

    Power_Drivers Drivers('N'
                        , "4x 21 / 53.3 cm Woofer"
                        , "4.5 / 11.4 cm"
                        , "Neodymium");

        Drivers.show();

    Power_Performance Performance("25 Hz to 90 Hz +-3 dB"
                                , "145 dB (Continuous) 148 dB (Peak)");

        Performance.show();

    Power_Connectivity Connectivity("1x XLR 3-Pin Female Balanced Line Input\n\t\t\t\t\t 1x XLR 3-Pin Male Balanced Line Thru"
                                , " 2x etherCON (Control/Network) In/Out"
                                , 'N', 'N'
                                , 'N', 'N');
                    
        Connectivity.show();

    Power_Signal Signal('N', 'N'
                    , 'N', 'N'
                    , "Limiter"
                    , 'N', 'N'
                    , " User Settings, Venue Settings, Voicing Modes (Adjustable via Optional Software)"
                    , "96 kHz / 24-Bit");

        Signal.show();

    Power_Power Power("100 to 240 VAC, 50 / 60 Hz"
                    , " 1x PowerCON TRUE1 Input (Locking)"
                    , " 120 VAC: 14 A\n\t\t\t\t\t 240 VAC: 7 A");

        Power.show();

    Power_Physical Physical("Black", '8'
                        , "Convection, Fan (Variable Speed), Heat Sink"
                        , 'N'
                        , "Plywood, Polyurethane, Steel"
                        , "48 x 48 x 36 / 121.9 x 121.9 x 91.4 cm"
                        , "460 lb / 208.7 kg");
                        
        Physical.show();

    return (0);
}

// 527 Line Code