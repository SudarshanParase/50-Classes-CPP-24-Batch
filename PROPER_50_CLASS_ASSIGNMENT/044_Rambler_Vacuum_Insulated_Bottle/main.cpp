#include "Bottle_Header_File.hpp"

int main(void)
{
    Bottle_Overview Overview("YETI (USA)"
                        , "Ramber Vaccum Insulated Bottle"
                        , "Heavy-duty stainless steel water bottle"
                        , "Outdoor adventures, trades, long-term daily use"
                        , "Frequently recommended in sustainability and gear\n\t\t\t\t reviews");

        Overview.show();

    Bottle_Insulation Insulation("18/8 stainless steel, double-wall vacuum insulation"
                                , "Can keep beverages cold or hot for exceptionally long durations\n\t\t\t\t -up to 24 hours cold, 12 hours hot typical, depending on size and ambient\n\t\t\t\t conditions"
                                , "Exterior stays dry even when filled with cold liquid");

        Insulation.show();

    Bottle_Build Build("Thick-gauge 18/8 stainless steel-highly resistant to rust, punctures, and\n\t\t\t\t corrosion"
                    , "Designed to withstand dents and drops; retains structural integrity even\n\t\t\t\t under heavy use"
                    , "Features the TripleHaul leakproof cap with wide-mouth Over-the-Nose\n\t\t\t\t opening for easy filling and drinking");

        Build.show();

    Bottle_Size Size("Multiple capacities ranging from ~18oz to large tumblers like 36oz or\n\t\t\t\t 42oz"
                    , "Heavier than slimmer brands due to thicker metal—trades durability for\n\t\t\t\t weight"
                    , "Straight cylindrical bottle; fits most cup holders; simple form but extremely\n\t\t\t\t functional");

        Size.show();

    Bottle_Usability Usability("Wide enough for ice cubes; easy to clean and fill"
                            , "Limited lifetime warranty-designed to last decades"
                            , "Handwash recommended; no dishwasher-use for longevity"
                            , "Cap and seal effectively prevent spills—trusted for travel and\n\t\t\t\t active use");

        Usability.show();

    Bottle_Feedback Feedback("Users consistently praise YETI for surviving drops and rough handling\n\t\t\t\t without dents"
                            , "Many prefer YETI over Hydro Flask for sturdiness,\n\t\t\t\t despite Hydro Flask's lighter weight and more lid options"
                            , "I've broken other bottles-I've yet to destroy a YETI.");

        Feedback.show();

    return (0);
}

// 338 Line Code