#include "Amazon_Header_File.hpp"

int main(void)
{
    Amazon_Overview Overview("Amazon Echo Show 10 (3rd Gen)"
                            , "February 2021 (Still top-tier in 2025)"
                            , "₹22,999 to ₹24,999 (Varies by region/promo)"
                            , "Alexa (Cloud-based)", "Rotating HD Touchscreen"
                            , "Smart Home Hub, Video Calls, Streaming, AI Voice Assistant");

                Overview.show();

    Amazon_Display Display("10.1-inch", "1280 x 800 pixels", 'Y'
                        , "360 Motorized Base - Follows User Movement"
                        , "Plastic with fabric-covered speaker"
                        , "Glacier White, Charcoal", "251 x 230 x 172 mm"
                        , "2.56 kg");

            Display.show();

    Amazon_Audio Audio("2x 1” tweeters + 1x 3” woofer", "Premium directional sound"
                    , "Spotify, Amazon Music, Apple Music, etc."
                    , "Array of far-field microphones", 'Y'
                    , "Always-on mic with voice recognition");

    Amazon_Camera Camera("13 MP", "Alexa Calling, Skype, Zoom"
                        , "Yes - Camera pans and zooms to follow user"
                        , "	Yes - Manual camera shutter");

    Amazon_Connectivity Conectivity("Dual-band (2.4 GHz and 5 GHz)"
                                , "A2DP support for audio streaming"
                                , "Zigbee, Matter-ready, Amazon Sidewalk"
                                , "Power port (no USB or aux)");

                    Conectivity.show();

    return (0);
}

// 318 Line Code