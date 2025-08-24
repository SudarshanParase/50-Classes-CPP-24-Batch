#include "Hikvision_Header_File.hpp"

int main(void)
{

    Hikvision_Overview Overview("Hikvision DS-2CD2147G-LSU (ColorVu 3.0 Pro Series)"
                            , "Ultra-high-end IP turret camera"
                            , "2025, part of Hikvision's latest ColorVu 3.0 lineup"
                            , "Commercial, retail, high-security installations"
                            , "Rupee 8,000- Rupee 12,000 (varies by dealer and warranty)");

            Overview.show();

    Hikvision_Image Image("1/1.8 Progressive CMOS"
                        , "4MP (2560x1440)"
                        , "Fixed lens (~2.8mm) or motorized varifocal optional"
                        , "Wide for superior low-light performance"
                        , "Digital zoom integrated");

            Image.show();

    
    Hikvision_Smart Smart("Human & vehicle recognition; reduces false positives"
                            , "Real-time notification with object tagging"
                            , "Supports configurable privacy zones"
                            , "Onboard motion detection, line crossing, intrusion detection");

            Smart.show();

    Hikvision_Build Build("Rugged housing, IK10 vandal-resistant, IP67 waterproof/wind-\n\t\t\t\t blown rain rated"
                    , "-30 Degree C to +60 Degree C, ideal for both extreme heat and cold"
                    , "12V DC input; IEEE 802.3af Power over Ethernet (PoE) support");

            Build.show();

    Hikvision_Video Video("H.265+, H.265, H.264, MJPEG"
                        , "Up to 60fps @ 1080p; variable available"
                        , "Main + sub-streams for flexible bandwidth use"
                        , "MicroSD support up to 512GB"
                        , "ONVIF, RTSP, FTP, SMTP, DHCP, NTP, etc."
                        , "Fully compatible with Hikvision NVRs and third-party\n\t\t\t\t ONVIF systems");

            Video.show();

    return (0);
}

// 312 Line Code