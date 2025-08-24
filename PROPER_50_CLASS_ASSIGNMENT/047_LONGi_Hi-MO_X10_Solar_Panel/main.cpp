#include "Solar_Header_File.hpp"

int main(void)
{
    Solar_Overview Overview("LONGi Solar"
                        , "Hi-MO X10 Scientist"
                        , "High-efficiency residential/commercial module"
                        , "Officially released in late 2024-2025"
                        , "Roof-mounted home systems & rooftop commercial\n\t\t\t\t installations");

        Overview.show();

    Solar_Performance Performance("Up to 24.8 Percent power conversion"
                            , "~670W per module"
                            , "N-Type TOPCon with hybrid IBC-inspired cell design"
                            , "~88.85 Percent performance retained after 30 years"
                            , "Approx. -0.29 Percent / Degree C ");

        Performance.show();

    Solar_Design Design("N-Type (no front electrodes), minimizing shading losses"
                    , "Large format format (~670-W panels; ~28.5kg per unit)"
                    , "Not specified—but high rear-side power likely in bifacial\n\t\t\t\t setup"
                    , "Heavy-duty frame for wind/hail resistance"
                    , "15y product warranty; performance warranty up to 30y");

        Design.show();

    Solar_Thermal Thermal("Maintains output in hot climates"
                        , "Very low; better long-term yield retention"
                        , "Minimized power loss as panel heats up");

        Thermal.show();

    Solar_Verdict Verdict("(24.8 Percent) for maximum generation per square meter"
                        , "(670W) reduces number of panels needed"
                        , "excellent for hot climates or variable weather"
                        , "performance retention up to 30 years with minimal degradation"
                        , "For tight roofs and upscale residential/commercial installations");

        Verdict.show();

    return (0);
}

// 311 Line Code