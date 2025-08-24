#include "Charger_Header_File.hpp"

int main(void)
{
    Charger_Overview Overview("CTEK CS Free 12V Charger (40-462)"
                            , "~2021 (still premium in 2025)"
                            , "Euro 280 (Rupee 28,000), often discounted (~ Euro 152)"
                            , "Portable 4-in-1 battery charger / maintainer / adaptive booster / power-bank"
                            , "2-year manufacturer warranty"
                            , "Car, motorcycle, boat batteries; off-grid charging; device power bank");

            Overview.show();

    Charger_Internal Internal("66 Wh Lithium-ion (~5.5Ah @12 V)"
                            , "~300 full cycles to 80 capacity"
                            , "Intelligent charging of dead batteries (10-130Ah), boosting them\n\t\t\t\t to 14.4V in ~5-15 minutes instead of harsh jump start"
                            , "3V DC");

            Internal.show();

    Charger_Ports Ports("12V DC, up to 20A (≈240W)"
                        , "5-20V DC up to 3A (Power Delivery), ~60W max"
                        , "5V DC, up to 2.4A (~12W)");

            Ports.show();

    Charger_Input Input("Wall adapter supports 5V-20V input at 3A, charges internal\n\t\t\t\t battery fully in ~1hour"
                    , "Via USB-C charging cable (cigarette-lighter plug) - handy on road"
                    , "Using clamps and USB-C charge cable accessory, ideal for\n\t\t\t\t boating/motorhome setup"
                    , "Optional 60 W folding solar panel recharges CS Free and\n\t\t\t\t maintains vehicle batteries");

        Input.show();

    Charger_Limitations Limitations("Cannot directly crank engine; it powers battery to start readiness\n\t\t\t\t over minutes"
                                , "66 Wh internal battery may sustain only one maintenance cycle—\n\t\t\t\t especially under battery drain—for larger vehicle batteries"
                                , "Solar kit and professional charging leads/comfort connectors are extra"
                                , "~1-1.4kg—not ultra-light for handheld use, but manageable in\n\t\t\t\t vehicle storage");
    
            Limitations.show();

    Charger_Usability Usability("No mode selection—attach clamps and let unit manage the process"
                            , "Estimates charging time and indicates readiness for engine start"
                            , "Trickle-charges and maintains batteries safely (claims to extend\n\t\t\t\t lifespan up to 3x when used regularly)"
                            , "Internal Battery holds charge for up to 12months if unused");

            Usability.show();

    return (0);
}

//  354 Line Code