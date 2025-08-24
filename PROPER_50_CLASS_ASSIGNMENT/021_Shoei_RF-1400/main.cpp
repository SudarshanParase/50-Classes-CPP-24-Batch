// Header File Inclusion
#include "Shoei_Header_File.hpp"

int main(void)
{
    Shoei_Overview Overview("Shoei RF-1400"
                        , "Flagship sports-touring helmet (replacing RF-1200)"
                        , "Advanced AIM+ full-fiber composite shell (fiberglass, organic +\n\t\t\t\t glass fibers, resin)"
                        , "~$550 (solid colors) up to ~$700+ for special graphics models"
                        , "ECE 22.06, DOT, Snell M2020D (depending on region)"
                        , "Sport-touring, highway cruising, daily riding");

            Overview.show();

    Shoei_Weight Weight("Approx. 1623g / 3.58lbs in Medium size"
                    , "Intermediate oval head shape, multiple shell sizes (XS-3XL)"
                    , "Removable, washable, moisture-wicking, replaceable cheek pads");

            Weight.show();

    Shoei_Ventilation Ventilation("Dual chin intake + top vents + rear exhaust ports; effective low-\n\t\t\t\t noise airflow control"
                                , "Tuned in wind tunnel; stable at high speed with controlled\n\t\t\t\t buffeting");

            Ventilation.show();

    Shoei_Visor Visor("Elliptec II quick-release face shield for wide, distortion-free view"
                    , "Pinlock EVO lens compatibility (optional upgrade)"
                    , "Taller and wider than previous RF series for better peripheral vision");

            Visor.show();

    Shoei_Safety Safety("Multi-layer AIM+ fiberglass composite for high energy\n\t\t\t\t absorption"
                    , "Dual-density EPS liner tuned to absorb both low- and high-\n\t\t\t\t speed impacts"
                    , "Meets or exceeds DOT, ECE 22.06, and Snell M2020D\n\t\t\t\t standards"
                    , "Very quiet at highway speeds, reduced turbulence design");

            Safety.show();

    Shoei_Comfort Comfort("Cushioned, removable/washable moisture control fabric"
                        , "Easy removal cheek pads, full replaceable liner"
                        , "Glove-friendly vent sliders and shield lock"
                        , "Pre-wired speaker pockets for communication systems\n\t\t\t\t (Sena/SRL compatible)");

            Comfort.show();

    Shoei_Limitations Limitations("Premium level (~$550-700), higher than many entry to\n\t\t\t\t mid-tier helmets"
                                , "Not modular; fixed full-face design"
                                , "Lacks dedicated MIPS/rotational impact system; AES\n\t\t\t\t relies on shell/liner design instead");
                 

    return (0);
}

// 396 Line Code