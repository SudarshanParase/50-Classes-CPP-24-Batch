#ifndef NIKE_COLORS_HPP
#define NIKE_COLORS_HPP

#include <iostream>
#include <string>

class Nike_Colors
{
    private:

        std::string Main;
        std::string Design;
        std::string Branding;
        std::string Limited;

    public:

        Nike_Colors(std::string, std::string
                , std::string, std::string); // Only Declaration

        void show(); // Only Declaration
};

#endif // NIKE_COLORS_HPP