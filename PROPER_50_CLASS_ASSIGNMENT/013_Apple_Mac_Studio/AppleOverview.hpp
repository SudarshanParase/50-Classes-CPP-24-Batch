#ifndef APPLE_OVERVIEW_HPP
#define APPLE_OVERVIEW_HPP

#include <iostream>
#include <string>

class Apple_Overview
{
    private:

        std::string Model;
        std::string Price;
        std::string Release_Date;
        std::string Target;
        std::string Form_factor;
        std::string Build_Material;
        std::string Color;

    public:

        Apple_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration
                    
        void show(); // Only Declaration
};

#endif // APPLE_OVERVIEW_HPP