#ifndef SAMSUNG_KEY_SPECS_HPP
#define SAMSUNG_KEY_SPECS_HPP

// Header file Inclusion
#include <iostream>
#include <string>

class Samsung_Key_Specs
{
    private:

        std::string Display_System;
        std::string Native_Chip_Resolution;
        std::string Max_Brightness;
        std::string Projection_Size;
        std::string Supported_HDR;
        std::string I_O;
        std::string Light_Source;

    public:

        Samsung_Key_Specs(std::string, std::string, std::string
                        , std::string, std::string, std::string
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_KEY_SPECS_HPP