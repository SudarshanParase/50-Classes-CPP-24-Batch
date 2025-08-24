#ifndef AO_OVERVIEW_HPP
#define AO_OVERVIEW_HPP

#include <iostream>
#include <string>

class AO_Overview
{
    private:

        std::string Model;
        std::string Category;
        std::string Energy;
        std::string Price;
        std::string Target;

    public:

        AO_Overview(std::string, std::string
                    , std::string, std::string
                    , std::string); // Only Declaration

        void show(); // Only Declaration
};
#endif // AO_OVERVIEW_HPP
