#ifndef SAMSUNG_IMAGE_DISPLAY_HPP
#define SAMSUNG_IMAGE_DISPLAY_HPP

#include <iostream>
#include <string>

class Samsung_Image
{
    private:

        std::string Display_System;
        std::string Native_Chip;
        std::string Max_Brightness;
        std::string Aspect_Ratio;

    public:

        Samsung_Image(std::string, std::string
                    , std::string, std::string); // Only Declaration

        
        void show(); // Only Declaration
};

#endif // SAMSUNG_IMAGE_DISPLAY_HPP