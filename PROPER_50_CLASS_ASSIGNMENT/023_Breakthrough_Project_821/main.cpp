#include "Feadship_Header_File.hpp"

int main(void)
{
    Feadship_Overview Overview("Feadship Breakthrough (Hull 821)"
                            , "Launched May 2024; Delivered May 2025"
                            , "Ultra-luxury superyacht, pioneering hydrogen fuel-cell\n\t\t\t\t propulsion"
                            , "Feadship Netherlands"
                            , "Exterior & interior by Redman Whiteley Dixon; naval\n\t\t\t\t architecture by De Voogt");

            Overview.show();

    Feadship_Dimensions Dimensions(118.8, "~19.0m", "5.05 m", "7,247GT"
                                , "Steel displacement hull; aluminum superstructure");

            Dimensions.show();

    Feadship_Propulsion Propulsion("Hydrogen fuel-cell-electric + hybrid diesel-electric gensets"
                                , "ABB pods (~3,200kW each) powered by cryogenic liquid\n\t\t\t\t hydrogen"
                                , "Diesel-electric (methanol-capable MTU generators)"
                                , "~17 knots", "~6,500nmi per refill"
                                , "Zero emissions in fuel-cell mode; exhaust water only");

            Propulsion.show(); 

    Feadship_Interior Interior("~30 passengers across 12 guest suites"
                            , "~44 (dedicated service staff)"
                            , "Townhouse-style central atrium with elevator and spiral staircase"
                            , "Underwater viewing lounge; 8.2m contraflow infinity pool; seven\n\t\t\t\t unfolding balconies and platforms"
                            , "Cinema, extensive wellness spa, library, plus theatrical atrium lounge");

            Interior.show();

    Feadship_Limitations Limitations("Estimated at $600-$650M depending on customization"
                                    , "Cryogenic hydrogen fueling ports are extremely limited\n\t\t\t\t globally"
                                    , "Limited market and service support due to groundbreaking design");

            Limitations.show();

    return (0);

}

// 311 Line Code