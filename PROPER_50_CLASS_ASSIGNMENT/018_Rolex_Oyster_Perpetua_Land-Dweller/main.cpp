// Header File Inclusion
#include "Rolex_Header_File.hpp"

int main(void)
{
    Rolex_Overview Overview("Rolex Oyster Perpetual Land-Dweller"
                            , "2025 (Watches & Wonders debut)"
                            , "36mm & 40mm"
                            , "Oystersteel & white gold (Rolesor), Everose gold, Platinum"
                            , "~CHF13,300 (36mm white Rolesor) to CHF111,500 (40mm\n\t\t\t\t platinum)"
                            , "Luxurious travel-ready dress-sport watch with modern technical\n\t\t\t\t innovation");

        Overview.show();

    Rolex_Movement Movement("Rolex Calibre 7135 automatic movement"
                        , "Dynapulse escapement (silicon-based, rolling impulse)"
                        , "36,000vph (5Hz) for chronometric precision to 1/10 sec"
                        , "Approximately 66hours"
                        , "Paraflex shock absorbers, ceramic balance staff, brass balance\n\t\t\t\t wheel"
                        , "Silicon Syloxi hairspring"
                        , "Transparent sapphire (displaying rotor & finishing)");

        Movement.show();

    Rolex_Dial Dial("Intense White or Ice Blue, honeycomb-pattern engraving"
                    , "Luminescent Chromalight, open Arabic numerals for legibility"
                    , "Date aperture at 3 o'clock (on 40mm) or simple no-date on\n\t\t\t\t 36mm models"
                    , "Fluted (some versions with diamond-set options)");

        Dial.show();

    Rolex_Case Case("Options: Oystersteel with white gold, full Everose gold, full\n\t\t\t\t Platinum"
                    , "100m (10ATM)"
                    , "New Flat Jubilee bracelet (highly integrated, slim profile)"
                    , "Oysterlock safety clasp with adjustment links");

        Case.show();

    Rolex_Limitations Limitations("Starts ~CHF 13,000 and may exceed CHF 111,000 based\n\t\t\t\t on materials"
                                , "Focused on time + date only, not for moon-phase or\n\t\t\t\t world time functionality"
                                , "Dress-sport styling may not suit tastes for fully sporty or\n\t\t\t\t haute complications");

        Limitations.show();
    
    return (0);
}

// 317 Line Code