#ifndef APPLE_DISPLAY_HPP
#define APPLE_DISPLAY_HPP

#include <iostream>
#include <string>

class Apple_Display
{
    private:

        std::string Display_Type;
        std::string Size;
        std::string Resolution;
        std::string Brightness;
        std::string Glass_Protection;
        std::string Water;
        std::string Design;
        std::string Weight;

    public:

        Apple_Display(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string, std::string); // Only Declaration
        
        void show(); // Only Declaration
};

#endif // APPLE_DISPLAY_HPP