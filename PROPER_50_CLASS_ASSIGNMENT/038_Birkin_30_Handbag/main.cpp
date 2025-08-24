#include "Handbag_Header_File.hpp"

int main(void)
{
    Handbag_Overview Overview("Hermes FR (Established 1837)"
                            , "Birkin 30"
                            , "Structured Top-Handle Tote"
                            , "Handmade in France"
                            , "First introduced in 1984 (timeless classic)"
                            , "Ultra-Luxury market (women, collectors, celebrities, royals)");

        Overview.show();

    Handbag_Dimensions Dimensions("Birkin 30"
                                , "30 cm (11.8 inches)"
                                , "22 cm (8.7 inches)"
                                , "16 cm (6.3 inches)"
                                , "Approx. 10 cm (4 inches)"
                                , "~1.1-1.3 kg (depends on leather & hardware)");

        Dimensions.show();

    Handbag_Materials Materials("Togo Leather (grained calfskin)"
                                , "Goat Leather (Chevre)"
                                , "Matte, natural grained texture"
                                , "Epsom, Clemence, Box, Swift, Ostrich, Crocodile, Lizard");

        Materials.show();

    Handbag_Hardware Hardware("Palladium-plated (silver tone) or Gold-plated (24k)"
                            , "Included with Hermès engraved padlock + 2 keys in clochette"
                            , "4 base studs for protection"
                            , "Dual strap closure with front flap insert");

        Hardware.show();

    Handbag_Colors Colors("Gold (tan), Noir (black), Etoupe (taupe grey), Blue Jean, Rouge\n\t\t\t\t Casaque"
                        , "Usually tone-on-tone or complementary (customizable)"
                        , "Tone-on-tone or contrast stitching options"
                        , "Through Hermès Special Order program only");
                        
        Colors.show();

    Handbag_Storage Storage("1 zip pocket, 1 slip pocket (non-removable)"
                        , "Doesn't fit laptop; ideal for wallet, phone, makeup, diary"
                        , "Flap closure with lockable buckle"
                        , "Hand-carry only (no shoulder strap)"
                        , "Not waterproof (Togo is slightly more resistant than other\n\t\t\t\t leathers)");

        Storage.show(); 

    return (0);
}

// 373 Line Code