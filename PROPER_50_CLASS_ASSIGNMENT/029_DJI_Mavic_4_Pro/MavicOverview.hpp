#ifndef MAVIC_OVERVIEW_HPP
#define MAVIC_OVERVIEW_HPP

#include <iostream>
#include <string>

class Mavic_Overview
{
    private:

        std::string Model;
        std::string Launched;
        std::string Category;
        std::string Starting;
        std::string US;

    public:

        Mavic_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // MAVIC_OVERVIEW_HPP