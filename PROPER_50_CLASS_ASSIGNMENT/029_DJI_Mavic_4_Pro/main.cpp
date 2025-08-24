// Header File Inclusion
#include "Mavic_Header_File.hpp"

int main(void)
{

    Mavic_Overview Overview("DJI Mavic 4 Pro"
                        , "Officially announced 13 May 2025 (globally, excluding U.S.)"
                        , "Professional prosumer camera drone"
                        , "From USD 2,100-2,250 / Fly More Combo ~3,200 / Creator\n\t\t\t\t Combo ~4,400 (512GB combo)"
                        , "Not officially sold in U.S. due to regulatory challenges");
                        
        Overview.show(); 

    Mavic_Camera Camera("100MP, 4/3 Hasselblad CMOS, variable aperture f/2.0-f/11 (28mm equiv.)"
                    , "6K/60fps HDR, 4K/120fps slow-motion; 10-bit D-Log/HLG; ~16-stop dynamic range"
                    , "48MP, 1/1.3 sensor, 70mm equivalent, 4K/60fps HDR"
                    , "50MP, 1/1.5 sensor, 168mm equivalent, 4K/60ps HDR"
                    , "Variable ND4-ND64 across all lenses"
                    , "'Infinity Gimba'- 360 Degree horizontal rotation, tilt range -90 Degree to +70 Degree,\n\t\t\t\t enables vertical mode and Dutch-angle shots");

        Camera.show();

    Mavic_Flight Flight("6,654mAh (~95Wh)"
                    , "Up to 51 minutes (~45min hovering) - longest in DJI\n\t\t\t\t consumer line"
                    , "~25m/s (~90km/h sporty mode)"
                    , "Up to 6,000m above sea level"
                    , "Rated up to 12m/s (~43km/h)");

        Flight.show();

    Mavic_Transmission Transmission("OcuSync 4+ (O4+): up to 30km live 1080p/10-bit HDR;\n\t\t\t\t reduced to ~15km in CE markets "
                                , "Base model: 64GB; Creator Combo: 512GB SSD; supports\n\t\t\t\t microSD up to 1T"
                                , "240W hub: full charge 51min for 1 battery, 3 in 90min;\n\t\t\t\t USB-C 100W (~80min)");

        Transmission.show();

    return (0);
}

// 301 Line Code