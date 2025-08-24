#include "Belt_Header_File.hpp"

int main(void)
{
    Belt_Overview Overview("Hermes (France)"
                        , "Constance 32 mm Reversible Belt with 'H' Buckle"
                        , "1950s (remains iconic till 2025)"
                        , "Luxury Fashion / Business Accessories"
                        , "Unisex (with versions for men and women)"
                        , "Iconic, evergreen fashion symbol");

            Overview.show();

    Belt_Materials Materials("Genuine Calfskin + Togo/Epsom/Box/Swift leather (double-sided)"
                        , "Solid Brass with Gold, Silver, Palladium, or Ruthenium plating"
                        , "Hand-cut, hand-stitched, polished by Hermes artisans in France"
                        , "Saddle stitching using linen thread for durability"
                        , "Burnished and waxed for long-lasting smoothness");

            Materials.show();

    Belt_Dimensions Dimensions("32mm (Men's standard), also available in 24mm (Women's slim)"
                            , "80cm to 120cm (custom fit available)"
                            , "Approx. 50-55mm depending on letter style"
                            , "Yes - Two colors (one per side)"
                            , "Approx. 150-180g including buckle");

            Dimensions.show();

    Belt_Colors Colors("Noir (Black), Etoupe (Taupe), Gold (Tan), Bleu Marine, Ebene,\n\t\t\t\t Rouge H"
                    , "Reversible: typically Black/Brown, Tan/Beige, Navy/White etc."
                    , "Brushed Gold, Shiny Silver, Palladium, Ruthenium, Matt Black,\n\t\t\t\t Rose Gold"
                    , "Available in Hermes boutiques");

            Colors.show();

    Belt_Buckle Buckle("'H' Initial Monogram Detachable Buckle"
                    , "Slide and hook slot; very secure"
                    , "Solid brass core with plated finish"
                    , "Hermes offers limited editions with enamel inlays or precious metals"
                    , "Global fashion icon, easily recognized");

            Buckle.show();

    return (0);
}

// 319 Line Code