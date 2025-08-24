#include "Jacket_Header_File.hpp"

int main(void)
{
    Jacket_Overview Overview("Louis Vuitton (France)"
                        , "Damier Calfskin Leather Jacket"
                        , "Luxury Men's Leather Jacket"
                        , "2024-2025 season, flagship LV outerwear"
                        , "High-fashion clientele, collectors, influencers");

        Overview.show();

    Jacket_Material Material("Full-grain calfskin embossed with iconic Damier checkerboard\n\t\t\t\t texture"
                            , "Silk or viscose blend with branded LV jacquard pattern"
                            , "Heavy-duty YKK zippers, engraved LV press studs"
                            , "Expertly matched tone-on-tone thread finishes"
                            , "Semi-matte hand-polished leather");

        Material.show();

    Jacket_Dimensions Dimensions("Tailored slim-fit with structured shoulders"
                                , "EU 46-56 (US S-XXL)"
                                , "Mid-waist (~64-68cm depending on size)"
                                , "~1.3-1.5kg (due to dense leather)"
                                , "Slightly snug, best worn with lighter layers");

        Dimensions.show();

    Jacket_Design Design("Damier checkerboard finish in tonal grey-black or brown"
                        , "Subtle epaulettes add structure"
                        , "2 side welt, 1 zipped chest pocket, interior slip pocket"
                        , "Zippered cuffs with snap closures"
                        , "Single back vent for freedom of movement"
                        , "Discreet LV logo embossed on cuff snaps");

        Design.show();

    Jacket_Functional Functional("Thin, quilted silk for mild weather layer"
                                , "Water-resistant leather coating"
                                , "Soft viscose blend for breathability"
                                , "Zippers under arm pits enable airflow"
                                , "Leather adapts to body temperature for comfort");

        Functional.show();

    return (0);
}

// 325 Line Code