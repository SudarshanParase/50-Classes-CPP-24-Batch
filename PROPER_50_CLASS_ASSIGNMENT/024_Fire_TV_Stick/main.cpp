#include "Fire_Header_File.hpp"

int main(void)
{
    Fire_Stick Stick("3.4” x 1.2” x 0.5” (86 x 30 x 13 mm)"
                    , "1.1 oz (32.0 g)", "Quad-core 1.7 GHz"
                    , "IMG GE8300", "8 GB Internal"
                    , "Dual-band, dual-antenna wifi (MIMO) for faster\n\t\t\t\t\t streaming and fewer dropped connections than\n\t\t\t\t\t standard wifi. Supports 802.11a/b/g/n/ac wifi\n\t\t\t\t\t networks."
                    , "Bluetooth 5.0 and Bluetooth Low Energy. Pair with\n\t\t\t\t\t compatible Bluetooth speakers, headphones, video\n\t\t\t\t\t game controllers, and more."
                    , "Yes, with Alexa Voice Remote (included) or the free Fire\n\t\t\t\t\t TV app (available for download on Fire OS, Android,\n\t\t\t\t\t and iOS)"
                    , "The included Alexa Voice Remote can control Fire TV\n\t\t\t\t\t Stick and certain functions (such as power and volume)\n\t\t\t\t\t on a wide range of compatible IR-enabled devices,\n\t\t\t\t\t including TVs, soundbars, and A/V receivers. This also\n\t\t\t\t\t contains preset top app buttons. Note: Certain\n\t\t\t\t\t functions may not be available on some IR-enabled\n\t\t\t\t\t devices."
                    , "HDMI output, micro-USB for power only"
                    , "HDMI pass-through of Dolby-encoded audio (AC-3 and\n\t\t\t\t\t E-AC-3)"
                    , "High-definition TVs with HDMI capable of 1080p or\n\t\t\t\t\t 720p at 60/50 Hz."
                    , "High-definition television with available HDMI input,\n\t\t\t\t\t internet connection via wifi, a power outlet"
                    , "HDR 10, HDR10+, HLG, H.265, H.264, Vp9"
                    , "1080p and 720p up to 60 fps"
                    , "Fire TV Stick is sold with a limited warranty of one year\n\t\t\t\t\t provided by the manufacturer. Use of Fire TV Stick is\n\t\t\t\t\t subject to the terms found here."
                    , "Certain services may not be available outside India."
                    , "VoiceView screen reader enables access to the vast\n\t\t\t\t\t majority of Fire TV features for users who are blind or\n\t\t\t\t\t visually impaired. Screen magnifier enables viewers to\n\t\t\t\t\t zoom in and out, and pan around the screen. Text\n\t\t\t\t\t Banner consolidates onscreen text into a compact,\n\t\t\t\t\t customizable banner that appears on the screen.\n\t\t\t\t\t Watch videos and TV shows with closed captioning\n\t\t\t\t\t displayed. Use Audio Description for verbal\n\t\t\t\t\t descriptions of what is happening on the screen,\n\t\t\t\t\t including physical actions, facial expressions and scene\n\t\t\t\t\t changes. Captions and audio descriptions are not\n\t\t\t\t\t available for all content. You can also listen to Fire TV\n\t\t\t\t\t with compatible Bluetooth headphones. Learn more\n\t\t\t\t\t about captions."
                    , "Fire TV Stick, Alexa Voice Remote, USB cable and\n\t\t\t\t\t power adapter, HDMI extender cable, 2 AAA batteries,\n\t\t\t\t\t Quick Start Guide"
                    , "India", "Streaming Media Player", '1'
                    , "Fuhong Precision Component( Bac Giang) Company\n\t\t\t\t\t Limited LOT P(P1) AND P(P2) QUANG CHAU\n\t\t\t\t\t INDUSTRIAL PARK,VIET YEN DISTRICT,BAC GIANG\n\t\t\t\t\t PROVINCE,BAC GIANG,Vietnam-10000");

        Stick.show();

    Fire_Alexa Alexa("38 x 142 x 16 mm", "43.4 g (without batteries)"
                    , "2 AAA Alkaline (included)", "Bluetooth"
                    , "Fire TV Stick - 3rd Generation, Fire TV Stick 4k, Fire TV\n\t\t\t\t\t 4K Max, Fire TV Stick Plus");

        Alexa.show();

    Fire_Info Info("Rupee 2,599.00", "4.2"
                    , "Alexa Voice Remote Lite (Preset top app buttons)"
                    , "-", "HDMI passthrough of Dolby-encoded audio"
                    , "Streaming Essential", "-"
                    , "Up to 1080p Full HD with Support HDR, HDR10+, HLG"
                    , "Yes", "8 GB", "1 GB", "-", "-", "Yes", "Yes");
            
        Info.show();

    return (0);
}

// 322 Line Code