#include "Samsung_App.hpp"

int main(void)
{
    Samsung_Basic_Info Basic_Info(337675, "SAMSUNG", "6995969081429", "LS57CG952NNXZA");
        Basic_Info.show();

    Samsung_Key_Specs Key_Specs(57, "Mini-LED VA LCD", "7680 x 2160", "1000 nits / cd/m2 (Peak in HDR Mode)\n\t\t\t\t\t\tS 420 nits / cd/m2 (Sustained)"
                                , "HDR10+", "10-Bit (1.07 Billion Colors)", "95 Percent DCI-P3", "Anti-Glare / Matte", 'N'
                                , "1x DisplayPort 2.1 3x HDMI 2.1", "1x 1/8 / 3.5 mm (Headphone)", "2x USB-A 3.0 / 3.1/3.2 Gen 1\n\t\t\t\t\t\tS 1x USB-B 3.0 / 3.1/3.2 Gen 1"
                                , 'N');

        Key_Specs.show();

    Samsung_Display Display(57,"Mini-LED VA LCD", "32:9","7680 x 2160", "1000 nits / cd/m2 (Peak in HDR Mode)\n\t\t\t\t\t\tS 420 nits / cd/m2 (Sustained)", "HDR10+", "2500:1"
                          , "1,000,000:1", "1 ms (GtG)", 240, "FreeSync Premium Pro", "10-Bit (1.07 Billion Colors)", "95 Percent DCI-P3", "178 x 178 degree", "54.9060 x 15.4423 / 1394.6112 x 392.2344 mm"
                          , 1000, "0.1815 x 0.1815 mm", 140, "Anti-Glare/Matte", 'N');

        Display.show();

    Samsung_Connectivity Connectivity("1x DisplayPort 2.1\n\t\t\t\t\t\tS 3x HDMI 2.1", "1x 1/8 / 3.5 mm (Headphone)", "Yes, Version 2.2"
                                    , "2x USB-A 3.0 / 3.1/3.2 Gen 1\n\t\t\t\t\t\tS 1x USB-B 3.0 / 3.1/3.2 Gen 1", "Picture-in-Picture (PIP), Picture-by-Picture (PBP)");

        Connectivity.show();

    Samsung_Speaker Speaker('N');

        Speaker.show();

    Samsung_Environmental Environmental("50 to 104 Degree F / 10 to 40 Degree C", "10 to 80 Percent", "Maximum: 300.0 W"
                                      , "100 to 240 VAC, 50 / 60 Hz", "Internal");
    
        Environmental.show();

    Samsung_General General("4.7 / 120 mm", 'N',"30 (-15 to 15)", "-3 to 10", "100 x 100 mm"
                          , 'N', "52.3 x 23.7 x 19.7 / 1327.5 x 601 x 499.6 mm (with Stand)\n\t\t\t\t\t\tS 52.3 x 16.9 x 13.3 / 1327.5 x 429.5 x 338.4 mm (without Stand)"
                          , "41.9 lb / 19 kg (with Stand)\n\t\t\t\t\t\tS 34.0 lb / 15.4 kg (without Stand)");

        General.show();

    Samsung_Packaging_Info P_Info(60.5, "57.25 x 21.75 x 17");

        P_Info.show();

    return (0);
}
// 500