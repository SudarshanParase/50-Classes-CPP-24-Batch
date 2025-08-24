#include "Handkerchief_Header_File.hpp"

int main(void)
{
    Handerchief_Overview Overview("Hermes (France)"
                                , "Faconnee Grand H Silk Pocket Square"
                                , "Luxury Pocket Square / Handkerchief"
                                , "France"
                                , "Ongoing core collection in 2025");

            Overview.show();

    Handkerchief_Material Material("100 Percent silk jacquard (foulard-weight)"
                                , "Hand-rolled and stitched"
                                , "Cut-and-sewn 'Faconnee' technique - reveals pattern on\n\t\t\t\t both sides"
                                , "Semi-lustrous silk with smooth drape");

            Material.show();

    Handkerchief_Size Size("45cm x 45cm (approx. 16.5' x 16.5') - standard size"
                        , "~20g - lightweight for versatile styling"
                        , "Ideal for suit jacket breast pocket - holds folds well");

            Size.show();
        
    Handkerchief_Design Design("'Grand H' geometric motif - centered repeated Hermes 'H' pattern"
                            , "Classic Hermes Orange with White, Navy/White,\n\t\t\t\t Bleu/Gray; seasonal variants"
                            , "Beautiful both flat and puff folds");

            Design.show();

    Handkerchief_Quality Quality("Soft, smooth, breathable silk"
                                , "Silk-thread rolled hem - no fraying"
                                , "Dry clean recommended; store flat to preserve edges"
                                , "Durable silk that may last decades if properly stored");

            Quality.show();

    Handkerchief_Packaging Packaging("One silk square folded neatly"
                                , "Signature Hermes orange box with ribbon wrapping"
                                , "Branded silk pouch included in select purchases");

            Packaging.show(); 

    return (0);
}

// 342 Line Code