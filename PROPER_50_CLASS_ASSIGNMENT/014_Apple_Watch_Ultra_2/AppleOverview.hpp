#ifndef APPLE_OVERVIEW_HPP
#define APPLE_OVERVIEW_HPP

#include <iostream>
#include <string>

class Apple_Overview
{
    private:

        std::string Model;
        std::string Release_Date;
        std::string Price;
        std::string Category;
        std::string Target_Audience;
        std::string Material;
        std::string Color;

    public:

        Apple_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};
#endif // APPLE_OVERVIEW_HPP