#ifndef APPLE_OVERVIEW_HPP
#define APPLE_OVERVIEW_HPP

#include <iostream>
#include <string>

class Apple_Overview
{
    private:

        std::string Specs_Score;
        char Sim_Count;
        std::string Display_Size;
        std::string Resolution;
        char Screen_Ratio;
        std::string RAM;
        std::string CPU;
        std::string CPU_Cores;
        std::string Front_Camera;
        short int Weight;
        std::string Thickness;
        std::string Unique_Features;

    public:

        Apple_Overview(std::string, char 
                    , std::string, std::string 
                    , char, std::string 
                    , std::string, std::string 
                    , std::string, short int 
                    , std::string, std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // APPLE_OVERVIEW_HPP