#include "Rayban_Header_File.hpp"

int main(void)
{

    Rayban_Overview Overview("Ray-Ban (Luxottica Group)"
                            , "Aviator Solid Gold Limited Edition"
                            , "2016 (still the flagship ultra-luxury model in 2025)"
                            , "Luxury Sunglasses"
                            , "Unisex"
                            , "Iconic since 1937; originally developed for U.S. Air Force pilots");

            Overview.show();

    Rayban_Frame Frame("Full Rim"
                    , "Aviator (Teardrop)"
                    , "18 Karat Solid Yellow Gold"
                    , "18K Gold with fine black acetate tips"
                    , "Adjustable, made from transparent silicone"
                    , "Polished gold with engraved serial number (Limited Edition)"
                    , "Approx. 60 grams (heavier due to real gold)"
                    , "Handcrafted with ultra-high precision");

            Frame.show();

    Rayban_Lens Lens("Crystal lenses with Anti-Reflective (AR) coating"
                    , "Polarized Crystal (G-15 or B-15 options)"
                    , "Green Classic G-15 or Brown B-15 (depending on version)"
                    , "Yes - 100 Percent polarized to block horizontal glare"
                    , "100 Percent UVA & UVB Protection"
                    , "58mm (standard), also available in 55mm and 62mm"
                    , "~50mm (varies by size)"
                    , "~15% (for G-15 lens)"
                    , "High - due to mineral glass and coating"
                    , "True color perception with minimal distortion");

            Lens.show();

    Rayban_Technology Technology("Reduces glare from surfaces like roads, water, snow"
                                , "Minimizes reflection inside the lenses"
                                , "Lens coatings repel water, oil, and smudges"
                                , "Moderate - Crystal lenses can shatter under extreme impact"
                                , "Each unit hand-assembled in Italy by master craftsmen");

            Technology.show();

    Rayban_Comfort Comfort("Universal Fit with adjustable nose pads"
                        , "135mm", "14mm"
                        , "No (traditional gold temples)"
                        , "Front-heavy due to real gold (balanced by nose pads)");

            Comfort.show();

    return (0);
}

// 366 Line Code