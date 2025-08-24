#include "Router_Header_File.hpp"

int main(void)
{
    Router_Overview Overview("ASUS ROG Rapture GT-BE98"
                            , 2024, "Wi-Fi 7 (802.11be)"
                            , "Quad-band (2.4GHz, 5GHz Low, 5GHz High, 6GHz)"
                            , "Up to 25,000 Mbps (25 Gbps) total across all bands"
                            , "Gamers, 8K streamers, multi-device smart homes");

            Overview.show();

    Router_Wireless Wireless("2.4GHz / 5GHz-1 / 5GHz-2 / 6GHz"
                            , "Up to 25 Gbps"
                            , "Up to 320 MHz (double the 160 MHz in Wi-Fi 6)"
                            , "4096-QAM (faster, denser data transfer)"
                            , "16x16 MU-MIMO"
                            , "Yes (improved multi-device performance)"
                            , "Yes (uses multiple bands at once for faster, lower-latency\n\t\t\t\t performance)"
                            , "AiRadar Beamforming (for stronger signal focus on\n\t\t\t\t devices)"
                            , "Up to 3,500 sq. ft. (varies by obstacles/interference)");

            Wireless.show();

    Router_Hardware Hardware("2.6 GHz Quad-Core Processor"
                            , "2 GB DDR4"
                            , "512 MB NAND"
                            , "Active cooling with heatsinks and fan (for heavy load usage)");

            Hardware.show();

    Router_Ports Ports("1x 10 Gbps"
                    , "1x (for fiber Connections)"
                    , "2x 2.5 Gbps"
                    , "4x 1 Gbps LAN"
                    , "1x USB 3.2 Gen 1, 1x USB 2.0"
                    , "Supported"
                    , "Supported");

            Ports.show();

    Router_Software Software("ASUSWRT with ROG UI"
                            , "Triple-Level Game Acceleration: Game Device, Game\n\t\t\t\t Packet, Game Server"
                            , "Adaptive QoS, customizable priorities"
                            , "VPN Fusion, supports multiple VPN profiles\n\t\t\t\t simultaneously"
                            , "AiProtection Pro powered by Trend Micro"
                            , "Yes - web/app filters, time schedules"
                            , "AiMesh compatible"
                            , "ASUS Router App (iOS & Android) - full remote\n\t\t\t\t management"
                            , "Personal cloud storage access via router");

            Software.show();

    Router_Design Design("Gamer-centric with RGB lighting (ROG AURA Sync)"
                        , "Advanced airflow design with side and top grills"
                        , "Heat sinks and internal fan for extended high performance"
                        , "Large (not wall-mountable) - consider for desk/table only"
                        , "Approx. 2.2 kg");

            Design.show();

    return (0);
}

// 430 Line Code