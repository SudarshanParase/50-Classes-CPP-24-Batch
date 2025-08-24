// Header File Inclusion
#include "Perfume_Header_File.hpp"

int main(void)
{
    Perfume_Overview Overview("Maison Francis Kurkdjian"
                            , "Baccarat Rouge 540"
                            , "Amber-Floral / Woody Unisex"
                            , "2016 (retained flagship status through 2025)"
                            , "Francis Kurkdjian"
                            , "Unisex - worn by both men and women in luxury\n\t\t\t\t lifestyle, fashion and influencer circles");

        Overview.show();

    Perfume_Scent Scent("Saffron, Jasmine"
                        , "Orange Blossom, Amberwood"
                        , "Cedar, Musk, Ambergris"
                        , "Warm amber-cedar sweetness fused with saffron\n\t\t\t\t and musky depth"
                        , "Rich yet airy, luxurious, slightly gourmand but\n\t\t\t\t balanced with woody clarity");

        Scent.show();

    Perfume_Performance Performance("Exceptional - can last 10-12+ hours on skin"
                                , "Strong aura trail - highly noticeable in a room"
                                , "Moderate to heavy, yet refined, not overpowering"
                                , "Suitable for day or night; flexible across seasons, especially cool or air-conditioned environments");

        Performance.show();

    Perfume_Bottle Bottle("Elegant square glass with rose-gold cap and minimalist\n\t\t\t\t branding"
                        , "Typically sold in 70ml and 200ml sizes"
                        , "Sturdy white box with logo detailing; refined minimalist\n\t\t\t\t aesthetic");

        Bottle.show();

    Perfume_Usage Usage("Ideal to spray on pulse points (neck, wrists); can also\n\t\t\t\t lightly dab on clothes for lasting scent"
                    , "Store upright in a cool, dark place-out of direct\n\t\t\t\t sunlight"
                    , "3-5 years unopened; fragrance may evolve over time\n\t\t\t\t when opened");

        Usage.show();

    return (0);
}

// 300 Line Code