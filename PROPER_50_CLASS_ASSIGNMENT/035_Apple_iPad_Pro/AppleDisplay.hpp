#ifndef APPLE_DISPLAY_HPP
#define APPLE_DISPLAY_HPP

#include <iostream>
#include <string>

class Apple_Display
{
    private:

       std::string Type;
       char Touch;
       std::string Size;
       std::string Aspect_Ratio;
       std::string PPI;
       char Ratio;
       std::string Features;

    public:

        Apple_Display(std::string, char 
                    , std::string, std::string 
                    , std::string, char 
                    , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_DISPLAY_HPP