#ifndef FIRE_BOLTT_TECHNICAL_HPP
#define FIRE_BOLTT_TECHNICAL_HPP

#include <iostream>
#include <string>

class Technical_Information
{
    private:

        std::string Brand;
        std::string Manufacturer;
        std::string Series;
        std::string Colour;
        std::string Item_Height;            // 5
        std::string Item_Width;
        std::string Display_Size;
        std::string Product_Dimensions;
        std::string Batteries;
        std::string Item_Model_No;          // 10
        std::string Connectivity;
        std::string Wireless;
        std::string Operating_System;
        std::string Battery_Charge_Time;
        std::string Average_Battery_Life;   // 15
        char Are_Batteries_Included;
        std::string Lithium_Battery_Energy;
        std::string Lithium_Battery_Weight;
        char No_of_Lithium;
        std::string Included_Components;
        
    public:

        Technical_Information(std::string, std::string
                            , std::string, std::string
                            , std::string, std::string  
                            , std::string, std::string
                            , std::string, std::string
                            , std::string, std::string
                            , std::string, std::string
                            , std::string, char
                            , std::string, std::string 
                            , char, std::string); // Only Declaration

        void show(); // Only Declaration



};

#endif // FIRE_BOLTT_TECHNICAL_HPP
