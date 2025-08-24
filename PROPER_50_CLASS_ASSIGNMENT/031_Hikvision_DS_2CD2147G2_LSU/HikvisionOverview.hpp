#ifndef HIKVISION_OVERVIEW_HPP
#define HIKVISION_OVERVIEW_HPP

#include <iostream>
#include <string>

class Hikvision_Overview
{
    private:

        std::string Model;
        std::string Category;
        std::string Launched;
        std::string Use;
        std::string Price;

    public:

        Hikvision_Overview(std::string, std::string
                        , std::string, std::string
                        , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // HIKVISION_OVERVIEW_HPP
