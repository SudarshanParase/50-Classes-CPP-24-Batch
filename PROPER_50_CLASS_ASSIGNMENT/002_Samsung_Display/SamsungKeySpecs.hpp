#ifndef SAMSUNG_KEY_SPECS_HPP
#define SAMSUNG_KEY_SPECS_HPP

#include <iostream>
#include <string>

class Samsung_Key_Specs
{
    private:

        short int Display_Size;
        std::string Panel_Type;
        std::string Resolution;
        std::string Max_Brightness;
        std::string HDR_Compatibility;
        std::string Bit_Depth;
        std::string Color_Gamut;
        std::string Finish;
        char Touchscreen_Technology;
        std::string Inputs;
        std::string Outputs;
        std::string USB_IO;
        char Built_In_Speackers;

    public:

        Samsung_Key_Specs(short int _1, std::string _2, std::string _3, std::string _4
                        , std::string _5, std::string _6, std::string _7, std::string _8 
                        , char _9, std::string _10, std::string _11, std::string _12 
                        , char _13);
      
        void show(); // Only Declaration
};

#endif // SAMSUNG_KEY_SPECS_HPP