#include "Glasses_Header_File.hpp"

int main(void)
{
    std::cout << "\n===================== M E T A   R A Y - B A N =====================" << std::endl << std::endl;

    Glasses_Basic_Info Info("META", "7133572989013", "899-00597-01");

                        Info.show();

    Glasses_IO IO(32, "Clear Lenses", "12 MP Sensor\n\t\t\t\t\t\t Image Resolution: 3024 x 4032\n\t\t\t\t\t\t Video Resolution: 1440 x 1920 at 30 fps"
                , "5 (2 per Arm, 1 Near Nose Pad)", "2 x Open Air", "Max: 76.1 dB");

                IO.show();

    Glasses_Wireless Wireless("Wi-Fi 6 (802.11ax) / Bluetooth 5.2"
                            , "Yes: Android & iOS\n\t\t\t\t\t\t App Name: Meta View\n\t\t\t\t\t\t Functionality: Access Stored Files, Adjust Settings, Remote Control, Setup, View Live Feed");
                        
                        Wireless.show();
    
    Glasses_Battery Battery("Not Specified by Manufacturer", "44 Minutes", "4 Hours");

                    Battery.show();

    Glasses_Physical Physical("Shiny Black", "Plastic"
        , "5.8 x 1.8 / 146.1 x 46.8 mm (Frame Width x Height)\n\t\t\t\t\t\t 5.9 / 150 mm (Arm/Temple Length)\n\t\t\t\t\t\t 5.15 / 130.73 mm (Hinge to Hinge)\n\t\t\t\t\t\t 1.6 / 40.6 mm (Lens Height)\n\t\t\t\t\t\t 1.98 / 50.22 mm (Bridge Width)"
        , " 1.7 oz / 48.6 g (Frame)\n\t\t\t\t\t\t 4.7 oz / 133 g (Charging Case");

                        Physical.show();

    Glasses_Packaging Packaging("0.7 lb", "15.2 x 7.9 x 1.7");
                        Packaging.show();
    


    return (0);
}
// 322