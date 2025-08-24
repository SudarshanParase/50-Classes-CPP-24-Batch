#include "Kettle_Header_File.hpp"

int main(void)
{
    Kettle_Overview Overview("Ninja (SharkNinja, USA)"
                            , "Precision Temperature Kettle"
                            , "1.7 L (60 fl oz)"
                            , "Precision electric kettle / General-use and specialty\n\t\t\t\t tea/coffee");

        Overview.show();

    Kettle_Power Power("Approx. 1500W (typical) for rapid boiling and precise temperature\n\t\t\t\t control"
                    , "Boils 1L in approximately ~50 seconds; faster than many premium\n\t\t\t\t kettles"
                    , "6 preset options (e.g., 70 Degree C, 80 Degree C, 90 Degree C, 95 Degree C, full boil 100 Degree C),\n\t\t\t\t adjustable to the degree on base"
                    , "Maintains temperature for up to 30 minutes (holds wanted temp)");

        Power.show();

    Kettle_Build Build("Stainless steel interior with BPA-free exterior\n\t\t\t\t components"
                    , "Concealed for easy cleaning and safety"
                    , "Exterior remains comfortable to touch, even after\n\t\t\t\t boiling"
                    , "Clear indicator for precise fill-level awareness"
                    , "Cordless, 360 Degree swivel base for easy placement and\n\t\t\t\t serving");

        Build.show();

    Kettle_Performance Performance("Designed for heavy domestic use, strong stainless build"
                                , "Auto shut-off at boil, boil-dry protection, cool-touch\n\t\t\t\t surfaces"
                                , "Moderate (below 60dB during heating)"
                                , "~300ml minimum volume supported - energy-efficient for small servings");

        Performance.show();

    Kettle_Design Design("Modern stainless with matte-black base, subtle tactile\n\t\t\t\t controls"
                        , "Intuitive base buttons, lid opens with handle-angle button,\n\t\t\t\t ergonomic grip"
                        , "Easy to clean due to wide mouth and concealed heating\n\t\t\t\t element"
                        , "Typically 1-2 years (varies by region / retailer)");

        Design.show();

    Kettle_Temperature Temperature("Accurate to +-1 Degree F across settings (e.g., 80 Degree C hits within 1 Degree )"
                                , "Holds at ~78 Degree C after 30 mins, ~66 Degree C after 1 hour (ambient\n\t\t\t\t ~25 Degree C)"
                                , "Excellent for coffee and tea lovers needing precise brew control");

        Temperature.show();

    return (0);
}

// 353 Line Code