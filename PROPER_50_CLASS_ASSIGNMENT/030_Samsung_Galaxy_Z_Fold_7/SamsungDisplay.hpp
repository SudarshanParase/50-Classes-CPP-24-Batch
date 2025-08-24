#ifndef SAMSUNG_DISPLAY_HPP
#define SAMSUNG_DISPLAY_HPP

#include <iostream>
#include <string>

class Samsung_Display
{
    private:

        std::string Type;
        char Touch;
        std::string Size;
        std::string Aspect_Ratio;
        std::string PPI;
        std::string Screen;
        std::string Brightness;
        std::string Features;
        std::string Notch;
        char Foldable_Display;
        std::string Dual_Display;

    public:

        Samsung_Display(std::string, char
                    , std::string, std::string  
                    , std::string, std::string 
                    , std::string, std::string 
                    , std::string, char 
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_DISPLAY_HPP