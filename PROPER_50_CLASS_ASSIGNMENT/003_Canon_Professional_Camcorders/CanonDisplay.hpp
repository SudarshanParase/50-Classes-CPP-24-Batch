#ifndef CANON_DISPLAY_HPP
#define CANON_DISPLAY_HPP

#include <iostream>
#include <string>

class Canon_Display
{
    private:

        std::string Display_Type;
        std::string Screen_Size;
        char Touchscreen;
        int Screen_Resolution;

    public:

        Canon_Display(std::string, std::string 
                    , char, int); // Only Declaration


        void show(); // Only Declaration
};
#endif  // CANON_DISPLAY_HPP