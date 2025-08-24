#include "Nike_Header_File.hpp"

int main(void)
{
    Nike_Overview Overview("Nike"
                        , "Air Mag (Self-Lacing Limited Edition)"
                        , "2011 (non-lacing), 2016 (self-lacing)"
                        , "Smart Footwear / Luxury Collectible Sneaker"
                        , "Unisex (Men's sizing standard)"
                        , "Iconic, rare, futuristic, luxury-grade");

        Overview.show();

    Nike_Materials Materials("Flyknit & Synthetic Fabric with Structured Support Panels"
                            , "Cushlon foam with integrated motor unit"
                            , "Translucent rubber with carbon-fiber heel counter"
                            , "Soft microfiber with internal LED wiring"
                            , "Molded TPU (Thermoplastic Polyurethane) shell"
                            , "Reinforced for protection and form retention");

        Materials.show();

    Nike_Smart Smart("Automatic 'adaptive fit' tech using sensors and motors"
                    , "Pressure sensors detect when foot enters and adjust\n\t\t\t\t accordingly"
                    , "Buttons on side allow tightening or loosening manually"
                    , "Approx. 9-10 days per charge"
                    , "Wireless magnetic charging stand (induction pad included)"
                    , "Multi-zone LED lights (heel, strap, side) with animations"
                    , "No app for Air Mag (used on newer Nike Adapt shoes\n\t\t\t\t instead)");

        Smart.show();

    Nike_Dimensions Dimensions("US Men's 7-13 (limited production)"
                            , "Approx. 1.5 lbs (due to motor and battery)"
                            , "Regular fit, slightly snug due to internal wiring"
                            , "Fixed cushioned insole");

        Dimensions.show();

    Nike_Colors Colors("Cool Grey with Light-Up Blue Accents"
                    , "Futuristic High-Top with Hoverboard-inspired aesthetics"
                    , "Nike Swoosh on side, heel, strap"
                    , "Laser-etched on inner collar (numbered out of 89 pairs for\n\t\t\t\t 2016 edition)");

        Colors.show();

    return (0);
}

// 327 Line Code