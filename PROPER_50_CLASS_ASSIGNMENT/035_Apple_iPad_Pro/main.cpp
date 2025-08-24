// Header File Inclusion
#include "Apple_Header_File.hpp"

int main(void)
{
    Apple_Overview Overview("73/100", '-'
                        , "12.9 in"
                        , "2732 x 2048 pixels"
                        , '-', "4 GB"
                        , "2.38 GHz"
                        , "Hexa Core"
                        , "7 MP", 677
                        , "6.9 mm"
                        , "3.5mm Audio Jack");

        Overview.show();

    Apple_General General("iPad Pro 12.9 (WiFi+256GB)"
                        , "No Sim Supported"
                        , 'N', '-'
                        , "Tablet"
                        , "June, 2017"
                        , '-', '-');

        General.show(); 

    Apple_Design Design("220.6 x 305.7 x 6.9 mm"
                    , 677, '-');

        Design.show();

    Apple_Display Display("Color IPS Screen (16M colors Colors)"
                        , 'Y'
                        , "12.9 inches, 2732 x 2048 pixels"
                        , "4:3", "~ 265 PPI"
                        , '-'
                        , "Scratch-resistant glass, oleophobic coating Screen Protection");

        Display.show(); 

    Apple_Connectivity Connectivity('N', 'N'
                                , 'N', 'N'
                                , '-'
                                , "Yes, with wifi-hotspot"
                                , '-'
                                , "Yes, v4.2"
                                , "Yes, Proprietary"
                                , '-');

        Connectivity.show();

    Apple_Performance Performance('-', '-');

        Performance.show(); 

    Apple_Extra Extra('N', "Yes, Front"
                    , '-'
                    , "Accelerometer, Gyroscope, Compass"
                    , 'Y', '-'
                    , '-', '-'
                    , '-');

        Extra.show();

    Apple_Camera Camera("12 MP", 'Y'
                    , "Face detection, Smile detection, Geo tagging, Panorama, Touch to focus"
                    , "4K @ 30 fps UHD"
                    , "Yes, Quad-LED"
                    , "7 MP", '-');

        Camera.show();

    Apple_Technical Technical("iOS v10.3.2, upgradable to v12.1.3"
                            , "Apple Fusion A10X"
                            , "2.38 GHz, Hexa Core Processor"
                            , '-', '-'
                            , 'N', 'Y');

        Technical.show();

    Apple_Multimedia Multimedia("Instant Messaging, Voice Commands"
                            , "Yes, with Push Email"
                            , "MP3, WAV"
                                , "MP4, H.264"
                                , 'N', 'Y');

        Multimedia.show();

    Apple_Battery Battery("Non-Removable Battery"
                        , "10891 mAh, Li-ion Battery"
                        , '-', "10 Hrs");
                    
        Battery.show();

    return (0);
}

// 832 Line Code