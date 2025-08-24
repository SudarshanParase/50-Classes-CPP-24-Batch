#ifndef CANON_KEY_SPECS_HPP
#define CANON_KEY_SPECS_HPP

#include <iostream>
#include <string>

class Canon_Key_Specs
{
    private:

        std::string Functions;
        std::string Printing_Tech;
        std::string Color_Type;
        std::string Configuration;
        std::string Ink_Type;
        std::string Ink_Color;
        std::string Print_Resolution;
        std::string Media_Sizes;
        std::string Wireless;
        std::string Power_Source;

    public:

        Canon_Key_Specs(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // CANON_KEY_SPECS_HPP