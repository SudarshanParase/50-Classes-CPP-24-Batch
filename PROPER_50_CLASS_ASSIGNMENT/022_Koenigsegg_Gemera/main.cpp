#include "Koenigsegg_Header_File.hpp"

int main(void)
{
    Koenigsegg_Overview Overview("Koenigsegg Gemera"
                                , "Production began late 2024; deliveries started in 2025\n\t\t\t\t (limited to 300 units)"
                                , "Four-seat mega-GT hypercar"
                                , "Full carbon-fiber monocoque, dihedral synchro-helix\n\t\t\t\t butterfly doors"
                                , "Luxurious Nappa leather & Alcantara, carbon fiber accents,\n\t\t\t\t 4-seat comfort");

                Overview.show();

    Koenigsegg_Chassis Chassis("Carbon fiber monocoque"
                            , "Full carbon fiber for rigidity and lightweight"
                            , "Approx. 1,850kg"
                            , "Length: ~4,975mm; Width: ~1,988mm; Height: ~1,295mm;\n\t\t\t\t Wheelbase: ~3,000mm"
                            , "Trunk ~200L, enough for four carry-on suitcases + interior luggage\n\t\t\t\t space");

                Chassis.show();

    Koenigsegg_Interior Interior("Four individual sport seats with memory foam, supportive and\n\t\t\t\t spacious"
                                , "Nappa leather, Alcantara, exposed carbon fiber accents"
                                , "Individual passenger screens, Apple CarPlay, integrated Wi-Fi"
                                , "Three-zone climate control, 11-speaker audio, 8 cup holders (4\n\t\t\t\t heated, 4 cooled)");

                Interior.show();

    Koenigsegg_Suspension Suspension("Double-wishbone front and rear"
                                    , "Electronically assisted with rear-wheel steering for agility"
                                    , "Carbon-ceramic discs (415mm front, 390mm rear) with high-\n\t\t\t\t performance calipers"
                                    , "Forged alloy, Michelin Pilot Sport custom-spec tyres");

                Suspension.show();

    Koenigsegg_Technology Technology("Adaptive cruise, torque vectoring, parking sensors, 360 degree\n\t\t\t\t cameras"
                                    , "Integrated real-time navigation, Wi-Fi enabled"
                                    , "Multi-zone safety deployment"
                                    , "LSTT gearbox, Dark Matter motor architecture");

                Technology.show();

    Koenigsegg_Limitations Limitations("Only 300 units ever produced (slots fully reserved)"
                                    , "Estimated price well over US$2 million (exact pricing\n\t\t\t\t custom-negotiated)"
                                    , "Hypercar-level maintenance in specialized centers only");

                Limitations.show();

    return (0);
}

// 356 Line Code