#include "AO_Header_File.hpp"

int main(void)
{
    AO_Overview Overview("A.O. Smith HSE-SHS-015 (15L, Vertical Storage)"
                        , "Premium mid-capacity electric storage water heater"
                        , "BEE 5-Star (highest efficiency)"
                        , "Rupee 6,400-6,800 (approx.)"
                        , "Small to medium households (2-4 persons) in India, including high-rise buildings");

        Overview.show();

    AO_Tank Tank("15 litres"
                , "Blue Diamond™ Glass-Lined (double-walled) for superior\n\t\t\t\t corrosion resistance and durability"
                , "Copper or Glass-coated element (depends on variant) with\n\t\t\t\t express heat function—heats water quickly"
                , "High-density PUF injection to minimize standby heat loss"
                , "Suitable up to 8 Bar — ideal for high-rise apartments");

        Tank.show();

    AO_Safety Safety("Pressure release to prevent over-pressurization"
                    , "Prevents overheating"
                    , "Prevents element damage if water supply is interrupted"
                    , "Minimizes risk of scalding"
                    , "Designed for electrical safety and rugged use");

        Safety.show();

    AO_Performance Performance("2000W heating element (fast warm-up)"
                            , "Reaches ~45 Degree C in approximately 10-15 minutes"
                            , "~38.3cm (W) x 37.6cm (H), weight ~10kg (compact for\n\t\t\t\t small bathrooms)"
                            , "Adjustable knob with indicator lights for power & heating\n\t\t\t\t status"
                            , "Wall-mount vertical orientation; installation not included\n\t\t\t\t but widely available");

        Performance.show();
        
    AO_Highlights Highlights("with 5+ years warranty on tank, 2+2* years on heating element,\n\t\t\t\t and 2-year overall product—ideal for hard water areas"
                            , "BEE 5-Star rated with efficient insulation"
                            , "suitable for quick showers or usage"
                            , "supports up to 8bar and features intelligent safety design"
                            , "with strong after-sales presence in India");

        Highlights.show(); 

    return (0);
}

// 321 Line Code