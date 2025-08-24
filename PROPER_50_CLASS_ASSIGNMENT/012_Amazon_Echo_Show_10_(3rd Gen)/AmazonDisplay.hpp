#ifndef AMAZON_DISPLAY_HPP
#define AMAZON_DISPLAY_HPP

#include <iostream>
#include <string>

class Amazon_Display
{
    private:

        std::string Screen_Size;
        std::string Resolution;
        char Touchscreen;
        std::string Rotation;
        std::string Material;
        std::string Colors_Available;
        std::string Dimensions;
        std::string Weight;

    public:

        Amazon_Display(std::string, std::string
                    , char, std::string
                    , std::string, std::string  
                    , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};
#endif // AMAZON_DISPLAY_HPP