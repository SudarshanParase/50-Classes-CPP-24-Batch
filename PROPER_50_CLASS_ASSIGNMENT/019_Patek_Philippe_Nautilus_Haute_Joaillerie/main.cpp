#include "Patek_Header_File.hpp"

int main(void)
{

    std::cout << "\n========================= P A T E K   P H I L I P P E =========================" << std::endl << std::endl; 

    Patek_Overview Overview("Patek Philippe Nautilus Haute Joaillerie Ref. 5811/1460G-001"
                        , "Watches & Wonders Geneva 2025 (official launch)"
                        , "Haute Joaillerie sports-luxury analog wristwatch"
                        , "41mm 18K white gold (fully diamond-set)"
                        , "Approx. US$636,000 (~ Euro 544,950)");

            Overview.show();

    Patek_Movement Movement("Self-winding Caliber 26-330 S (with stop-seconds)"
                            , "~45-hour reserve "
                            , "Hours, minutes, central seconds (no date)");

            Movement.show();

    Patek_Dial Dial("~1,480 stones across case, dial & bracelet"
                    , "1,285 stones (~6.43ct) covering dial, case & outer bracelet links"
                    , "195 stones (~13.27ct) on bezel, bracelet center links & markers"
                    , "Diamond pave over white gold base; full gemstone indices; no date aperture for visual purity");

            Dial.show();

    Patek_Case Case("41mm x ~9.25mm; seamless octagonal silhouette trimmed in\n\t\t\t\t gem-setting"
                , "30m / 3 ATM compliant (standard for haute jewelry pieces)"
                , "Integrated white-gold bracelet entirely paved with diamonds\n\t\t\t\t (center links baguette, outer links brilliant)"
                , "Fold-over clasp, set with diamonds, engineered for comfort and security");

            Case.show();

    Patek_Limitations Limitations("Water resistance limited; meant for dress-y, high-glam\n\t\t\t\t use rather than performance situations"
                                , "Focused on aesthetics only; no date, chronograph,\n\t\t\t\t calendar or similar features"
                                , "Production extremely limited; suited for private clients\n\t\t\t\t and high-end collectors");

            Limitations.show();

    return (0);
}

// 297 Line Code