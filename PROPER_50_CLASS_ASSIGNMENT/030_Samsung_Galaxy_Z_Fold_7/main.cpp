// Header File Inclusion
#include "Samsung_Header_File.hpp"

int main(void)
{

    std::cout << "================ S A M S U N G   G A L A X Y   Z   F O L D   7 ================" << std::endl << std::endl;

    Samsung_Overview Overview("95/100"
                            , "1968 x 2184 pixels"
                            , "12 GB", 256
                            , "4.47 GHz"
                            , "200 MP + 12 MP + 10 MP Triple"
                            , "10 MP + 10 MP Dual"
                            , 4400
                            , "Water Resistant");

        Overview.show();

    Samsung_General General("India"
                            , "Z Fold 7 5G"
                            , "Dual Sim, GSM+GSM"
                            , 'Y', "Nano+Nano SIM"
                            , '-', "Smartphone"
                            , "July 09, 2025", '-');

        General.show();

    Samsung_Design Design("143.2 x 158.4 x 4.2 mm"
                        , 215
                        , "Blue Shadow, Silver Shadow, Jet Black, Mint");

        Design.show();

    Samsung_Display Display("Color LTPO AMOLED Screen (16M Colors)"
                        , 'Y', "8 inches, 1968 x 2184 pixels, 120 Hz"
                        , "20:18", "~ 368PPI"
                        , "~90 Percent"
                        , "2600 nits (peak)"
                        , "HDR10+"
                        , "Yes, Punch Hole"
                        , 'Y'
                        , "Yes, Dynamic LTPO AMOLED 2X, 6.5 inches, 1080 x 2520 pixels,\n\t\t\t\t 120Hz, Corning Gorilla Glass Ceramic 2, 422 ppi" );

        Display.show();

    Samsung_Memory Memory("12 GB", '-'
                        , 256, "UFS 4");

        Memory.show();

    Samsung_Connectivity Connectivity('Y', 'Y'
                                    , 'Y', 'Y'
                                    , 'Y', '-'
                                    , "Yes, Dual Stand-By"
                                    , 'Y', "Yes, with wifi-hotspot"
                                    , "Wi-Fi 7"
                                    , "Yes, v5.4, A2DP, LE, aptX HD"
                                    , "Yes, USB-C v3.2"
                                    , "USB Tethering, USB on-the-go, USB Charging"
                                    , '-');

        Connectivity.show();

    Samsung_Extra Extra("Yes, with A-GPS, Galileo, Glonass, BeiDou"
                        , "Yes, Side", 'Y'
                        , "Accelerometer, Gyro, Proximity, Compass, Barometer"
                        , 'N', 'Y'
                        , "AI Mobile (Galaxy AI)"
                        , "Yes, 1 m upto 30 min"
                        , '-', "IP48"
                        , 'Y'
                        , "E-sim Support");

        Extra.show();

    Samsung_Camera Camera("200 MP f/1.7 (Wide Angle), 10 MP f/2.4 (Telephoto),\n\t\t\t\t 12 MP f/2.2 (Ultra Wide)"
                        , 'Y', 'Y'
                        , "HDR, panorama"
                        , "8K @ 30 fps UHD, 4K @ 60 fps UHD, 1080p @ 60 fps\n\t\t\t\t FHD, 720p @ 960 fps HD"
                        , "Yes, LED"
                        , "10 MP f/2.2 (Ultra Wide) 10 MP f/2.2 (Cover camera)"
                        , "4K @ 60 fps UHD, 1080p @ 60 fps FHD");

        Camera.show();

    Samsung_Technical Technical("Android v16"
                            , "One UI 18"
                            , "Qualcomm Snapdragon 8 Elite for Galaxy"
                            , "4.47 GHz, Octa Core Processor"
                            , "2x4.47 GHz Oryon V2 Phoenix L + 6x3.53 GHz Oryon V2 Phoenix M"
                            , "Adreno 830 (1200 MHz)"
                            , 'N', 'Y');

        Technical.show();

    Samsung_Multimedia Multimedia('Y'
                                , "MP3, M4A, 3GA, AAC, OGG, OGA, WAV, AMR, AWB, FLAC, MID,\n\t\t\t\t MIDI, XMF, MXMF, IMY, RTTTL, RTX, OTA, APE, DSF, DFF"
                                , "MP4, M4V, 3GP, 3G2, AVI, FLV, MKV, WEBM"
                                , 'N', 'Y');

        Multimedia.show();

    Samsung_Battery Battery("Non-Removable Battery"
                        , 4400
                        , "Yes, 25W Fast Charging"
                        , "Yes, 15W"
                        , 'Y'
                        , "Yes, 4.5W");

        Battery.show();

    return (0);
}

// 859 Line Code