#ifndef SAMSUNG_OVERVIEW_HPP
#define SAMSUNG_OVERVIEW_HPP

#include <iostream>
#include <string>

class Samsung_Overview
{
    private:
    
        std::string Specs_Score;
        std::string Resolution;
        std::string RAM;
        short int Storage;
        std::string CPU;
        std::string Rear_Camera;
        std::string Front_Camera;
        short int Battery;
        std::string Unique_Features;

    public:

        Samsung_Overview(std::string, std::string 
                        , std::string, short int 
                        , std::string, std::string 
                        , std::string, short int
                        , std::string ); // Only Declaration

        void show(); // Only Declaration
};

#endif // SAMSUNG_OVERVIEW_HPP