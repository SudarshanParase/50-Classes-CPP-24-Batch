#include "Canon_Header_File.hpp"

int main(void)
{
    Canon_Basic_Info Basic_Info("CANON", "7073373913173", "6409C006AA", "660685263529");

            Basic_Info.show();

    Canon_Key_Specs Key_Specs("Print", "Inkjet", "Color", "12x Individual Cartridge"
                            , "Pigment-Based (Black, Blue, Cyan, Gray, Magenta, Matte Black, Photo Cyan, Photo Gray, Photo Magenta, Red, Yellow)"
                            ,  "1x Black\n\t\t\t\t\t1x Matte Black\n\t\t\t\t\t1x Cyan\n\t\t\t\t\t1x Magenta\n\t\t\t\t\t1x Yellow\n\t\t\t\t\t1x Photo Cyan\n\t\t\t\t\t1x Photo Magenta\n\t\t\t\t\t1x Gray\n\t\t\t\t\t1x Photo Gray\n\t\t\t\t\t1x Red\n\t\t\t\t\t1x Blue\n\t\t\t\t\t1x Chroma Optimizer"
                            , "Color/Blac: 2400 x 1200 dpi", "Roll Feed Roll Feed\n\t\t\t\t\tMaximum: 6 x 60 / 15.2 x 152.4 cm", "Wi-Fi\n\t\t\t\t\t*Via Included Adapter"
                            , "AC Adapter (Included)");

                Key_Specs.show();

    Canon_Printer Printer("Inkjet", "Color", "12x Individual Cartridge"
                        , "Pigment-Based (Black, Blue, Cyan, Gray, Magenta, Matte Black, Photo Cyan, Photo Gray, Photo Magenta, Red, Yellow)"
                        , "1x Black\n\t\t\t\t\t1x Matte Black\n\t\t\t\t\t1x Cyan\n\t\t\t\t\t1x Magenta\n\t\t\t\t\t1x Yellow\n\t\t\t\t\t1x Photo Cyan\n\t\t\t\t\t1x Photo Magenta\n\t\t\t\t\t1x Gray\n\t\t\t\t\t1x Photo Gray\n\t\t\t\t\t1x Red\n\t\t\t\t\t1x Blue\n\t\t\t\t\t1x Chroma Optimizer"
                        , "Canon PFI-2100, Canon PFI-2300, Canon PFI-2700, Canon PFI-3100, Canon PFI-3300, Canon PFI-3700"
                        , "18,432 Nozzles (Total)", "Color/Black: 2400 x 1200 dpi", "Yes", "No", "JPEG, PDF, SG Raster");

            Printer.show();

    Canon_Printer_Media Media("Manual Feed, Media Cutter, Output Bin, Roll Feed", "Roll Feed\n\t\t\t\t\tMaximum: 6 x 60 / 15.2 x 152.4 cm"
                        , "2.76 to 31.5 mil / 0.07 to 0.8 mm", "6.7 / 17 cm (Outer)");

            Media.show();

    Canon_Connectivity Connectivity("1x USB-B 2.0 Input\n\t\t\t\t\t1x USB-A 2.0 Input (Flash Drive Only)\n\t\t\t\t\t1x RJ45 Input", "Wi-Fi\n\t\t\t\t\t*Via Included Adapter"
                            , "USB Port", "Printer: 3 GB"
                            , "Computer: Windows / macOS\n\t\t\t\t\tMobile: Android/iOS");

            Connectivity.show();

    Canon_General General("AC Adapter (Included)", 'N', "100 to 240 VAC, 50 / 60 Hz"
                        , "85 W (Maximum)\n\t\t\t\t\t1.7 W (Standby)\n\t\t\t\t\t0.1 W (Off)"
                        , "59 to 86F / 15 to 30C at 10 to 80% Humidity"
                        , "ENERGY STAR, EPEAT Gold"
                        , "78.7 x 38.7 x 46 / 199.9 x 98.3 x 116.8 cm (with Basket Open, with Stand)"
                        , "377 lb / 171 kg (with Stand)");

            General.show();

    Canon_Packaging Packaging(581, "86 x 53 x 34");

            Packaging.show();

    return (0);
}

// 468 Line Code