#include "Anker_Header_File.hpp"

int main(void)
{
    Anker_Overview Overview("Anker Prime Charger (250W, 6-Port, GaNPrime)"
                            , "Desktop / charging station"
                            , "Late 2024; widely available in 2025"
                            , "Approx ₹16,000-₹19,000 depending on seller"
                            , "GaNPrime technology delivers high power efficiency and compact footprint");

        Overview.show();

    Anker_IO IO("100-240V AC ~3.5A, 50-60Hz"
            , "Up to 250W shared across 6 ports"
            , "4x (first port supports up to 140W; others up to 100W each)"
            , "2x (up to 22.5W each)"
            , "AI Power Mode, Port Priority, Dual-Laptop Mode, Low-Current Mode"
            , "2.26-inch LCD display, control dial for manual power management, smartphone app via\n\t\t\t\t Wi-Fi for monitoring and scheduling");

        IO.show();

    Anker_Performance Performance("Up to 140W on USB-C port 1 (ideal for charging laptops like MacBook Pro to 50 in\n\t\t\t\t ~25min)"
                                , "Balanced power when charging multiple devices simultaneously (e.g. two laptops +\n\t\t\t\t phones)"
                                , "PowerIQ 4.0, temperature control, overcurrent/voltage protection"
                                , "Fansless design; completely silent during use");

        Performance.show();

    Anker_Physical Physical("Approximately 640 g"
                        , "~106 x 40 x 92.5mm (compact desktop footprint)"
                        , "Durable casing with minimal desk space usage and integrated pop-up plug (on\n\t\t\t\t certain variants)");

        Physical.show();

    Anker_Limitations Limitations("None of the ports support Qi or MagSafe protocols; wired\n\t\t\t\t connections only"
                                , "Best suited for desktop/workstation setups rather than on-the-go\n\t\t\t\t charging needs"
                                , "More expensive than budget chargers; SDP is justified by power\n\t\t\t\t and feature set");

        Limitations.show();

    return (0);
}

// 301 Line Code