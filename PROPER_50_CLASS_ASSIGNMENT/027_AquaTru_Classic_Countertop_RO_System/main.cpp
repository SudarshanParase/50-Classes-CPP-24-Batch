#include "Aqua_Header_File.hpp"

int main(void)
{

    std::cout << "\n============ A Q U A T R U   C L A S S I C   C O U N T E R T O P ==============" << std::endl << std::endl;
  
    Aqua_Overview Overview("AquaTru Classic Countertop RO System"
                        , "Premium countertop reverse osmosis (RO) system"
                        , "Early 2022, consistently ranked #1 in 2025 reviews"
                        , "Pure drinking and cooking water, via plug-and-play countertop setup"
                        , "Approx. Rupee 35,000- Rupee 50,000 (depending on retailer/import duties in India)"
                        , "Tested and certified for NSF reduction standards (lead, PFAS,\n\t\t\t\t fluoride, chlorine, etc.)");

        Overview.show();

    Aqua_Filtration Filtration("Four-stage RO: Sediment Carbon RO membrane\n\t\t\t\t Post-carbon polishing"
                            , "Removes >99 Percent of TDS, heavy metals, nitrates, fluoride,\n\t\t\t\t PFAS/PFOA, chlorine, VOCs — highest reduction rates\n\t\t\t\t among countertop filters"
                            , "Typically <10 ppm (tap water lab tests rated AquaTru as best in class)"
                            , "~0.75litres/minute (~45L/hour)");

        Filtration.show();

    Aqua_Capacity Capacity("Built-in tank holds ~4litres for immediate dispensing"
                        , "Countertop unit: ~30 x 35 x 30cm (compact vertical profile)"
                        , "No plumbing required—store-bought unit plugs into a\n\t\t\t\t faucet adapter. Ideal for renters or travelers"
                        , "RO membrane and carbon filter replacement every 6-12\n\t\t\t\t months depending on usage");

        Capacity.show();

    Aqua_Advantages Advantages("Near-total contaminant removal including PFAS\n\t\t\t\t and fluoride"
                            , "Easy setup, no installation, suitable for countertop\n\t\t\t\t or portable use"
                            , "Consistently top-ranked by independent reviewers"
                            , "High-end RO performance without under-sink\n\t\t\t\t permanent setup or high cost");

        Advantages.show();

    Aqua_Limitations Limitations("Produces ~3-4x wastewater vs filtered water, typical\n\t\t\t\t of RO systems"
                                , "Removes all minerals — some users may prefer post-\n\t\t\t\t filter additives for taste or health"
                                , "Annual filter/membrane replacements (~ Rupee 7,000-\n\t\t\t\t Rupee 10,000 per year)");
    return (0);
}

// 303 Line Code