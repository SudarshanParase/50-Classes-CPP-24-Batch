#ifndef SAMSUNG_DISPLAY_HPP
#define SAMSUNG_DISPLAY_HPP

#include <iostream>
#include <string>

class Samsung_Display
{
    private:    

        short int Display_Size;
        std::string Panel_Type;
        std::string Aspect_Ratio;
        std::string Resolution;
        std::string Maximum_Brightness;
        std::string HDR_Compatibility;
        std::string Contrast_Ratio;
        std::string Dynamic_Contrast_Ratio;
        std::string Response_Time;
        short int Refresh_Rate;
        std::string Variable_Refresh_Tech;
        std::string Bit_Depth;
        std::string Color_Gamut;
        std::string Viewing_Angle;
        std::string Screen_Area;
        short int Curvature;
        std::string Dot_Pitch;
        short int Pixels_Per_Inch;
        std::string Finish;
        char Touchscreen_Technology;

    public:

        Samsung_Display(short int _1, std::string _2, std::string _3, std::string _4, std::string _5 
                      , std::string _6, std::string _7, std::string _8, std::string _9, short int _10 
                      , std::string _11, std::string _12, std::string _13, std::string _14, std::string _15 
                      , short int _16, std::string _17, short int _18, std::string _19, char _20); // Only Declaration
       
        void show(); // Only Declaration
};

#endif // SAMSUNG_DISPLAY_HPP