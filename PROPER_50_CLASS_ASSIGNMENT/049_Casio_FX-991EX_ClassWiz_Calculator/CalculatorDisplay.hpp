#ifndef CALCULATOR_DISPLAY_HPP
#define CALCULATOR_DISPLAY_HPP

#include <iostream>
#include <string>

class Calculator_Display
{
    private:

        std::string Display;
        std::string Lines;
        std::string Visual;
        std::string Code;

    public:

        Calculator_Display(std::string, std::string 
                        , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // CALCULATOR_DISPLAY_HPP