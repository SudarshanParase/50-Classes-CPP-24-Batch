#include "Airbus_Header_File.hpp"

int main(void)
{

    Airbus_Overview Overview("Airbus A350-1000 (A35K)"
                            , "A350-1000 is longest variant, complementing A350-900"
                            , "Feb 2018 with Qatar Airways; continuous updates through\n\t\t\t\t 2025"
                            , "375-400 pax in three-class; up to 480 in high-density layout"
                            , "~9,000nm (~16,700km) — ideal for ultra-long-haul routes"
                            , "Ultra-long-haul international flagship for major carriers");

        Overview.show();

    Airbus_Performance Performance("2 x Rolls-Royce Trent XWB-97 high-thrust turbofans (~97,000lbf\n\t\t\t\t each)"
                                , "~25 Percent lower per-seat fuel burn and CO2 emissions compared to Boeing 777-300ER"
                                , "~316-322t depending on configuration (variants WV006/014 up to 322.9t)"
                                , "Mach 0.85 (typical); Max cruise Mach 0.89 "
                                , "~43,000ft (~13,100m)"
                                , "Up to 159,000L (~41,200US-gal)");

        Performance.show();

    Airbus_Dimensions Dimensions("73.78m (~242ft)"
                                , "64.75m (~212ft)"
                                , "~17.08m (~56ft)"
                                , "5.96m; Max cabin width 5.61m"
                                , "~58.03m"
                                , "~44 LD3 containers or 14 pallets; ~208m rage to cube beneath floor");

        Dimensions.show();

    Airbus_Cabin Cabin("Founding model of Airbus's Airspace family with\n\t\t\t\t high ceilings, straight sidewalls, enlarged overhead bins, and mood lighting for\n\t\t\t\t enhanced inflight comfort"
                    , "Cabin altitude kept below ~6,000ft, high humidity, larger\n\t\t\t\t windows—all reduce jet lag"
                    , "Built-in high-speed connectivity, fiber optics-backed in-flight\n\t\t\t\t entertainment, personal screens up to 13 in economy; digital-native cabin"
                    , "6 private suites with doors, convertible sofa/single/double bed (~80\n\t\t\t\t length), 83″ pitch, integrated wardrobe/storage. Built-in headrest stereo eliminates\n\t\t\t\t need for headphones"
                    , "54 enclosed suites (1-2-1 layout), 51 pitch extendable to lie-flat 78\n\t\t\t\t bed; electric privacy partitions, overhead bins adjusted only on window side,\n\t\t\t\t headphone-free audio in headrests"
                    , "24 seats, wide recline seat pitch ~42, electrically controlled\n\t\t\t\t recline, fixed-back shell with privacy dividers"
                    , "155 seats in 3-3-3 layout, 18 wide seats, nine-abreast configuration with\n\t\t\t\t generous shoulder space and legroom");

        Cabin.show();

    Airbus_Highlights Highlights("Longest-range Airbus widebody with fuel efficiency, capacity flexibility, and cabin\n\t\t\t\t innovation"
                                , "Up to 480-seat capacity or premium-focused 375-400 seating, with 40 Percent more\n\t\t\t\t premium seating area"
                                , "Quietest twin-aisle cabin, lowered cabin altitude, advanced lighting & connectivity\n\t\t\t\t improve passenger comfort"
                                , "Continued strong sales traction with major orders like Riyadh Air (25+), Korean Air (27\n\t\t\t\t A350-1000s)");

        Highlights.show();

    return (0);
}

// 340 Line Code