#include "Canon_App.hpp"

int main(void)
{
         
    std::cout << "\n================== C A N O N   C A M C O R D E R ==================" << std::endl << std::endl;

    Canon_Basic_Info Basic_Info("CANON", "2371883073621"
                              , "3041C002", "013803305852");

                    Basic_Info.show();

    Canon_Imaging Imaging("1-Chip 1 CMOS Sensor", "4268 x 3148 (13.4 MP)"
                            , "3840 x 2160 (8.29 MP)", "2000 to 15,000K");

                    Imaging.show();

    Canon_Lens Lens("8.3 to 124.5mm", "25.5 to 382.5mm", 15, "15x\n\t\t\t\t\t\t 4K: 15x\n\t\t\t\t\t\t 1920 x 1080: 30x"
                   , "f/2.8 to 4.5", 58, "Focus\n\t\t\t\t\t\t Zoom\n\t\t\t\t\t\t Iris", "Optical\n\t\t\t\t\t\t Digital"
                   , "Autofocus\n\t\t\t\t\t\t Manual Focus\n\t\t\t\t\t\t Dual Pixel CMOS AF");

                    Lens.show();

    Canon_Camera Camera("Mechanical Filter Wheel with 2 Stop (1/4), 4 Stop (1/16), 6 Stop (1/64) ND Filters"
                    , "Stereo", " 2 x SDXC Card Slots");

                    Camera.show();

    Canon_Recording Recording("NTSC", "H.265 4:2:2 10-Bit:\n\t\t\t\t\t\t 3840 x 2160p at 23.98/29.97/59.94 fps (160 Mb/s)\n\t\t\t\t\t\t 3840 x 2160p at 23.98/29.97/59.94 fps (110 Mb/s)\n\t\t\t\t\t\t 1920 x 1080p at 23.98/29.97/59.94 fps (60 Mb/s)\n\t\t\t\t\t\t 1920 x 1080p at 23.98/29.97/59.94 fps (45 Mb/s)\n\t\t\t\t\t\t 1920 x 1080i at 59.94 fps (60 Mb/s)\n\t\t\t\t\t\t 1920 x 1080i at 59.94 fps (45 Mb/s)\n\t\t\t\t\t\t 1920 x 1080p at 120 fps (180 Mb/s)\n\t\t\t\t\t\t H.264 4:2:0 8-Bit:\n\t\t\t\t\t\t 1920 x 1080p at 23.98/29.97/59.94 fps (45 Mb/s) "
        , "4-Channel 24-Bit 48kHz LPCM Audio", "MPEG2: 1920 x 1080 to 3840 x 2160 at 25p, 29.97p, 50p, 59.94p  (4.0 to 16.00 Mb/s)\n\t\t\t\t\t\t MPEG2: 1920 x 1080 to 1920 x 1080 at 50i, 59.94i  (4.0 to 9.0 Mb/s)");

                    Recording.show();

    Canon_Interface Interface(" 1 x HDMI (HDMI 2.0) Output\n\t\t\t\t\t\t 1 x BNC (12G-SDI) Output"
                            , " 2 x 3-Pin XLR Input\n\t\t\t\t\t\t 1 x 1/8 (3.5 mm) Stereo Input\n\t\t\t\t\t\t 1 x 1/8 (3.5 mm) Stereo Headphone Output"
                            , " 1 x RJ45 LAN Input/Output\n\t\t\t\t\t\t 1 x RJ45 RS-422 Control "
                            , "Wi-Fi Video Output, Audio Output, Control");

                    Interface.show();


    Canon_Display Display("LCD", "4.0", 'Y', 1230000);
                    
                    Display.show();

    Canon_EVF EVF("OLED", ".46*", 1770000);

                EVF.show();

    Canon_Power Power("Canon BP-A Series");
        
                Power.show();

    Canon_Environmental Environmental("23 to 113F / -5 to 45C"
                                    , "0 to 85 Percent");

                        Environmental.show();

    Canon_General General("17.05 x 10.16 x 7.52 / 433 x 258 x 191 mm (With Protrusions)\n\t\t\t\t\t\t 14.88 x 8.27 x 6.38 / 378 x 210 x 162 mm (Without Protrusions)"
                        , "5.9 lb / 2660 g\n\t\t\t\t\t\t Including grip belt; excluding hood, eyecup, and shoulder pad.");

                    General.show();

    Canon_Packaging Packaging("14.6 lb", "21.7 x 13.2 x 12.8 ");

                    Packaging.show();
    return (0);
}

// 637