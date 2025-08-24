#include "OMG_Header_File.hpp"

int main(void)
{


    
    std::cout << "\n=================================== O.M G   C A B L E ===================================" << std::endl << std::endl;
    
    OMG_Cable_Features Features("Full control with your web browser. Desktop or mobile."
                , "Instant DuckyScript payloads. No recompiling ore reprogramming, just click run! And with industry-leading\n\t\t\t\t\t 890keys/sec speeds."
                , "Basic model comes with 8 slots. Elite has extra storage allowing up to 200 slots!"
                , "With 192 keymaps already built in, you can target machines across the world."
                , "The WebUI not only provides 100% of the controls, but also gives you helpful feedback to catch syntax errors\n\t\t\t\t\t while rapidly building payloads."
                , "Cables with a USB-C active end, or Directional C to C, can automatically transmit to mobile devices with a USB-\n\t\t\t\t\t C connector. Connect just the active end!"
                , "The implant stays dormant until a payload is deployed. No logs. No detections. The cable behaves just like a\n\t\t\t\t\t normal USB 2.0 cable. (5v charging, 480mps data transfer) Spoof any USB identifer (VID/PID), extended USB\n\t\t\t\t\t Identifier, and network MAC address."
                , "Elite models contain a passive hardware keylogger designed for FullSpeed USB keyboards with detachable\n\t\t\t\t\t cables. Store up to 650,000 keystrokes. For tested keyboards & more info go here."
                , "Elite models: setup a bidirectional tunnel from Target Host > O.MG > Control Machine."
                , "Elite models: Use an encrypted connection to access & control your O.MG from anywhere. Then disable\n\t\t\t\t\t the onboard WebUI to hide and protect your O.MG on untrusted networks. Compatible with any server that runs\n\t\t\t\t\t python."
                , "Make your legal team happy by ensuring sensitive payloads & loot are gone, and the O.MG Cable is fully inert.\n\t\t\t\t\t (recoverable with O.MG Programmer)"
                , "Trigger payloads or other actions based on location. Keep your tool from falling out of scope! Ex: self-destruct if\n\t\t\t\t\t someone takes the O.MG Cable home."
                , "Trigger payloads at long range with a single beacon.");

                Features.show();

    OMG_Basic_Spec Basic('Y', 'Y', '8', 120, 'Y', 'Y', 'Y', '-', '-', '-', '-', '-');

            Basic.show();

    OMG_ELITE_Spec ELITE('Y', 'Y', "50-200", 890, 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y');

        ELITE.show();


    return (0);    
}

// 292 Line Code