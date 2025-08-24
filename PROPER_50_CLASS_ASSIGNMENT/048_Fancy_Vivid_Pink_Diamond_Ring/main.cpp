// Header File Inclusion
#include "Ring_Header_File.hpp"

int main(void)
{

    Ring_Overview Overview("Fancy Vivid Pink Diamond"
                        , "59.60 carats"
                        , "Mixed oval brilliant cut"
                        , "Internally Flawless by GIA"
                        , "Type IIa (extremely pure, less than 1 Percent of diamonds)"
                        , "Platinum (classic yet understated to highlight the gem)");

        Overview.show();

    Ring_Design Design("Intense pink hue, enormous size, unmatched brilliance"
                    , "Minimalist platinum mounting to showcase the central diamond"
                    , "Natural pink color, flawless clarity, exceptional cut symmetry");

        Design.show();

    Ring_Value Value("Doller 71.2 million (Sotheby's HongKong, 2017)"
                , "~ Doller 83 million including buyer's premium"
                , "Extremely high due to vividness and size"
                , "Priceless collector's item; record-setting over past decade");

        Value.show();

    Ring_Gemological Gemological("Fancy Vivid Pink (Grade rarely seen in such size)"
                                , "Internally Flawless - no visible inclusions"
                                , "IIa (highest purity classification by GIA)"
                                , "Mined by De Beers; expertly cut over ~20 months (Steinmetz lab)");

        Gemological.show();

    Ring_Cultural Cultural("Still the highest-priced gemstone ring sold at auction"
                        , "Set the standard for luxury pink diamonds in the jewellery world"
                        , "Revered by elite collectors and institutions");

        Cultural.show();

    return (0);
}

// 300 Line Code